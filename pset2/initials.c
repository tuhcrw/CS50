/* Obtain a string from the user and display their intials in capitals
*
*Initial Pseudo Tasks
*Setup Main
*declare strings
*   Initials
*   Input_name
*Obtain String
*   Check for invalid values
*   Add to string input_name
*Obtain first char of array
*   Add to string initials
*find location of Spaces
*   get char to the right of the spaces
*   Add to String initials
*Output string Initials
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string input_name;

    //obtain name from user
    do
    {
        input_name = GetString();
    }while (input_name == NULL);
    
    // print string if it is the first char or 1st char after space
    printf("%c", toupper(input_name[0]));
    
    for (int i = 1, n=strlen(input_name); i<n; i++)
    {
        if (input_name[i]==' ')
        {
            printf("%c", toupper(input_name[i+1]));
        }   
    }    
    printf("\n") ;
}
