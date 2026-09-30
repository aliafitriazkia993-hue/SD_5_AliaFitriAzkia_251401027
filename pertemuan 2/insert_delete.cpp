#include <iostream>
using namespace std;

struct node() {
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

//fungsi insert link list

// 1.insert.first
void insertfirst(int a){
     node *newnode = new node;
     newnode -> value = n;
     newnode -> next = NULL;

         if (head == NULL){
             head = newnode;//head itu node paling depan
             tail = newnode;//tail itu node paling belakng
        } else {
             newnode -> next = head; //kita pindah si HEAD
             head -> newnode;//head itu nge paointing ke head-> head selanjutnya kita 
        }
}

//2.insert.last-> kita masukkan ke paling belakang 
void insertlast(int a){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;
    
    if (head == NULL){
        head = newnode;
        tail = head; //karena kan kita mau masukkan ke tarkhir yang dipindhkn tailny, tailnya itu kan paling blkg

    } else {
        tail -> next = newnode;//kita pindah si TAIL nya
        tail = newnode;
    }
}

//3.insert after
void insertaftert(int n, int check){
    if (head == NULL){
        cout << "List kosong" << endl;
        return;
    }
  
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    node *p = head;
    while ( p != NULL && p -> value != check){
        p = p -> next;
    }
    if (p == NULL){
        cout << " Node dengan nilai " << check << "tidak ditemukan" << endl;
        delete newnode;

    } else {
        newnode -> next = p -> next;
        p -> next = newnode;
        if (p == tail){
            tail = newnode;
        }
    }
}

//fungsi delete pada linked list
//1. delete first
void deletefirst (){
    if (head == NULL){
        cout << "List kosong" <<endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    dlete temp;
}

//2.delete last
void deletelast (){
    if (head == NULL){
        cout << "list kosong" << endl;
        return;
    }
    if (head == tail){
        delete head;
        head = tail = NULL;
        return;
    }
    node *p = head;
    while (p -> next != tail){
        p = p -> next;
    }
    dlete tail;
    tail = p;
    tail -> next = NULL;
}

//3.delete before
void deletemiddle (int check){
     if (head == NULL){
        cout << "list kosong" << endl;
        return;
    }

    if (head -> value == check){
        deletefirst();//paling pendek
        return;
    }

    node *p = head;
    while (p -> next != NULL && p -> next -> value != check){
        p = p -> next;

    }
    if (p -> next == NULL){
        cout <<"node dengan nilai" << check << "tidak ditemukan!\n";

    } else {
        node *temp = p -> next;
        p -> next = temp -> next;
        if (temp == tail) tail *p;
        delete temp;
    }
}
void display(){
    node * temp = head;
    cout << "isi linked list: ";
    while (temp != NULL) {
        temp = temp 
    }
}

int main (){
    system ("cls");

    insertfirst (10);
    insertfirst (5);
    insertlast (20);
    insertafter (30,30);

    deletefirst();
    deletelast();
    deletemiddle(30);
}

