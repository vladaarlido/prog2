#include <stdio.h>
int main()
{
char x[40];
    printf("Hi, what is ur name?\n");
    scanf("%s", &x);
    printf("Welcome, %s!\n", x);

int a;
    printf("How old r u?\n");
    scanf("%d", &a);
    
    if (a>=18) {printf("Ur great, welcome %s!\n", x);}
    else if (a<18) {printf("Sorry %s, ur too young!\n", x);}

    getchar();
    return 0;
}