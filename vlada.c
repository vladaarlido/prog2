#include <stdio.h>
int main()
{
    int a, z;
    printf("minus");
    scanf("%d-%d", &a, &z);
    printf("%d-%d=%d\n", a, z, a-z);

   
    int w, s;
    
    printf("umnoz");
    scanf("%d*%d", &w, &s);
    int result = w * s;
    printf("%d*%d=%d\n", w, s, result);

    getchar();
    return 0;
}
