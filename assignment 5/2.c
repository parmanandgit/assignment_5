// 2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{  int N;
   printf("enter the value of N ");
   scanf("%d",&N);
   for (int i = 0; i < N; i++)
   {
    printf("%d ",i+1);
   }
   
   return 0;
}