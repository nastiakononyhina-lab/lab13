\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>

// Лабораторная 13, задание 1.3: добавить восклицательные знаки,
// чтобы длина строки приветствия стала 40 символов

int main()
{
    setlocale(LC_ALL, "Rus");
    char name[50];
    char greeting[100];
    int len;

    puts("Пожалуйста, введите ваше имя: ");
    scanf("%49s", name);

    strcpy(greeting, "Привет, ");
    strcat(greeting, name);

    // дописываем '!' пока длина меньше 40
    len = strlen(greeting);
    while (len < 40)
    {
        greeting[len] = '!';
        len++;
    }
    greeting[len] = '\0';   // конец строки

    puts(greeting);
    printf("Длина строки = %d\n", (int)strlen(greeting));

    return 0;
}
