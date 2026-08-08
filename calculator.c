#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b);
  c=a+b;
  printf("the sum of %d+%d is %d\n", a,b,c);
  c=a-b; 
  printf("the subtraction of %d-%d is %d\n", a,b,c);
   c=a*b; 
    printf("the the multiplication of %d*%d is %d\n", a,b,c);
     c=a/b; 
      printf("the the division of %d/%d is %d\n", a,b,c);
      return 0;
}
