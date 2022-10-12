#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 0;

	while (num < 9) {
		int star = 0;
		 
		if(num < 5){
			while (star <= num) {
				printf("*");
				star = star + 1;
			}
		}else{
			while (star < 9 - num) {
				printf("*");
				star = star + 1;
			}
			
		}
		 
		printf("\n", num);		
		num = num + 1;
	}

	return 0;
}
