#include <iostream>
#include <stdio.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *n)
{
    if (n == nullptr)
    {
        printf("List is empty\n");
        return;
    }
    while (n != nullptr)
    {
        cout << n->data << " ";
        n = n->next;
    }
    printf("\n");
}

void addNode(Node *n, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    while (n->next != nullptr)
    {
        n = n->next;
    }
    n->next = newNode;
}

void removeLastNode(Node *n)
{
    while (n->next->next != nullptr)
    {
        n = n->next;
    }
    delete n->next;
    n->next = nullptr;
}

int main()
{
    Node *head = new Node();
    printList(head);
    addNode(head, 1);
    printList(head);
    addNode(head, 2);
    printList(head);
    addNode(head, 3);

    printList(head);

    removeLastNode(head);
    printList(head);
    removeLastNode(head);
    printList(head);
    removeLastNode(head);
    printList(head);

    return 0;
}