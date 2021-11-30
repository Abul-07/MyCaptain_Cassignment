#include <stdio.h>

int sum_of_Digits(int num);


int main()
{
    int num, sum;
    
    printf("Input number: ");
    scanf("%d", &num);
    
    sum = sum_of_Digits(num);
    
    printf("Sum of digits: %d", sum);
    
    return 0;
}
int sum_of_Digits(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + sum_of_Digits(num / 10));
}
