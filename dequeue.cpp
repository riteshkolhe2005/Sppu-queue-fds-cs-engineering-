//doubly ended queue
#include<iostream>
using namespace std;
 struct node
 {  public:
   	char data;
   	node *next;
   	node *prev;
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
   void enfront();
   void enrear();
   void display();
   void defront();
   void derear();
  };


  void queue::enfront()
  {
     node *t;
     t=new node;
     cout<<”Enter data part:”;
     cin>>t->data;
     t->next=NULL;

     if(front==NULL)
     {
      rear=front=t;
     }
     else
     {
      front=t;
     }
   }

  void queue::enrear()
  {     
       node *t;
       t=new node;
	 cout<<”Enter data part:”;
       cin>>t->data;

       if(rear==NULL)
       {
       rear=front=t;
       } 

      else
	{
          rear->next=t;
          rear=t;
	}
   }


    void queue::display()
     {  
         node *t=front;
        while(t!=NULL)
       {
          cout<<t->data<<endl;
          t=t->next;
       }
     }


    void queue::defront()
     {
          
      node *t;
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


   void queue::derear()
   {  
      node *t;
      if(rear==NULL)
     {
       cout<<"empty";
     }
     else
     {
       t=rear->prev;
       delete(rear);
       t=rear; 
     }
   }
      

    int main()
    {
       queue q;
       int ch,c;
	do
	{
	cout<<"1.insert at rear position.\n 2.insert at front position. \n 3.display. \n 4.delete node at front position.\n 5.delete node at rear position."<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
	case 1:
	        q.enrear(); 
		break;
	case 2:
	        q.enfront();
	        break;
	case 3:
		q.display();
		break;
        case 4:
                q.defront();
                break;
        case 5:
                q.derear();
                break;
	}
	cout<<"Want to continue 1/0\n";
	cin>>c;
	}while(c==1);
    return 0;
   }    
    

