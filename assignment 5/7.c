// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{   int N;
   printf("enter the value of N ");
   scanf("%d",&N);
   for(int i=2*N;i>0;i-=2)
   {
    printf("%d\n",i);
   }
   return 0;
}