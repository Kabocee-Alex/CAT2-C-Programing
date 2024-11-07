/*
Program to define structure named employee
Author:Alex
Date:7/11/2024
*/

#include <stdio.h>
#include <string.h>

struct Employee{
char name[25];
int id;
char department[20];
float salary;
char email[50];
};

int main() {

struct Employee employee1;

strcpy(employee1.name,"John Doe");
employee1.id=12345;
strcpy(employee1.department,"Human Resources");
employee1.salary=55000.50;
strcpy(employee1.email,"john doe@company.com");

//printf statements
printf("Name:%s",employee1.name);
printf("\nID numberis:%d",employee1.id);
printf("\nDepartment of %s",employee1.department);
printf("\nSalary:%f",employee1.salary);
printf("\nEmail:%s",employee1.email);

return 0;
}
