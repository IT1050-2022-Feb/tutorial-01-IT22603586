/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  
  int no1, no2;
  float avg;

  printf("Enter the first number : ");
  scanf("%d", &no1);

  printf("Enter the second number : ");
  scanf("%d", &no2);

  avg = (no1 + no2)/2;

  printf("The average of the two numbers : %.2f", avg);

  return 0;
}

