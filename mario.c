
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    //use a do while to loop the request for input, so we can repeat the request if it does not pass our validation
    do
    {
        printf("height: \n");

        height = GetInt();

    }while (height <0 || height >23);

    if (height == 0) return 0;

    //Create the rows based on the input height, this will be the pyramid row height
    for (int i=0; i<height; i++)
    {

        //create the spaces decreasing, as the exit clause is linked to i it will run through one less time each time it is intially called
       for (int j = 0; j<height-i-1; j++)
        {
            printf(" ");
        }

        //create the hashes increasing, this is linked to the i. We have to add some to it though as the program doesn't start at 1 hash
       for (int k = 0; k<i+2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
