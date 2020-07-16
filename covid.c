#include <stdio.h>

int main(void){
	unsigned long long int  initial1  = 1;
	unsigned long long int	initial2  = 1000; 
	for(int i = 0; i < 60; i++){
		initial1 *= 2;
		initial2 *= 2;
		printf("Single virus = %llu, Thousand virus = %llu\n", initial1, initial2);
	}
	printf("Final difference: %llu\n", initial2 - initial1);
	return 0;
}
