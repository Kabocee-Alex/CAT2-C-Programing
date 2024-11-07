/*
Program that prompt the user to enter hours worked in a week
Author:Alex
Date:7/11/24
*/
#include <stdio.h>

int main() {

int hours;
float hourlyWage, taxRates;
float grossPay;
float netPay;

//Input hours worked
printf("Enter hours worked in a week:");
scanf("%d",&hours);

//Input hourly wage
printf("Enter hourly wage:");
scanf("%f",&hourlyWage);

//if statement for grosspay
if(hours>40){
 grossPay=hourlyWage*1.5;
 }
 else{
    grossPay=hours*hourlyWage;
 }
//if statement for taxes
 if(grossPay<=600){
  taxRates=0.15*grossPay;
  }
  else{
  taxRates=600*0.15+0.2*(grossPay-600);
  }
//calculate net pay
netPay=grossPay-taxRates;
  //printf statements
  printf("The grossPay is:%f",grossPay);
  printf("\nThe tax to be paid:%f",taxRates);
  printf("\nThe net pay is:%f",netPay);

  return 0;
  }
