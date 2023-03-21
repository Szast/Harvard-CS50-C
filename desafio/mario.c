#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    do
        // get a height from the user to the piramid
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

        // loop to form the piramid based on the height the user set
    for (int i = 0; i < n; i++) //prints the left side of the piramid
    {
        for (int j = 0; j < n; j++)
        {

            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

            printf("  "); //prints the gap


        for (int j = 0; j < n; j++) //prints the right side of the piramid
        {
            if (i + j > n - 2)
            {
                printf("#");
            }


        }
        printf("\n");
    }

}
