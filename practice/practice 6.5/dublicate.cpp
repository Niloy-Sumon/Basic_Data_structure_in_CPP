#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head=newNode;
        return;
    }
    Node * tmp = head;
    while (tmp->next !=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printing_linked_list(Node * head)
{
    cout<<endl<<endl<<"Your Linked List: "<<endl<<endl;
    Node * tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    int val;
    Node * head = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    
    printing_linked_list(head);
    return 0;
}