#include <stdio.h>
int main () 
{
    
printf("Please select an item:\n 1.Pasta,Rs.120\n 2.Burger,Rs.180\n 3.Sandwich,Rs.100 \n 4.Pizza,Rs.200\n 5.Donut,Rs,80\n Enter the choice: ");

int choice = 0;

scanf("%d", &choice);

switch(choice)
{
case 1:
printf("Food - Pasta\n Price - Rs.120  ");
break;
case 2:
printf("Food - Burger\n Price - Rs.180  ");
break;
case 3:
printf("Food - Sandwich\n Price - Rs.100 ");
break;
case 4:
printf("Food - Pizza\n Price - Rs.200  ");
break;
case 5:
printf("Food - Donut\n Price - Rs.80 ");
break;
default:
printf("Invalid input!");
}
}
