#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct node
{
    int Jid;
    struct node *next;
};

class cQueue
{
    node *front, *rear;
    public:
    cQueue()
    {
	front=rear=NULL;
    }
    void addJob();
    void delJob();
    void displayJob();
};

void cQueue::addJob()
{
    node *nn;
    int n;
    cout<<"Enter Job ID : ";
    cin>>n;
    nn=new node;
    nn->next='\0';
    nn->Jid=n;
    if(rear==NULL)
	rear=front=nn;
    else
    {
	rear->next=nn;
	rear=nn;
    }
}

void cQueue::displayJob()
{
    node *temp;
    temp=front;
    while(temp->next!=NULL)
    {
	cout<<"JOB ID : "<<temp->Jid;
	temp=temp->next;
    }
}

void cQueue::delJob()
{
    node *temp;
    if(front==NULL)
    {
	cout<<"Queue is Empty";
    }
    else
    {
	temp=front;
	delete(temp);
	front=front->next;
    }
}

int main()
{
    cQueue c;
    c.addJob();
    c.displayJob();
    c.delJob();
    return 0;	
}
