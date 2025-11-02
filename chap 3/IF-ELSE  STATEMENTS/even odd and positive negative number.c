#include <stdio.h>
int main ()
{
	int number;
	printf("Enter the number :\n");
	scanf("%d",&number);
	if (number >= 0){
		printf("Number is  Poitive \n");
		  if (number% 2 == 0){
		  	printf("Number is even \n");		  	
		  } 
		  else{
		  	printf("Number is odd \n");
		  }
	}
	else {
		printf("Number is Negative \n");
	}
	return 0;
}
