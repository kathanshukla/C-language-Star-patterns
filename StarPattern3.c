// *********************************************************************
//  Author - Vaibhav Kagathara
//  Date :- 20th October 2019
//  Language :- C Language
//  About :- Star Pattern 3
//  *********************************************************************


//  //////////////////////////////////////////////////////////////////////
/*
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
//  //////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main()
{
    int i, j, k ;
    for(i=1; i<=7; i++)
    {
        for(j=i; j<7; j++)
        {
            printf(" ");
        }
        
        for(k=1; k<(i*2); k++)
        {
                printf("*");
        }
        
        printf("\n");
    }
    
    for(i=6;i>=1;i--)
    {
        for(j=7; j>i; j--)
        {
                printf(" ");
        }
        
        for(k=1; k<(i*2) ;k++)
        
        {
                printf("*");
        }
        printf("\n");
    }
    
}
