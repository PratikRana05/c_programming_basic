// wap to generate the pattern
/*
1
1   2   1
1   2   3   2   1
1   2   3   4   3  2    1
1   2   3   4   5  4    3   2   1





*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        /* code */
        for (j = 1; j <= i; j++)
        {
            /* code */
            printf("%d", j);
        }

        for (k = i - 1; k >= 1; k--)
        {
            /* code */
            printf("%d", k);
        }

        printf("\n");
    }
}