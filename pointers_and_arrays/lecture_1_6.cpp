// https://www.youtube.com/watch?v=tw-qWGG8y5g&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=6

#include <stdio.h>

void lec_1_6_a(void)
{
	// calculate address boundry of a 1-dimensional array.
	int arr[] = { 6, 2, 5, 0, 1, 3, 4, 9, 8 };

	printf("address of first element of the array arr[]: %p \n", arr);
	printf("address of second element of the array arr[]: %p \n", arr + 1);
	printf("address of last element of the array arr[]: %p \n", &arr[8]);

	printf("address of array arr[]: %p \n", &arr);	
	printf("address beyond the end of array arr[]: %p \n", &arr + 1);	
	printf("address beyond the last element of the array arr[]: %p \n", &arr[8] + 1);
}

