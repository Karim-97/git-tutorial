#include<stdio.h>
#include "espl_lib.h"

int main()
{
	int n,i;
	char answer;
	
	printf("\n Hello Espl\n");
	printf("\n new line\n");
	
	i=1;
	while (i!=0) {
	      
		printf("\n Enter a number: ");
		scanf("%d", &n);
		getchar();
	
		printf("the numb in word is: %s" , num_to_words(n));
	
		    
		printf("\nWould you like to continue? Enter Y or N: \n");
		scanf("%c", &answer);
		printf("\n answer is %s", &answer);
		if (answer == 'Y'){
			i=1;}
		

		else {
			i=0;}
	}
	
}