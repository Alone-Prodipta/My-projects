#include<stdio.h>
//#include<math.h>
int power(int digit,int count);
void main()
{
    int i,n,num,c=0,sum=0,p=1,rem;
    printf("Enter any number:\n");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    num=n;
    while(num>0)
    {
        rem=num%10;
        //p=pow(rem,c);  //For using mathematical librery.
        p=power(rem,c);
        sum=sum+p;
        num=num/10;
    }    
//Problem may happen with test case '153'.
        if(sum==n) 
        {
            printf("Armstrong number.");
        }
        else
        {
            printf("Not an Armstrong number.");
        }
}
//power function.
int power(int digit,int count)
{
    int i=1,multi=1;
    for(i=1;i<=count;i++)
    {
        multi=multi*digit;
    }
    return multi;

}
