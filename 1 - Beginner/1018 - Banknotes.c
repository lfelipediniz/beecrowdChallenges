#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);
    printf("%d\n", money);

    int note100 = 0;
    int note50 = 0;
    int note20 = 0;
    int note10 = 0;
    int note5 = 0;
    int note2 = 0;
    int note1 = 0;

    while (money > 0)
    {
        if (money >= 100)
        {
            money = money - 100;
            note100++;
        }
        else if (money >= 50)
        {
            money = money - 50;
            note50++;
        }
        else if (money >= 20)
        {
            money = money - 20;
            note20++;
        }
        else if (money >= 10)
        {
            money = money - 10;
            note10++;
        }
        else if (money >= 5)
        {
            money = money - 5;
            note5++;
        }
        else if (money >= 2)
        {
            money = money - 2;
            note2++;
        }
        else if (money >= 1)
        {
            money = money - 1;
            note1++;
        }
    }
    printf("%d nota(s) de R$ 100,00\n", note100);
    printf("%d nota(s) de R$ 50,00\n", note50);
    printf("%d nota(s) de R$ 20,00\n", note20);
    printf("%d nota(s) de R$ 10,00\n", note10);
    printf("%d nota(s) de R$ 5,00\n", note5);
    printf("%d nota(s) de R$ 2,00\n", note2);
    printf("%d nota(s) de R$ 1,00\n", note1);

    return 0;
}