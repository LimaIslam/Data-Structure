#include<stdio.h>
#include<stdbool.h>
int stack[20],head=-1,i;
void push(int data)
{
    head++;
    stack[head]=data;
}

int pop()
{
    int data;
    data=stack[head];
    head--;
    return data;
}

void printAll()
{
    for(i=0;i<=head;i++)
    {
        printf("%d\t",stack[i]);
    }
}

bool isEmpty()
{
    if(head==-1)
    {
        return true;
    }
    else
        return false;
}

bool isFull()
{
    if(head==20)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a,b,c;
    c=isEmpty();
    printf("%d\n\n",c);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    b=isFull();
    printf("%d\n\n",b);
    a=pop();
    printf("%d\n",a);
    a=pop();
    printf("%d\n",a);
    a=pop();
    printf("%d\n\n",a);
    printAll();
    return 0;
}
