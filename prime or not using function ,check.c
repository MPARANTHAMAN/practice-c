#include<stdio.h>
void prime(int n)
{
    int i;
    int count=0;
for(i=2;i<=n;i++)
{
    if(n%i==0)
    count++;
    break;
    
}
if(count==0)
{
    printf("prime number");
}

else
{
    printf("not a prime number");
}


}
void check(int n)
{
     if(n>0)
    {
        prime(n);
    }
    else
    {
        printf("negative number");
    }
}
int main() {
    int n;
    
    scanf("%d",&n);
    check(n);
   
}
