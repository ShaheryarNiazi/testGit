#include <stdio.h>
#include <string.h>

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
	printf("name is %s",name);
	fflush(stdin);
	printf("Type your age\n");
	scanf("%d", &age);
	printf("%d",age);
	printf("Type your height\n");
	scanf("%d" , &height);
	printf("%d", height);
	person someguy;
	strcpy(someguy.name,name);
	someguy.age = age;
	someguy.height = height;
	printf("the persons name is %s", name);
	printf(" while his age is %d and his height is %d \n",someguy.age, someguy.height);
	return 0;
}
