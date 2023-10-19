/*Question 20: Write a C language program to swap/exchange value of a & b.*/
#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter 2 numbers:");
  scanf("%d %d",&a,&b);
  printf("Numbers before swapping are: %d %d\n",a,b);

  temp=a;
  a=b;
  b=temp;
  printf("Numbers after swapping are %d %d",a,b);
}
