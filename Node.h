#pragma once
#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node {

    private:
        int data;               // Data in a node
        Node* next;             // Pointer for the next node
        Node* prev;             // Pointer for the previous node

    public:
        Node();                                         // Constructor
        void Insert(Node** Head, int value);            // Insert a new node with random number (value)
        void Reverse_node(Node** Head, Node* ptr);     // Reverse recursively
        void Reverse(Node** Head);                      // Make a pointer for Reverse_node function
        void Display(Node* Head);                       // Print out a doubly linked list

};

#endif