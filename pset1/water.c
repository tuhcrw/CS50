#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int minutes;
    printf("Minutes: ");
    minutes = GetInt();
    
    printf("\nbottles: %d\n", minutes*12);
    
    
}
