/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() //starting main function  
{

  //declaring variables
  int number, count=1, tot=0;

  //getting user inputs
  printf("Enter Number - ");
  scanf("%d", &number);

  //calculating sum
  while ( count<=number)
  {
    tot=tot+count;
    count++;
  }

  //display the output
  printf("Sum is = %d", tot);
  
  return 0;
} //end main function

