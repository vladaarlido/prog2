#include <stdio.h>
#include <string.h>
int main()

{
char x[40]; //массив чтобы вписать имя 40 символов условно допустимое значение для имени
    printf("Hi, what is ur name?\n"); //программа здоровается ждёт ввод букв
    scanf("%s", &x); //считывает что за буквы и записывает в %s который является переменной x
    printf("Welcome, %s!\n", x); //здоровается на место %s идёт переменная x значение которой мы записали выше

int a;//делаем переменную a которая будет числом
    printf("How old r u?\n"); //сколько тебе лет ждёт ввода числа
    scanf("%d", &a);//терминал ждёт ввода числа
    
    if (a>=18 && a<110) {printf("Ur great, welcome %s!\n", x);}//если введённое нами число (пер.a) больше либо равно 18 и a меньше 110 выводим добро пожаловать
  
    else if (a<18 && a>=0) {printf("Sorry %s, ur too young!\n", x);}//если a меньше или равно 18 и а больше или равно 0 выводим вы слишком маленький

    else if (a>=110) {printf("\"ERROR\"\n Try again\n");return 0;}//если а больше или равно 110 выводим тшибку
    else if (a<=0) {printf("\"ERROR\"\n Try again\n");return 0;}//если а меньше или равно 0 выводим ошибку

char answer[3];
    printf("Do u wanna play a math game %s? (yes\\no)\n", x);
    scanf("%s", answer);
    if (strcmp(answer, "yes")==0){printf("Ur welcome!\n");}
    else if (strcmp(answer, "no")==0){printf("Fine, bye %s!\n", x);return 0;}
    else {printf("ERROR\n");return 0;}

    getchar();//ждёт ввода enter, просто чтобы не зависал терминал
    return 0;
}
