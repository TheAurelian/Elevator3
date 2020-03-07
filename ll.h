#ifndef LL_H
#define LL_H

struct Node {
    int data;
    struct Node * next;
};

// Appends an integral to the end of a linked list
void append(struct Node **head, int new_data);
// Prints the contents of a linked list
void print_ll(struct Node * head);
#endif