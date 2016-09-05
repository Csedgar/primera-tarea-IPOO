#include<stdio.h>

int main()
{

    int ant;
    int c;

    while ( (c = getchar()) != EOF )
      {
       if (' ' != c ){
       if ('\t' != c ){
       putchar(c);
       ant = 'l';
       }}

       if ( ' ' == c ){
       if ( 'l' == ant ){
       printf(" ");
       ant = 'b';
       }}


       if ( '\t' == c ){
       if ( 'l' == ant ){
       printf(" ");
       ant = 'b';
       }}

      }

}
