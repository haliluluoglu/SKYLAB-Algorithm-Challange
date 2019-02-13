#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int upperLimit=1000,bottomLimit=0,randomNumber=1,checkVariable=0,roundNumber=1;
	
	while(upperLimit-randomNumber!=)
	{
		randomNumber=((rand()%(upperLimit-bottomLimit-1))+bottomLimit+1);
		printf("%d. round found %d number between %d-%d.", roundNumber, randomNumber, bottomLimit, upperLimit);
		checkVariable %= 2;
   		if (!(flip & 1)){
            printf("%d - %d arasinda %d sayisi bulundu. Yeni ust sinir = %d\n",
                    alt,ust,num,num);
            ust = num;
        }else{
            printf("%d - %d arasinda %d sayisi bulundu. Yeni alt sinir = %d\n",
                    alt,ust,num,num);
            alt = num;
        }
			checkVariable++;
			roundNumber++;

		printf("\n");
	}
	printf("Finally, found %d %d %d numbers regularly", bottomLimit, randomNumber, upperLimit);
	return 0;
}                                     printf("New upper limit is %d.", upperLimit);
				break;

				case 1:
					bottomLimit=randomNumber;
	 				printf("New bottom limit is %d.", bottomLimit);
