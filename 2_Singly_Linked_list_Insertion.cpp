#include<bits/stdc++.h>
using namespace std;

//Insertion at Tail 

class Node{
  public:
      int data;
      Node*next;
      
      //constructor
      Node(int d){
        this->data=d;
        this->next=NULL;
      }
};

//inserting the value from tail side
void insertAtTail(Node* &tail, int d){
  Node* temp=new Node(d);
  tail->next=temp;
  tail=temp;
}

//Printing the value
void Print(Node*head){
  Node* temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
//output-10 11 12 13 14 15 16 

int main(){
  //calling class
  Node* n1=new Node(10);
  Node* head= n1;
  Node* tail=n1;
  // insert at tail
  insertAtTail(tail,11);
  insertAtTail(tail,12);
  insertAtTail(tail,13);
  insertAtTail(tail,14);
  insertAtTail(tail,15);
  insertAtTail(tail,16);
  
  
  //print
  Print(head);
  return 0;
}
