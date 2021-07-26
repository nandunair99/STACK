#include <stdio.h>
#include <stdlib.h>
void display(int arr[],int size,int *top)
{
    if((*top)==-1)
   {
       printf("stack is empty\n");
   }
   else
   {
       for(int i=0;i<=(*top);i++)
       {
        printf("%d\n",arr[i]);
       }
   }

}
int pop(int arr[],int *top)
{
    int x;
   if((*top)==-1)
   {
       printf("stack is empty\n");
   }
   else{
        //printf("you popped: %d\n",arr[*top]);
        x=*top;
        (*top)--;


        return x;
   }


}
void push(int arr[],int *top,int size)
{
    int val;
   if((*top)>=size-1)
   {
       printf("Stack is full\n");
   }
   else{
    printf("Enter value\n");
    scanf("%d",&val);
    (*top)++;

    arr[*top]=val;
   }
}
int main()
{
    int ch,size,val,*top,ans;
    int *stck;
    printf("Enter size of stack\n");
    scanf("%d",&size);
    stck=(int *)calloc(size,sizeof(int));
    top=-1;

  do{
       printf("Enter choice 1.push 2. pop 3.display:\t");
       scanf("%d",&ch);
       switch(ch)
       {
       case 1:
           push(stck,&top,size);
        break;
       case 2:
           ans=pop(stck,&top);
           printf("%d",ans);
        break;
       case 3:
          display(stck,size,&top);
        break;

       }
  }while(ch!=0);


    return 0;
}
