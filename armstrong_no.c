#include<stdio.h>
int main(void)
{
    int n,num,d,cube,sum;
    printf("armstrong no are:\n");
    //scanf("%d",&n);
    for(num=100; num<=999; num++)
        {
            n=num;
            sum=0;
            while(n>0)
            {
                d=n%10;
                n/=10;
                cube=d*d*d;
                sum=sum+cube;
            }
            if(num==sum)
                printf("%d\n",num);
        }
        return 0;
}
