// 6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{  int N;
   printf("enter the value of N ");
   scanf("%d",&N);
  
   for(int i=2;i<=2*N;i+=2)
  {
    printf("%d ",i);
  }
   return 0;
}