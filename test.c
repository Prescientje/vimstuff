#include<stdlib.h>
#include<stdio.h>


int fact(int n) {
	if(n<2){
	return 1;
	}
	return n*fact(n-1);
}

int fib(int n) {
	if(n<1) {
	return 0; //first = 0
	}
	if(n<3) {
	return 1; //second and third = 1
	}
	return fib(n-1) + fib(n-2);
}

void printvals(int* vals, int len) {
	int i;
	for(i=0; i<len; i++) {
		printf("vals[%d] = %d\n", i, *(vals+i));
	}
}


int main(int argc, char** argv) {
	int values[4];
	values[1] = 2*2;
	values[2] = fact(3);
	values[3] = fib(6);
	values[0] = 0;
	int x = 15;
	printf("%d\n", x*x*x);
	printvals(values, 4);
	return 0;
}

