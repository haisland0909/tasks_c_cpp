﻿#include <stdio.h>
#include <ctype.h>

void del_digit(char *s)
{
    int real_i = 0;
    int i = 0;
    int temp;
    char *tmp = s;
    while (*s) {
        if (toupper(*s) == tolower(*s)){
            *s = '\0'; 
        } else {
            temp = *s;
            *s   = '\0';
            *tmp = temp;
            *tmp++;
        }
        *s++; 
    }
}

int main(void)
{
    char str[128];

    printf("文字列を入力してください：");
    scanf("%s", str);

    printf("あなたは");
    del_digit(str);
    printf("%sと入力しました。\n", str);

    return 0;
}
