#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* top = NULL;

void push(int data) {
    Node* newNode = new Node();

    newNode->value = data;
    newNode->next = top;

    top = newNode;
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* temp = top;

    cout << "Data yang dihapus: " << top->value << endl;

    top = top->next;

    delete temp;
}

void display() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* temp = top;

    cout << "Isi Stack: ";

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    pop();
    display();

    return 0;
}