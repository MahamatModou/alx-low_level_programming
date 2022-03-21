#include <stdio.h>

void reset_to_98(int n)
{

	int m*;
	m = &n;

printf("address of variable n : %x\n", n);

printf("address stored in m : %x\n", &n);

printf("value of *n : %x\n", n);

retrun(0);
}

int main (void) {
	
	reset_to_98(98);
	return(0);
}
