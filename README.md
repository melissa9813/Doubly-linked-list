# Doubly-linked-list

#### HK PolyU COMP1011 Assignment 3 (2020/21 Semester 2)

### Requirements
In this assignment, you are going to write a C++ program that could reverse a doubly linked list in a special way. Given a doubly linked list, we aim to manipulate it according to four requirements as follows.

1. Each node in this linked list should be implemented as an object (belongs to a class called Node). Its data should be private, and its two links should be public.
2. Each node contains a positive integer (range from 0 to 99) as its data. This integer is randomly generated when the node is created (Hint: You could use function rand() % 100 from #include <stdlib.h> . If you want to create a new object within a for loop or while loop, you may need to use Node *nodei = new Node();).
3. The user could input the length of this doubly linked list and the program will create it accordingly. Then, the program should print out this linked list from the beginning to the end by using a member function of class Node.
4. Write another recursive non-member function to reverse the linked list. It should set the last node in the original list as the first node and the linking order should be the reverse of the original one. For example, if we have a linked list [2, 1, 6, 7, 11], then the output should be [11, 7, 6, 1, 2]. Finally, print out the reversed linked list using the member function defined in point 3.
