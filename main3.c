#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n,length,i=0,j=1,*number,result=0; 
	char string[100],*newString;
	
	printf("Please enter your word: ");
	scanf("%s" , string);
	length = strlen(string);
		
	number = (int *)malloc(sizeof(int)*length);
	newString = (char *)malloc(sizeof(char)*length);
	
	while(string[i]!='\0')
	{
		for(j=i+1; j<length; j++)
		{
			if(string[i]==string[j])
			{
				number[j]=1;
			}
			else
			{
				if(number[i]!=1)
				{
					number[i]=0;	
				}
			}	
		}
		i++;
	}
	j=0;
	for(i=0; i<length; i++)
	{
		if(number[i]==0)
		{
			newString[j] = string[i];
			j++;
		}
		result+=number[i];
	}
	if(result==0)
	{
		printf("%s -> hepsi tekil.",string);
	}
	else
	{
		printf("%s -> hepsi tekil degil. Tekil hali: \"%s\" ",string, newString );
	}
	return 0;
}
