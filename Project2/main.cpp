//0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���Ͻÿ�

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