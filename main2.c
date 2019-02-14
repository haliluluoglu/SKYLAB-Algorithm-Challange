#include <stdio.h>

int main()
{
	int n,temp2,number=2,i,count=0,count2=0; 
	float temp1;
	printf("Enter a number: ");
	scanf("%d" , &n);
	
	
	while(count2!=n)
	{
		for(i=1; i<=number; i++)
		{
			temp1 = ((float)number)/i;
			
			temp2 = number/i;
			if(temp1==temp2)
			{
				count++;
			}
		}
		if(count==2)
		{
			count2++;
		}
		number++;
		count=0;
	}
	printf("Result: %d" ,(number-1));
}

