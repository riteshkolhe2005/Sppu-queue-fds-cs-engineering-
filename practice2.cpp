#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
#define MAX 50

class stack
{
    char str[MAX],data[MAX];
    int top,count,length;
    public:
    stack()
    {
        top=-1;
        count=0;
        length=0;
    }
    void getdata();
    void extract();
    void display();
    void check();
    void push(char);
    char pop();
};

void stack::getdata()
{
    cout<<"enter string"<<endl;
    cin.getline(str,MAX);
    length=strlen(str);
}

void stack::extract()
{
    char temp[MAX];
    for(int i=0 ;i <length;i++)
    {
        temp[i]=str[i];
    }
    int j=0;
    for(int i=0;i<length;i++)
    {
        if(isalpha(temp[i]))
        {
            str[j]=tolower(temp[i]);
            j++;
        }
    }
    length=j;
}

void stack::display()
{
    for(int i=length-1;i>=0;i--)
    {
        cout<<str[i];
    }
    cout<<endl;
}

void stack::push(char t)
{
    if(top==MAX-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        data[top]=t;
    }
}

char stack::pop()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        char t2=data[top];
        top--;
        return t2;
    }
}

void stack::check()
{
    for(int i=0;i<length;i++)
    {
        push(str[i]);
    }
    for(int i=0;i<length;i++)
    {
        if(str[i]==pop())
        {
            count++;
        }
    }
    if(count==length)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
}

int main()
{
    stack obj;
    obj.getdata();
    obj.extract();
    obj.display();
    obj.check();
    return 0;
}