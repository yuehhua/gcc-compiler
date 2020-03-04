#include <stdio.h>
#include <stdlib.h>
#include "sum.c"

int main(void){
	int x;

	x = sum(1, 2);
	printf("%d\n", x);

	return 0;
}