#include <stdio.h>
typedef struct{
	char name[50];
	int age;
	int height; 
}person;
int main()
{
	char name[50];
	int age, height;
	printf("Type your name\n");
	scanf("%19s",name);
	printf("Type your age\n");
	scanf("%d", &age);
	printf("Type your height\n");
	scanf("%d" , &height);
	person someguy = {*name, age, height};
	printf("the persons name is %s while his age is %d and his height is %d", someguy.name,someguy.age,someguy.height);
	return 0;
}
