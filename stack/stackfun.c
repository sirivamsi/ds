#include<stdio.h>
int push(int top,int n,int a[20])
{
 int ele;
 if(top==(n-1))
          printf("stack is full\n");
         else
            {
             top++;
             printf("enter element to add in stack\n");
             scanf("%d",&ele);
             a[top]=ele;
            }
}
int pop(int top,int a[20])
{
 if(top==-1)
          printf("stack is empty\n");
         else
            {
             printf("%d\n",a[top]);
             top--;
            }
}
void main()
{
 int n,a[20],ele,op,top=-1;
 printf("enter size of stack\n");
 scanf("%d",&n);
 do
 {
  printf("3.exit,1.push,2.pop\n");
  scanf("%d",&op);
  switch(op)
  {
   case 1:
        {
         push(top,n,a);
         break;
        }
   case 2:
        {
         pop(top,a);
         break;
        }
   case 3:
         break;
   default:
           printf("invalid option\n");
  }
 }while(op!=3);
}   




