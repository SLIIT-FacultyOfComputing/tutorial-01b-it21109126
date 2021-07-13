/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float m1, m2 ; //Variables declared to store marks 
  float sum, avg ; //Variables to store the total and average
  
  /* Prompts the user to enter the marks of the 2 subjects */

  printf("Enter the marks of subject 1 : ") ;
  scanf("%f", &m1) ;

  printf("Enter the marks of subject 2 : ") ;
  scanf("%f", &m2) ;

  sum = m1 + m2 ;  //Calculates the total 

  avg = sum / 2 ; //Calculates the average

  printf("Average : %.2f", avg) ; //Displays the average correct to 2 d.p 
  
  return 0;
}

