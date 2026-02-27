#include<stdio.h>
int main()
{
int hindi; 
int english;
int maths;
int science;
int  arts;
int total;
float percentage;


printf("######### Marksheet of 10th #########");
printf(" \nEnter the marks of hindi sub:\n");
scanf("%d",&hindi);
printf("\n Enter the marks of english sub :\n");
scanf("%d",&english);
printf("\n Enter the marks of maths sub :\n");
scanf("%d",&maths);
printf("\n Enter the marks of science sub :\n");
scanf("%d",&science);
printf(" \nEnter the marks of arts sub :\n");
scanf("%d",arts);

 total =hindi, + english + maths + science + arts;
printf(" \nTotal: %d\n",total);

percentage: total*5;
printf("\n***Percentage***:%d\n",percentage);




}