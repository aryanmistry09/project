//number guessig game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomnumber=(rand()% 100)+1;
    printf("Random Number = %d\n",randomnumber);
    int guessed;
    int no_of_guessed=0;
    do
    {
    printf("Enter guessed =");
    scanf("%d",&guessed);
    if (randomnumber<guessed)
    {
        printf("guessed is greater than randomnumber \n");
    }
    else if(randomnumber>guessed)
    {
        printf("guessed is less than randomnumber \n");
    }
    else
    {
        printf("guessed is equal randomnumber \n");
    }
    no_of_guessed++;
    }while(guessed!= randomnumber);
    return 0;
}