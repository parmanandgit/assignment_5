// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{   int N;
   printf("enter the value of N ");
   scanf("%d",&N);
  for(int i=N;i;i--)
  {
    printf("%d ",i);
  }
   return 0;
}