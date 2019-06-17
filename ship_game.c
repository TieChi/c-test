/*
* 一个关于c语言指针的练习
*/
#include <stdio.h>
void go_south_east(int *lat, int *lon) {
	printf("变量值：[%i, %i]\n", *lat, *lon);
	*lat = *lat - 1;
	*lon = *lon - 1;
	printf("变量值：[%i, %i]\n", *lat, *lon);
}
int main ()
{
	int latitude = 32;
	int longitude = 64;
	printf("变量地址：[%p, %p]\n", &latitude, &longitude);
	go_south_east(&latitude, &longitude);
	printf("当前位置：[%p, %p]\n", &latitude, &longitude);
	printf("当前位置：[%i, %i]\n", latitude, longitude);

	return 0;
}