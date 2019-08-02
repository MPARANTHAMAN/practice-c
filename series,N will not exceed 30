//consider the following of the series ?
// 1,1,2,3,4,9,8,27,16,81,32,243,...
// n will not exceed 30
#include<stdio.h>
#include<math.h>


int odd( int n)
{
    int x,i;
    for(i=0;i<n;i++)
    x=pow(3,i);
  
    printf("%d",x);
}
int even( int n)
{
    int x,i;
    for(i=0;i<n;i++)
    x=pow(2,i);

    printf("%d",x);
}
void main()
{
    int n;
    scanf("%d",&n);
    if(n<=30)
    {
    if(n%2==0)
    odd(n/2);
    else
    even(n/2+1);
    }
    else
    {
        printf("invalid");
    }
}
