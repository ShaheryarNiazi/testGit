#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	int age;
	float salary;
	double bigNumber;
}person;

int main(void)
{	char name[20]="shaheryar";
	int age = 2;
	float salary = 10;
	double bignumber = 10;
	person *sP1 = (person*)malloc(sizeof(person));
	sP1->age = age;
	strcpy(sP1->name, name);
	// printf("%s %d %f %f" , p1->name, p1->age, p1->salary, p1->bigNumber);
	return 0;
}
