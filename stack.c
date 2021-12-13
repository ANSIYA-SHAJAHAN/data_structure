#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void topele();
void display();
void main()
{
  char choice;
  int opt;
do{
 printf("operations are:");
 printf("1:push\n 2:pop\n 3:top\n 4:Display\n");
 printf("Enter the operation:");
 int n;
 scanf("%d",&n);
switch(n)
 {
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:topele();
 break;
 case 4:display();
 break;
default:printf("invalid input");
 }
printf("\n Do you want to continue?0/1");
scanf("%d",&opt);
}
while(opt==1);
}
void push()
{
if(top==N-1)
{
printf("stack is full\n");
}
else
 {
  int item;
 printf("Enter the item:");
 scanf("%d",&item);
 top++;
 stack[top]=item;
 }
}
void pop()
{
 if(top==-1)
{
printf("stack is empty\n");
}
else
{
 int item;
 item=stack[top];
 top--;
printf("popped item is:%d",item);
 }
}
void display()
{
 if (top==-1)
{
printf("stack is empty\n");
}
else
{
 printf("The stack is:\n");
 for (int i=top;i>=0;i--)
  printf("%d\t",stack[i]);
}
}
void topele()
{
if(top==-1)
{
printf("stack is empty\n");
}
else
{
printf("top element is:%d\n",stack[top]);
}
}
