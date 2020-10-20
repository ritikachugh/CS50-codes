#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("How many dollars do I owe you? : \n");
    }
    //bla bla
    while (dollar < 0);
    int cents = round(dollar * 100);
    int numDenominations = 0;
    //dszd
    while (cents > 0)
    {
        while (cents / 25 > 0)
        {
            numDenominations += cents / 25;
            cents = cents % 25;
        }
        while (cents / 10 >0)
        {
            numDenominations += cents / 10;
            cents = cents % 10;
        }
        while (cents / 5 >0)
        {
            numDenominations += cents / 5;
            cents = cents % 5;
        }
        //ddda
        while (cents / 1 >0){
            numDenominations += cents/1;
            cents = cents % 1;
        }
    }
    printf("%i \n", numDenominations);
    return 0;
}



