#include<iostream>
using namespace std;
 class node
 {  public:
   int data;
   node *next;
 };
 class queue
  {
    public:
    node *front;
    node *rear;
    queue()
    {
      front=NULL; 
      rear=NULL;
    }
     void insert()
   {
     node *t;
     t=new node;
     cout<<"enter the job=";
     cin>>t->data;
     t->next=NULL;
     if(rear==NULL)
     rear=front=t;
     else
	{
     rear->next=t;
     rear=t;
	}
   }
    void del()
   {   
      node *t;
      t=new node;
      if(front==NULL) 
      {
        cout<<"empty";
      }
      else
      {
        t=front;
	front=front->next;
         delete(t);
      }
    }
  void display()
{
	node *t;
t=front;
if(t==NULL)
cout<<"Empty queue\n";
else
{
	while(t!=NULL)
	{
	cout<<t->data<<"\t";
	t=t->next;
}
}
}
};
    int main()
  {
    queue q;
   int ch,c;
	do
	{
	cout<<"1. Insert\n2. Delete\n3. Display\n";
	cout<<"Enter your choice\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	        q.insert(); 
		break;
	case 2:
	        q.del();
	        break;
	case 3:
		q.display();
		break;
	}
	cout<<"Want to continue 1/0\n";
	cin>>c;
	}while(c==1);
    return 0;
}
      
