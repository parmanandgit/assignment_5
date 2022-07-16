// 10. Write a program to print a table of N.
#include<stdio.h>
int main()
{    int N;
   printf("enter the value of N ");
   scanf("%d",&N);
     printf("table of %d\n",N);
    for(int i=1;i<=10;i++)
    {
     printf("%d X %d = %d\n",N,i,N*i);
    }

    return 0;
}