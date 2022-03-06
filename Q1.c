#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int devides(int num, int n);

void main() {
	int num = 2468124, n = 2, count = 0;
	count = devides(num, n);
	printf("There is %d digits thats devides in the number", count);
}

int devides(int num, int digit) {  // returns amount of digits that are divisible by digit.
	if (num == 0 || digit == 0)  // exit condition, exit when num is 0.
		return 0;
	if ((num % 10) % digit == 0) // if the last digit of num devides by the variable 'digit' - calls new recursion with num devided by 10, and add 1 for successfull. iteration
		return devides((num / 10), digit) + 1;
	else return devides((num / 10), digit); // if the last digit of num isn't devisible by digit - call new recuersion with the number devided by 10 and dont add 1.
}
