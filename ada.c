#include <stdio.h>
int main()
{
int a, b;
char c;
    printf("enter primer\t");
    scanf("%d%c%d", &a, &c, &b);

    switch(c)
    {
        case '+':
        printf("%d+%d=%d\n", a, b, a+b);
        break;

        case '-':
        printf("%d-%d=%d\n", a, b, a-b);
        break;

        case '*':
        printf("%d*%d=%d\n", a, b, a*b);
        break;

        case '/':
        printf("%d/%d=%d\n", a, b, a/b);
        break;

        default:
        printf("error");
    }

    return 0;
}