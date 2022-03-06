#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4

int main() {
	int mat[N][N];
	int rows = 0, cols = 0;
	printf("please enter matrix\n");
	for (int rows = 0; rows < N; rows++) {
		for (int cols = 0; cols < N; cols++) {
		    scanf_s("%d", &mat[rows][cols]);
		}
	}
	if (path_exists(mat, 0, 0))
	printf("Success");
	else printf("Failed");
	
}

int path_exists(int mat[][N], int rows, int cols) {
	static int check;  // parameter that checks success or failure
	if (rows == N - 1 && cols == N - 1) // exit condition, checks if got to last slot
		return 1;
	if (mat[rows + 1][cols] == 1) {  // checks num below
		check = path_exists(mat, rows + 1, cols);  // if 1, continue rout
		if (check == 1) {  // if rout successful keep returning, else check different rout 
			return 1;
		}
	}
	if (mat[rows][cols + 1] == 1) {  // checks next num on the right
		check = path_exists(mat, rows, cols + 1);  // continue rout
		if (check == 1) {
			return 1;
		}
	}
	if (mat[rows + 1][cols + 1] == 1) {  // checks num on the right of num below
		check = path_exists(mat, rows + 1, cols + 1); // continue rout
		if (check == 1) {
			return 1;
		}
	}
	else {  // if no routs available, return failure
		return 0;
	}
}
