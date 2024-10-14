#include<iostream>
using namespace std;
#define max 20

class CQ
{
    int q[max],data;
    int rear; int front;
    public:
    int qFull();
    int qEmpty();
    void qi();
    void qd();
    void qdis();
    CQ()
    {
    rear=front=-1;
    }
};

int CQ::qFull()
{
    if((rear==max-1)&&(front==0)||(rear==front-1))
	return 1;
    else
	return 0;
}

int CQ::qEmpty()
{
    if(front==-1 && rear==-1)
	return 1;
    else
	return 0;
}

void CQ::qi()
{
    if(qFull())
	cout<<"Queue Is Full.";
    else
    {
	cin>>data;
	if(rear==-1 && front==-1)
	{
	    rear=front=0;
	    q[rear]=data;
	}
	else if(rear==max-1)
	{
	    rear=0;
	    q[rear]=data;
	}
	else
	{
	    rear++;
	    q[rear]=data;
	    if(front==-1)
	    front=0;
	}
    }
}

void CQ::qd()
{
    if(qEmpty())
	cout<<"Queue is Empty.";
    else
    {
	if(front==rear)
	{
	    cout<<q[front];
	    front=rear=-1;
	}
	else
	{
	    if(front==max-1)
	    {
		cout<<q[front];
		front=0;
	    }
	    else
	    {
		cout<<q[front];
		front=front+1;
	    }
	}
    }
}

void CQ::qdis()
{
    int temp=front;
    while(temp!=rear)
    {
	cout<<q[temp];
	temp=(temp+1)%max;
    }
}

int main()
{
CQ c;
int choice;
char x;
cout<<"\n1.insert\n2.delete\n3.display";
cout<<"Enter choice";
cin>>choice;
do{
switch(choice)
{
case 1:cout<<"Enter element : "<<endl;
	c.qi();
	break;

case 2:cout<<"Feleted elements : "<<endl;
	c.qd();
	break;

case 3:cout<<"Elements aRE : "<<endl;
	c.qdis();
	break;
}
cout<<"Do you want to continue(y/n)";
cin>>x;
}while(x=='y');
return 0;
}
