#include<stdio.h>
int main()
{

int number[6];
int positive[6];
int negative[6];
int i, n;
int p;
int ng;
printf("How many numbers you want to enter:");
scanf("%d",&n);

printf(" Enter the numbers:\n");
for(i=0;i<n;i ++)
{
    scanf("%d",&number[i]);
    if (number[i]>=0)
    {
        positive[p]=number[i];
        p++;
    }
    else
    {
        negative[n]=number[i];
        n++;
    }
}

printf("Positiv number:");
for(i=0;i<p;i++)
{
    printf("%d",positive[i]);

}
printf("\nNegative numbers :");
for(i=0;i<n;i++)
printf("%d",negative[i]);

printf("\nTotal Positive numbers=%d",p);
printf("\nTotal Negative numbers =%d",n);


return 0;

}
