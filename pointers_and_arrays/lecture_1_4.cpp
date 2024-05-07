#include <stdio.h>

// https://www.youtube.com/watch?v=4Rll-_e9-0M&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=4
void lec_1_4_a(void)
{
    int a[] = { 6, 2, 1, 5, 3 };
    int a_end[] = { 10 };
    int* q = a;         // point to starting location of array a.

    printf("%p\n", a);
    printf("%d\n", *a);
    printf("%p\n", q);
    printf("%d\n", *q);
    //q++;                // move to next element in array 'a', q is increased by 4 bytes (sizeof(int))
    printf("%p\n", q);
    printf("%d\n", *q);
    //a++;              // a++ is not valid. error C2105: "expression is not be a modifiable lvalue."
    //q = a[2];         // q = a[2] is not valid. error C2440: '=': cannot convert from 'int' to 'int *'

    // in C/C++ a == &a: the name of the array is equivalent to the address of the first element in the array
    printf("%p\n", a);
    printf("%p\n", &a);
    // in C/C++ q =/= &q: this is not the case for pointers
    //printf("%p\n", q);
    //printf("%p\n", &q);

    // the name of an array is the address of the first element    
    printf("%d\n", a[2]);   // print value in index 2
    printf("%p\n", &a[2]);  // print address of value in index 2

    // the name of an array is also pointer
    // a + 0 moves you to the array index 0
    printf("%d\n", *(a + 0));   // print value in index 0
    printf("%p\n", (a + 0));    // print address of value in index 0

    // a + 1 moves you to the array index 1
    printf("%d\n", *(a + 1));   // print value in index 1
    printf("%p\n", (a + 1));    // print address of value in index 1

    // a + 2 moves you to the array index 2
    printf("%d\n", *(a + 2));   // print value in index 2
    printf("%p\n", (a + 2));    // print address of value in index 2

    // since (a+i) === &a[i]
    // then by law of commutativity, since (i+a) === &i[a]
    printf("%d\n", 2[a]);   // print value in index 2
    printf("%p\n", &2[a]);  // print address of value in index 2

    // &a + 1 or &a++ moves you past the end of the array
    printf("%p\n", &a + 1);         // print address of value after the last index
    //printf("%d\n", *(&a + 1));    // DANGEROUS: print the value after the end of array: 
    printf("%p\n", &a[0] + 1);      // print address of value after the first index => address of &a[1]
    printf("%p\n", &a[1]);          // print address of value in of &a[1]. Same as above.
}

void lec_1_4_b(void)
{
    int a[5];
    int* q = a;

    // get the inputs
    for (int i = 0; i < 5; i++) {
        //scanf("%d", &a[i]); // scanf takes an address, you can also do scanf("%d", &q[i]); it will mean the same thing.
        //scanf("%d", &q[i]); // scanf takes an address, you can also do scanf("%d", q+i); it will mean the same thing.
        //scanf("%d", q + i); // scanf takes an address, you can also do scanf("%d", q++); it will mean the same thing.
        scanf("%d", q++);
    }

    // print the inputs
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
