#include <stdio.h>
int main () 
{
  
int num1 = 10, num2 = 20;
  
printf ("Number before swapping is %d and %d \n", num1, num2);
  
num1 = num1 + num2;
  
num2 = num1 - num2;
  
num1 = num1 - num2;
  
printf ("Number after swapping is %d and %d \n", num1, num2);
  
return 0;

}
