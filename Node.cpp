#include "Node.h"

// Constructor
Node::Node() {

    this->data = data;          // Put data
}


// Insert a new node at the end
    // Use a double pointer to easily update the head pointer's value.
    // value is random number generated in main function

void Node::Insert(Node** Head, int value) {
     
    Node* NewNode = new Node();         // Allocate a new node
    NewNode->data = value;              // New node has random number as data
    NewNode->next = NULL;               // New node points NULL for now

    
    // If an empty list,
    if (*Head == NULL) {                // Head pointing NULL means an empty list
        NewNode->prev = NULL;           // In an empty list, new node becomes head               
        *Head = NewNode;                
        return;
    }

    // If not an empty list, 
    Node* tail = *Head;                 // Move to the tail to insert a new node at the end.
    while (tail->next != NULL) {        // Tail is where the next is NULL
        tail = tail->next;              // Stop when to arrive at the tail
    }

    tail->next = NewNode;               // Insert a new node (containing a random number) at the tail
    NewNode->prev = tail;               // Now, a new node's previous is tail (update)

    return;
}

// Reverse recursively
void Node::Reverse_node(Node** Head, Node* ptr) {
    // Base condition: when ptr reaches a last node
    if (ptr->next == NULL) {
        
        // Swap between prev and next
        Node* temp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = temp;

        // Update a doubly linked list to use the same display function for printing out
        *Head = ptr;
        return;
    }

    // Swap between prev and next
    Node* temp = ptr->prev;
    ptr->prev = ptr->next;
    ptr->next = temp;

    // Recursion
    Reverse_node(Head, ptr->prev);
}


// Create an independent pointer to use for reverse
void Node::Reverse(Node** Head) {
    // ptr (pointing head) will be passed to reverse a doubly linked list
    Node* ptr = *Head;
    Reverse_node(Head, ptr);
}


// Print out a linked list (forward, backward)
void Node::Display(Node* Head) {

    // Start from the first node to the last node
    for (int i = 0; Head != NULL; i++) {
        
        if (i == 0) {
            cout << "[ " << Head->data;
        }
        else {
            cout << ", " << Head->data;
        }
        Head = Head->next;
        
    }
    cout << " ]" << endl << endl;

}




