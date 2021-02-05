//b171113
#include<stdio.h>
struct stack
{
 int n;
 int top;
 int a[100];
};
void main()
{
 struct stack *s;
 s=(struct stack*)malloc(sizeof(struct stack));
 int ele,op;
 s->top=-1;
 printf("enter size of stack\n");
 scanf("%d",&s->n);
 do
 {
  printf("3.exit,1.push,2.pop\n");
  scanf("%d",&op);
  switch(op)
  {
   case 1:
        {
         if(s->top==s->n-1)
          printf("stack is full\n");
         else
            {
             s->top++;
             printf("enter element to add in stack\n");
             scanf("%d",&ele);
             s.a[s->top]=ele;
            }
         break;
        }
   case 2:
        {
         if(s->top==-1)
          printf("stack is empty\n");
         else
            {
             printf("%d\n",s.a[s->top]);
             s->top--;
            }
         break;
        }
   case 3:
         break;
   default:
           printf("invalid option\n");
  }
 }while(op!=3);
}   




