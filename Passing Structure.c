#include<stdio.h>
#include<string.h>

struct Person
{
    char name[30];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("Your name = %s\n", p.name);
    printf("Your Age = %d\n", p.age);
    printf("Your Salary = %.2f\n", p.salary);
}

int main()
{
    struct Person person1, person2;

    strcpy(person1.name, "Razaul Karim");
    person1.age = 20;
    person1.salary = 40500.45;
    display(person1);

    strcpy(person2.name, "Razaul Karim");
    person2.age = 24;
    person2.salary = 56565.45;
    display(person2);

    return 0;
}
