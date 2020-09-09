// Build both sides of pyramid

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;

    do
    {
        // Get specific user input
        x = get_int("Enter height: ");
    }
    while (x < 1 || x > 8);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            printf(" ");
        }
            // Print left side of pyramid
            for (int j = 0; j < i + 2; j++)
                printf("#");
                printf("  ");

            // Print right side of pyramid
            for (int j = 0; j < i + 2; j++)
                printf("#");
                printf("\n");
    }
}