#include<stdio.h>
#include<conio.h>
int main()
{
    int deposit,withdraw,option;
    int i,balance=1000;
    do{
    printf("\n1.check balance\n2.deposit\n3.withdraw\n4.exit");
    printf("\nselect operation :");
    scanf("%d",&option);
    switch (option)
    {
        case 1:
            printf("%d",balance);
            break;
        case 2:
            printf("enter deposit amount :");
            scanf("%d",&deposit);
            balance+=deposit;
            break;
        case 3:
            printf("enter withdraw amount :");
            scanf("%d",&withdraw);
            balance-=withdraw;
            break;
        case 4:
            break;
        default:
            break;
    }

    }
    while(option<4);
    return 0;
}