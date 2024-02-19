#include<stdio.h>
int main()
{
    int numbers[5];

    scanf("%d\n",&numbers[0]);
    scanf("%d\n",&numbers[1]);
    scanf("%d\n",&numbers[2]);
    scanf("%d\n",&numbers[3]);
    scanf("%d\n",&numbers[4]);

    for(int index=0; index<5; index++)
    {
        printf("%d\n",numbers[index]);
    }

    return 0;
}