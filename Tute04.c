/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a,int b);
int maximum(int c,int d);
int multiply(int i,int j);
int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int a,int b){
  if(a>b)
  {
    return printf("%d",b);
  }
  else
  {
    return printf("%d",a)
  }
}
int maximum(int c,int d){
  if(c>d)
  {
    return printf("%d",c);
  }
  else
  {
    return printf("%d",d)
  }
}
  int multiply(int i,int j)
  {
    reurn i*j;
  }