#include <stdio.h>

int A[10], front=-1, rear=-1; // Creating Queue
int size_A = sizeof(A)/sizeof(A[0]); // Calculating Size of Array Dynamically

/* Driver Function */
int IsEmpty();
void Insert(int data);
int Delete();
void PrintQueue();

int IsEmpty()
{
    if(rear==-1 && front==-1)
        return 1;
    else
        return 0;
}

void Insert(int data)
{
    if(IsEmpty())
        front = rear = 0;
    else if( rear+1 == front )
        printf("\n Queue is Full \n");
    else
        rear = (rear+1)%size_A;
    A[rear] = data;
}

int Delete()
{
    if(IsEmpty())
        printf("\n Queue is Empty \n");
    else
        front = (front+1)%size_A;
    return A[front-1];
}

void PrintQueue()
{
    int i=0;
    for(i=front; i<=rear; i++)
        printf(" %d",A[i]);
    printf("\n");
}
/* Main Method */
int main()
{
    Insert(0);
    Insert(1);
    Insert(2);
    Insert(3);
    PrintQueue();
    printf("After Deleted:\n");
    Delete(); // Delete 0 from starting
    PrintQueue();
    printf("After Deleted:\n");
    Delete(); // Delete 1 from starting
    PrintQueue(); //Print Queue
    return 0;
}
