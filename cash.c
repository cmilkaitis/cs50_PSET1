#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;

    do
    {
        change = get_float("Enter change: ");
    }
    while (change < 0);

    int newChange = roundf(change * 100);

    while (newChange >= 25)
    {
        newChange -= 25;
        coins++;
    }
    while (newChange < 25 && newChange >= 10)
    {
        newChange -= 10;
        coins++;
    }
    while (newChange < 10 && newChange >= 5)
    {
        newChange -= 5;
        coins++;
    }
    while (newChange < 5 && newChange >= 1)
    {
        newChange -= 1;
        coins++;
    }

    printf("%i\n", coins);

}

