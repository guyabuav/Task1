#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int alphabetically(char* str1, char* str2);

void main() {
	int res;
	char str1[SIZE], str2[SIZE];
	puts("Please enter string 1");
	gets(str1);
	puts("Please enter string 2");
	gets(str2);
	res = alphabetically(str1, str2); // RES gets the result for the function.
		if (res == 1)
		printf("Str2 will appear before Str1");
		if (res == 0)
		printf("The strings are same");
		if (res == -1)
			printf("Str1 will appear before Str2");

}

int alphabetically(char* str1, char* str2) {
	if (strlen(str1) == 0 && strlen(str2) == 0) // If there are no correct values passed by main, or if the last condition gets to the ends of either string - return 0
		return 0;
	
	if (str1[0] > str2[0]) // If str2 alphabetically before str1 - return 1.
		return 1;
	if (str1[0] < str2[0]) // If str1 alphabetically before str2 - return -1.
		return -1;
	if (str1[0] == str2[0])
		return alphabetically(str1 + 1, str2 + 1); // If char[0] are the same in both strings, go check the next char in both of them
}
