#include <stdio.h>
int main()
{
    int a = 1, b = 1, c, d, i=0;
    printf("input any number \n");
    scanf_s("%d", &d);
    while (i<=9999)
    {
        c = a + b;
        a = b;
        b = c;

        if (d != a && d != b && d != c)
        {
            i++;                          
        }
        else {

            printf("true");
            return 0;
        }
    }
    if (d > c)
    {
        printf("false");    
    }
    return 0;
}