#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int data) {
    Node* newNode = new Node();

    newNode->value = data;
    newNode->next = NULL;

    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    Node* temp = front;

    cout << "Data yang dihapus: " << front->value << endl;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    delete temp;
}

void display() {
    if (front == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    Node* temp = front;

    cout << "Isi Queue: ";

    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    dequeue();
    display();

    return 0;
}