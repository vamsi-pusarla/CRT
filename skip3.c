#include<stdio.h>
#include<conio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",arr[i]);
    }
    int k,arr2[100000],c=0;
    for(k=1;k<100000;k++)
    {   
        c++;
        if(k%3==0&&k%10==3){
            c+=2;
            arr2[k]=c;
        }
        else if(k%3==0||k%10==3){
            c+=2;
            arr2[k]=++c;
        }
        else
            arr2[k]=c;
    }

    return 0;
    
}