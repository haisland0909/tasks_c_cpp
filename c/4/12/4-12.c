﻿
#include <stdio.h>

int main(void)
{
    int no , digit;

    do {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a正でない数を入力しないでください。");
    } while (no <= 0);
    digit = 0;
    /* noは0より大きくなっている */
    printf("%dは" , no);
    while (no > 0) {
        //printf("%d", no % 10);      /* 最下位の桁の値を表示 */ 
        no /= 10;                   /* 右に１桁ずらす */
        digit++;
    }
    printf("%d桁です。" , digit);

    return 0;
}
