#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long counter; 
    printf("give your credit card number \n");
    scanf("%li", &counter);
    int digit = 0;
    long counter2 = counter;
    while (counter2 > 0)
    {
       counter2 = counter2 / 10;
       digit++;
    }
    long counter3 = counter;
    int sumO = 0;
    while (counter3 > 0)
    {
        sumO += counter3 % 10;
        counter3 = counter3 / 100;
    }
    long counter4 = counter;
    int sumE = 0;
    counter4 = counter4 / 10;
    while (counter4 > 0)
    {
        int S = (counter4 % 10);
        S = S * 2; 
        if (S < 9)
        {
            sumE += S;
        }
        else
        {
            sumE += S % 10;
            S = S / 10;
            sumE += S;
        }
        counter4 = counter4 / 100;
    }
    if((sumO + sumE) % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    if(digit == 13)
    {
        if(counter / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if(digit == 15)
    {
        if(counter / 10000000000000 == 34 || counter / 10000000000000 == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if(digit == 16)
    {
        if(counter / 100000000000000 == 51 || counter / 100000000000000 == 52 || counter / 100000000000000 == 53 || counter / 100000000000000 == 54 || counter / 100000000000000 == 55)
        {
            printf("MASTERCARD\n");
        }
        else if(counter / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}























































/*#include <stdio.h>
#include <cs50.h>
int main(void)
{
    long number;
    number = get_long("enter your credit card number \n");
    int digit = 0;
    //check invalid
    //digit
    long number2 = number;
    while (number2 > 0)
    {
        number2 = number2 / 10;
        digit = digit + 1;
        // for total number of digits in a number
    }
    long number3 = number;
    int sum1 = 0;
    while (number3 > 0)
    {
        sum1 += (number3 % 10);
        number3 = number3 / 100;
    }
    long number4 = number;
    int sum2 = 0;
    number4 = number4 / 10;
    while (number4 > 0)
    {
        int a = (number4 % 10);
        a = a * 2;
        if (a <= 9)
        {
            sum2 += a; // because upto (2 * 4 = 8), we have single digit product
        }
        else
        {
            sum2 += a % 10;
            a = a / 10;
            sum2 += a; // to add the digits of obtained product
        }
        number4 = number4 / 100;
    }
    if ((sum1 + sum2) % 10 != 0) // to verify checksum
    {
        printf("INVALID\n");
        return 0;
    }

    if (digit == 13)
    {
        if (number / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (digit == 15)
    {
        if (number / 10000000000000 == 34 || number / 10000000000000 == 37)
        {
            printf("AMEX\n");   
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (digit == 16)
    {
        if (number / 100000000000000 == 51 || number / 100000000000000 == 52 || number / 100000000000000 == 53 || number / 100000000000000 == 54 || number / 100000000000000 == 55)
        {
            printf("MASTERCARD\n");
        }
        else if (number / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0; // code completed finally!
}*/