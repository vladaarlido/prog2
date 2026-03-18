#include <stdio.h>
int main()

{
    int num = 5;    //объявляем переменную num = 5
    int *pNum = &num;   //обявляяем переменную указатель pNum
    printf("%p - %p\n", pNum, &num); //выводит содюуказателя pNum (&num), и адре &num
    printf("%d\n, num");    //выводит адрес num
    printf("%d\n", *pNum);  //выводит адрес num

    getchar();     //чтобы терминал не вис вводим просто enter
    return 0;
}
