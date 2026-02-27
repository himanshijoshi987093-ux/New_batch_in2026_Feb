#include<stdio.h>
int main()
{
int balance=10000;
int deposit;
int withdrawal;

printf("*****Saving Account*****");

printf("\n~~~~~Enter the deposit amount:\n");
scanf("%d",&deposit);
printf("\n~~~~~Enterr the withdrawal amount:\n");
scanf("%d",&withdrawal);

  balance = balance + deposit - withdrawal;
  printf(" Available balance is : %d",balance);
  return 0;
}
