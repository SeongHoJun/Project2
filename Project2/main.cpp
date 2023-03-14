//0부터 100까지의 숫자 중에서 소수들 만의 합을 구하시오

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100
int main(void)
{
    int i;
    int num, sum = 0;

    for (num = 0; num <= MAX_NUM; num++)
    {
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
                break;
        }
        if (num == i)
            sum = sum + num;
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}