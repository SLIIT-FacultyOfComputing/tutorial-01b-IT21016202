/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()//starting main function 
{

  //declaring variables
  int mark1, mark2;
  float avg;

  //getting user inputs
  printf("Enter Mark 1 - ");
  scanf("%d", &mark1);
  printf("Enter Mark 2 - ");
  scanf("%d", &mark2);

  //calculating average
  avg = (mark1+mark2)/2;

  //display the output
  printf("Average is = %.2f", avg);

  return 0;
} //end main function

