#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("a:%d is the largest\n",a);
        else
        printf("b:%d is the largest\n",b);
    }
    else if(b>c)
    printf("b: is the largest\n",b);
    else
    printf("c:%d is the largest\n",c);
}