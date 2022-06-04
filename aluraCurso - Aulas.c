#include <stdio.h>
int main() {
	//Declaracao de Vars
	int menuAwsner;
	int secretNumber = 42;
	int guess;
	// Header
	printf("**********************\n");   
	printf("*  Advinhators Game! *\n");
	printf("**********************\n");   
	
	printf("What's your guess? \n");
	scanf("%d", &guess);
	printf("\nYour guess was %d", guess);



	return 0;
}
