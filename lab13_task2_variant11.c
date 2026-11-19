\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Лабораторная 13, задание 2, вариант 11:
// строка типа «Привет, Вася!», в имени каждая предпоследняя буква заменяется тире
// (Вася -> Ва-я)

int main()
{
    setlocale(LC_ALL, "Rus");
    char name[50];
    int len;

    puts("Пожалуйста, введите ваше имя: ");
    scanf("%49s", name);

    len = strlen(name);
    if (len >= 2)
        name[len - 2] = '-';   // предпоследняя буква

    printf("Привет, %s!\n", name);

    return 0;
}
