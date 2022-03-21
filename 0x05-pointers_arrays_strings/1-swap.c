#include <stdio.h>

/**
*This function is to swap value to values
*/

void swap (int *n, int *m);

int main(void){

int n = 98;
int m = 42;

printf("value of a is %d, value of b is %d\n", n, m);

swap(&n, &m);

printf("value of a is %d, value of b is %d\n", n, m);

return 0;
}

void swap_int(int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
