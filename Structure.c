#include<stdio.h>
#include <string.h>


struct Person{
int id;
char name;
char address;
float salary;
};

void main(){
    struct Person person1;
    struct Person person2;

    strcpy(person1.id,2121);
    strcpy(person1.name,"Kavidu");
    strcpy(person1.address,"Barandana");
    person1.salary = 32.5;

    strcpy(person2.id,4356);
    strcpy(person2.name,"Dhanuka");
    strcpy(person2.address,"Kurunegala");
    person2.salary = 25.5;

    printf("Person1 id is : %d",person1.id);
    printf("Person1 name is : %c",person1.name);
    printf("Person1 address is : %c",person1.address);
    printf("Person1 salary is : %f",person1.salary);

    printf("=============================================");

     printf("Person2 id is : %d",person2.id);
    printf("Person2 name is : %c",person2.name);
    printf("Person2 address is : %c",person2.address);
    printf("Person2 salary is : %f",person2.salary);


}
