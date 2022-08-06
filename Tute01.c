/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main()
{
  float mark1,mark2,tot;

  printf("enter mark 1:");
  scanf("%f",&mark1);
  printf("enter mark 2:");
  scanf("%f",&mark2);

  tot=mark1+mark2;
  printf("total marks = %.2f",tot);

  return 0;
}

