#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {

            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        star += 2;
        space--;

        printf("\n");
    }
    star = 2 * n - 1;
    space = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {

            if (i % 2 != 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        star -= 2;
        space++;

        printf("\n");
    }
    return 0;
}