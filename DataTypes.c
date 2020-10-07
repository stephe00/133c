=/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main ()
{
    char name[20], date[10], age[26];
    printf("Enter name: ");
    printf("Enter birthdate: ");
    printf("Enter age: ");
    scanf("%s", name);
    scanf("%s", date);
    scanf("%s", age);
    printf("Your name is %s.", name);
    printf("Your birthdate is %s.", date);
    printf("Your age is %s.", age);
    

   /* variable definition: */
   int a, b;
   int c;
   float f;
   double d;
 
   /* actual initialization */
   a = 1;
   b = 2;
  
   c = a + b;
   printf("value of c : %d \n", c);
   
   d = 666.66;
   printf("The double value : %f\n", d);
   

   f = 30.0/3.0;
   printf("value of f : %f \n", f+f);
 
   return 0;
   
}
