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
    
};  


void display(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

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

Node* reverseLinkList(Node * head){
    struct Node* prev = NULL, *curr = head, *n = NULL;
    while(curr != NULL){
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}

int main() {
    Node* head = NULL;

    head = insertTail(head, 10);
    head = insertTail(head, 20);
    head = insertTail(head, 30);
    head = insertTail(head, 40);

    cout << "Original List: ";
    display(head);  

    cout << "Reversed List:";
    head = reverseLinkList(head);

    display(head);
    return 0;
}
