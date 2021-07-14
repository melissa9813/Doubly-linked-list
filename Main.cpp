#include "Node.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main() {

    int length, random_data;
    // Empty node and head pointing nothing.
    Node node;
    Node* head = NULL;

    // Input the length of doubly linked list
    // Input must be an integer and larger than 0.
    cout << "Enter the length of doubly linked list: ";
    while (!(cin >> length) || (length <= 0)) {
        // Clear when userinput is char type
        cin.clear();
        cin.ignore();
        cout << "Invalid input. Enter again: ";
    }
    cout << endl;

    // Generate 'length' numbers of random numbers
    for (int i = 0; i < length; i++) {
        // Random number range [0-99]
        random_data = rand() % 100;
        // Insert random number into a doubly linked list
        node.Insert(&head, random_data);
    }

    // Print Forward
    cout << " ==== Forward === " << endl;
    node.Display(head);

    // Reverse
    node.Reverse(&head);

    // Print Backward
    cout << " ==== Backward === " << endl;
    node.Display(head);

    return 0;
}
