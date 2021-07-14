/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function prototype
int minimum (int no1, int no2);
int maximum (int no1, int no2);
int multiply (int no1, int no2);

int main() //starting main function  
{
   //declaring variables
   int no1, no2;

   //getting user inputs
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   //calling functions and display output
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;
} //end main function

//called functions
int minimum (int no1, int no2)
{
  int min;
  
    if(no1<no2)
    {
      min = no1;
      return min;
    }
    else 
    {
      min = no2;
      return min;
    }
}
  

int maximum (int no1, int no2)
{
  int max;

    if(no1<no2)
    {
      max=no2;
      return max;
    }
    else 
    {
      max=no1;
      return max;
    }
}


int multiply (int no1, int no2)
{
  int mul;
  mul = no1*no2;
  return mul;

}