/*
* 一个关于c语言指针的练习
*/
#include <stdio.h>
int main ()
{
	int x = 4;
	printf("x lives at %p\n", &x);
	int *address_of_x = &x;
	printf("x lives at %p\n", address_of_x);
	int value_of_x = *address_of_x;
	printf("x is %i\n", value_of_x);
	*address_of_x = 99;
	printf("x is %i\n", value_of_x);
	printf("x is %i\n", *address_of_x);
	printf("x is %i\n", x);
	printf("x is %p\n", &x);
	return 0;
}