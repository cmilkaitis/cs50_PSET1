#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height: ");
    }
    while (height < 0 || height > 23);

    int h = height - 1;
    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < h; j++)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        h--;
        printf("#\n");

    }
}
