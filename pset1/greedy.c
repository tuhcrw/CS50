#include <stdio.h>
#include <cs50.h>
#include <math.h> //for the rounding

int main(void)
{
	float input_change;
	int change;
	int coins = 0;
	int available_coins[4]; //4 items to contain the coin sizes

	//adding the currency to the arrays, could there be a better way?
	
	available_coins[0] = 25;
	available_coins[1] = 10;
	available_coins[2] = 5;
	available_coins[3] = 1;
	
	
	//use a do while to loop the in request if it does not meet our requirements
	do
	{
	    printf("O hai! How much change is owed?: \n");
	    
		input_change = GetFloat();
		
	}while (input_change <0);

	
	if (input_change == 0) return 0;

	//change float to int (converting to cents)
	change = (int) round((input_change*100));

	//loop through the currencies in the array to calculate how many coins 
	//have been used and the remainer each time
	for(int i=0;i<4;i++)
	{
		coins = coins + change/available_coins[i];
		change = change%available_coins[i];
	}
	printf("%d\n",coins);
	
	
}
