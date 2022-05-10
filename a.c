#include <stdio.h>
#include <stdlib.h>
int power(int a, int b)
{
    int p = 1;
    for(int i = 1; i <= b; i++)
        p *= a;
    printf("Hello World from power\n");
    return p;
}

int main(void)
{
    int a;
    a = 8;
    printf("%d\n", power(a, 3));
    printf("Hello World!\n");
    system("pause");
    return 0;
}