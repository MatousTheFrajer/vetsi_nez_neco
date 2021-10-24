#include <iostream>
#include <corecrt_math.h>
#include <stdlib.h>

int main(void) {
	int x = 4;
	int y = 5;
	printf("Cislo %d ", x);
	if (x - y == 0) {
		printf("je rovno cislu %d ", y);
	}
	else {
		if (x > y) {
			printf("je vetsi nez cislo %d ", y);
		}
		else {
			printf("je mensi nez cislo %d ", y);
	}
}
}