#include<stdio.h>

//Global Structure
struct Person
{
    int age;
    float salary;
    char name;
    float height;
};

struct Person person1,person2; //Global Variable


int main()
{
    //Local Structure
struct Person
{
    int age;
    float salary;
    char name;
    float height;
};


    struct Person person1,person2; //Local Variable
    person1.name = 'A';
    person1.age = 20;
    person1.salary = 20000.50;
    person1.height = 5.11;

    printf("Person 01 : \n");
    printf("Name = %c\n",person1.name);
    printf("Age = %d\n", person1.age);
    printf("Salary = %.2f\n", person1.salary );
    printf("Heigh = %.2f\n",person1.height);

    printf("\n\n");

    person2.name = 'R';
    person2.age = 24;
    person2.salary = 23000.50;
    person2.height = 5.10;

    printf("Person 02 : \n");
    printf("Name = %c\n",person2.name);
    printf("Age = %d\n", person2.age);
    printf("Salary = %.2f\n", person2.salary );
    printf("Heigh = %.2f\n",person2.height);


    return 0;
}
