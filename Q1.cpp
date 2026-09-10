#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }

    void display(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};   // <-- ADD THIS: close the class here

// Now these are normal free functions, not class members
Node* insertHead(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

Node* insertTail(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

int main() {
    Node* head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);
    head = insertTail(head, 40);

    cout << "Original List: ";
    head->display(head);   // <-- changed: display is a Node member, call it via head
    return 0;
}
// no stray };  at the end anymore