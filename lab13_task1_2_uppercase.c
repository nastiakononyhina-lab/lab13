\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Лабораторная 13, задание 1.2: имя пишется заглавными буквами

int main()
{
    setlocale(LC_ALL, "Rus");
    char name[50];
    char greeting[100];
    int i;

    puts("Пожалуйста, введите ваше имя: ");
    scanf("%49s", name);

    // переводим каждую букву имени в заглавную
    for (i = 0; i < strlen(name); i++)
        name[i] = toupper((unsigned char)name[i]);

    strcpy(greeting, "Привет, ");
    strcat(greeting, name);
    puts(greeting);

    return 0;
}
