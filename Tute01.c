/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float mark1,mark2;
   float sum;
   
   printf("input subject 1 marks:");
   scanf("%f",&mark1);
   
   printf("input subject 2 marks:");
   scanf("%f",&mark2);
   
   sum = mark1+mark2;
   printf("total = %.2f",sum);
   
  return 0;
}

