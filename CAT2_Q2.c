/*
Program to initialize a 2D array
Author:Alex
Date:7/11/24
*/
//Array data structure is a collection of elements of the same data type
#include <stdio.h>

int main () {

int i;    //rows
int j;    //columns
int a, b;



int scores1[2][2]={{65,92},{84,72}};
int scores2[2][2]={{35,70},{59,67}};

//for loop
for(i=0;i<2;i++){
 for(j=0;j<3;j++)

  printf("\nThe scores are[%d][%d]=%d",i,j,scores1[i][j]);
  }
  //for loop for score 2
  for(a=0;a<2;a++){
    for(b=0;b<2;b++)

        printf("\nThe scores are[%d][%d]=%d",a,b,scores2[a][b]);
  }


return 0;
}
