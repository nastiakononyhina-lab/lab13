\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Лабораторная 13, задание 1 (1.1): приветствие по введённому имени

int main()
{
    setlocale(LC_ALL, "Rus");
    char name[50];
    char greeting[100];

    // Шаг 1: приглашение к вводу
    puts("Пожалуйста, введите ваше имя: ");

    // Шаг 2: считывание имени
    scanf("%49s", name);

    // Шаг 3: формирование приветствия
    strcpy(greeting, "Привет, ");
    strcat(greeting, name);

    // Шаг 4: вывод результата
    puts(greeting);

    return 0;
}
