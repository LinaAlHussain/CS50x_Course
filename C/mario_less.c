#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height,row,col,space;
    do
    {
       height = get_int("Enter Height: ");
    }
    while(height<1 || height>8);

    for(row = 0; row<height; row++)
    {
        for(space=height-1; space>row; space--)
        {
            printf(" ");
        }
        for(col=0; col<=row; col++)
        {
            printf("#");
        }
        printf("  ");
        for(col=0; col<=row; col++)
        {
            printf("#");
        }
        printf("\n");
    }

}