﻿#include <stdio.h>

int main(void)
{
    int no , no2;
    printf("正の整数：");
    scanf("%d", &no);
    no2 = no;

    while (no-- > 0){
        if (no % 2)
            putchar('+');
        else
            putchar('-');
    }
    if (no2 >= 1 )
        putchar('\n');

    return 0;
}
