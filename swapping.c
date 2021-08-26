#include<stdio.h>
int main()
{
   int x,y,temp;
   printf("Enter the number",x);
   scanf("%d",&x);
   printf("Enter the number",y);
   scanf("%d",&y);
   temp=x;
   x=y;
   y=temp;
   printf("The swapped number is %d \n",x);
   printf("The swapped number is %d",y);
   return 0;
 }  
