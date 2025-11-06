#include <Stdio.h >
int main()
{
	int i,n;
	int sum=0;
	printf("Enter the number : ");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){ // check for odd
			sum = sum +i;
		}
	}
	printf("Sum of odd numbers= %d\n",sum);
	return 0;
}
