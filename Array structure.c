#include<stdio.h>

struct person
{
    int age;
    float salary;
};


int main()
{
    struct person person[4];
    int i;
    for(i=0;i<4;i++)
    {
         printf("\nEnter information person %d\n",i+1);
         printf("Enetr age : ");
         scanf("%d", &person[i].age);
         printf("Enetr salary : ");
         scanf("%f", &person[i].salary);
    }

    for(i=0;i<4;i++)
    {
        printf("\nInformation Person %d\n",i+1);
        printf("Age = %d\n" , person[i].age);
        printf("Salary = %.2f\n", person[i].salary);
    }





return 0;}
