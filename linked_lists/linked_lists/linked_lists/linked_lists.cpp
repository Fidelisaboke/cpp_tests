//Creation of types of linked lists in C++

#include <iostream>
using namespace std;

//Singly linked list
struct singly_linked_node {
    int data;
    struct singly_linked_node* next;
};

//Doubly linked list
struct doubly_linked_node {
    int data;
    struct doubly_linked_node* previous;
    struct doubly_linked_node* next;
};

int main()
{
    return 0;
}