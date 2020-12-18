#include<stdio.h>
#include<process.h>

#define size 32

int top=-1;
int stack[size];

void push(int b)
{
    if(isFull())
      {
          printf("\nStack overflow!");
          return;
      }
    stack[++top]=b;
}

int pop()
{
    if(isEmpty())
      {
          printf("\nStack underflow!");
          exit(1);
      }
    return stack[top--];
}

int isEmpty()
{
    return top==-1 ? 1 : 0;
}

int isFull()
{
    return top==size-1 ? 1 : 0;
}

int main()
{
    unsigned int n,x;
    printf("\nEnter a positive integer : ");
    scanf("%u",&n);
    x=n;
    while(x>0)
     {
         push(x%2);
         x/=2;
     }
    printf("\nDecimal : %u",n);
    printf("\nBinary : ");
    while(!isEmpty())
      printf("%u",pop());
    return 0;
}

