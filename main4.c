#include <stdio.h>
#include <math.h>

int main()
{
	int number,count=0,power,result=0; 
	
	printf("Please enter a number: ");
	scanf("%d" , &number);
	
	while(number>=1)
	{
		count=number%2;
		number/=2;
		result+=pow(10,power) * count;
		power++;
	}
	printf("%d" ,result);
	return 0;
}
