#include<stdio.h>

struct Person
{
    int age;
    float salary;
    char name[30];  // string
    float height;
};

int main()
{
    struct Person person1, person2;

    printf("Enter Your Name = ");
    scanf("%s", person1.name);

    printf("Enter Your Age = ");
    scanf("%d", &person1.age);

    printf("Enter Your Salary = ");
    scanf("%f", &person1.salary);

    printf("Enter Your Height = ");
    scanf("%f", &person1.height);

    printf("\nPerson 01 : \n");
    printf("Name = %s\n", person1.name);
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n", person1.salary);
    printf("Height = %.2f\n", person1.height);

    printf("\n\n");

    printf("Enter Your Name = ");
    scanf("%s", person2.name);

    printf("Enter Your Age = ");
    scanf("%d", &person2.age);

    printf("Enter Your Salary = ");
    scanf("%f", &person2.salary);

    printf("Enter Your Height = ");
    scanf("%f", &person2.height);

    printf("\nPerson 02 : \n");
    printf("Name = %s\n", person2.name);
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary);
    printf("Height = %.2f\n", person2.height);

    return 0;
}
