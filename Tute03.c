/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
 {
   int n ; //To store the value for 'n' 
   int count ; //Counter variable declared
   int tot = 0 ; //To store the sum of numbers from 1 to 'n'

   printf("Enter the value of n : ") ; //Prompts the user to enter the value
   scanf("%d", &n) ; //Assigns value
  
  /* calculates the total of all numbers from 1 to 'n' */
  
   for (count = 1 ; count <= n ; count ++)
   {
     tot += count ;
   }

   printf("Sum : %d", tot) ; //Displays the sum of the numbers ;
  
  return 0;
}

