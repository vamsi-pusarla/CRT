#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1;;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
