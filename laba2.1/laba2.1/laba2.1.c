#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, e, c, i;
    for (i = 1000; i < 2000; i++)
    {
        e = i;
        a1 = e % 10;
        a2 = e % 100 / 10;
        a3 = e % 1000 / 100;
        a4 = 1;
        c = a2 * 1000 + a3 * 100 + a4 * 10 + a4;
        if (c == e * 3) 
            printf("%d\n", e);       
    }
    if (c != e*3) 
    printf("nubmer not found");
    return 0;
}