// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int day=3;
//     switch (day)
//     {
//         case 1:
//             printf("day1");
//             break;
//         case 2:
//             printf("day2");
//             break;
//         case 3:
//             printf("day3");
//             break;
//         default:
//             printf("no day");
//     }
//     return 0;
// }
#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    switch (marks/10)
    {
        case 10:
            printf("GRADE A");
            break;
        case 9:
            printf("GRADE A");
            break;
        case 8:
            printf("GRADE B");
            break;
        case 7:
            printf("GRADE C");
            break;
        case 6:
            printf("GRADE D");
            break;
        default:
            printf("FAIL");
    }
    return 0;
}