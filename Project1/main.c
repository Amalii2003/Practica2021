#include <stdio.h>
int main(void) {
	char test[255] = { 0 };
	int test1 = 2;
	double test2 = 3;
	int test3 = 0;
	sprintf_s(test, "%d|%f|%d", test1, test2, test3);
	puts(test);
}
	