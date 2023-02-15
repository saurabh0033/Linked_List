#include<bits/stdc++.h>
using namespace std;

//class
class node{
  public:
        int data;
        node *next;
        
        //constructor
        node(int d){
          this->data=d;
          this->next=NULL;
        }
};

//inserting at head of the node
void insertAtHead(node*&head,int d){
  node *temp=new node(d);
  temp->next=head;
  head=temp;
}


//Printing the values
void Print(node* &head){
  node*temp=head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}


//Main Function
int main() 
{
  node *node1=new node(10);
  node *head=node1;
  insertAtHead(head,11);
  insertAtHead(head,12);
  insertAtHead(head,13);
  insertAtHead(head,14);
  
  //print
  Print(head);
  return 0;
}
