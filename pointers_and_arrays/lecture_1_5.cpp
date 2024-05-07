#include <stdio.h>

// https://www.youtube.com/watch?v=KDQXUysHLL8&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=5

void lec_1_5_a(void)
{
	// initializing an array at compile time
	int a1[2][3] = { 1, 2, 3, 4, 5, 6 };
	int a2[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int a3[][3] = { {1, 2, 3}, {4, 5, 6} };	// the first script is optional
	//int a4[2][] = { {1, 2, 3}, {4, 5, 6} };	// ERROR: // only the first script is optional

	if (a1[0][0] == a2[0][0]) printf("a1[0][0] == a2[0][0] is true");
}

void lec_1_5_b(void)
{
	// initializing an array at run time
	int a[2][3];
	
	printf("Enter the elements: ");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("element[%d][%d]: ", i, j);
			int{ scanf("%d", &a[i][j]) };
		}
	}

	printf("\nDisplay the elements:\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d: ", a[i][j]);
		}
		printf("\n");
	}
}

// https://youtu.be/KDQXUysHLL8?list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&t=1028
void lec_1_5_c(void)
{
	int a[3][3] = { 6, 2, 5, 0, 1, 3, 4, 9, 8 };

	// note:
	// a[0] = {6, 2, 5}	-> a[0] is the address of the 1st row
	// a[1] = {0, 1, 3}	-> a[1] is the address of the 2nd row
	// a[2] = {4, 9, 8} -> a[2] is the address of the 3rd row

	int *a0 = a[0];
	int *a1 = a[1];
	int *a2 = a[2];

	for (int j = 0; j < sizeof(a[0])/sizeof(int); j++) {
		printf("%d: ", a0[j]);
	}
	printf("\n");

	for (int j = 0; j < sizeof(a[1]) / sizeof(int); j++) {
		printf("%d: ", a1[j]);
	}
	printf("\n");

	for (int j = 0; j < sizeof(a[2]) / sizeof(int); j++) {
		printf("%d: ", a2[j]);
	}
	printf("\n");
}

void lec_1_5_d(void)
{
	int a[3][3] = { 6, 2, 5, 0, 1, 3, 4, 9, 8 };

	// note:
	// a[0] = {6, 2, 5}	-> a[0] is the address of the 1st row.
	// a[1] = {0, 1, 3}	-> a[1] is the address of the 2nd row.
	// a[2] = {4, 9, 8} -> a[2] is the address of the 3rd row.

	int *a0 = *(a + 0); // *(a+0) is the address of the 1st row
	int *a1 = *(a + 1); // *(a+1) is the address of the 2nd row
	int *a2 = *(a + 2); // *(a+2) is the address of the 3rd row

	for (int j = 0; j < sizeof(a[0]) / sizeof(int); j++) {
		printf("%d: ", a0[j]);
	}
	printf("\n");

	for (int j = 0; j < sizeof(a[1]) / sizeof(int); j++) {
		printf("%d: ", a1[j]);
	}
	printf("\n");

	for (int j = 0; j < sizeof(a[2]) / sizeof(int); j++) {
		printf("%d: ", a2[j]);
	}
	printf("\n");
}

