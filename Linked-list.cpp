#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = nullptr;
    }
};

void display(Node* head){
    
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;

    }
    cout << " null ";
}


int main() {
   
    Node* head = new Node(1);
    Node* top2 = new Node(2);
    Node* top3 = new Node(3);
    Node* top4 = new Node(4);
    
    head->next = top2;
    top2->next = top3;
    top3->next = top4;

    
    display(head);

   return 0;
}
