#include<stdio.h>
struct employee
{
    int age,phone_number,salary;
    char name[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the number of employees:");
    scanf("%d",&n);
    printf("Enter employee info as name, age, phone_number, salary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d", emp[i].name,&emp[i].age,&emp[i].phone_number,&emp[i].salary);
    }
    printf("\nName\tAge\tPhone Number\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].phone_number,emp[i].salary);
    }
}
