#include <stdio.h>

void reset_to_98 (int *n){

n = &n;

printf("address of variable n : %x\n", &n);

printf("address stored in m : %x\n", &n);

printf("value of *n : %x\n", &n);

return(0);
}

int main()
{
    printf("Hello world!\n");

    reset_to_98(98);

    return 0;
}
