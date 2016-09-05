#include <stdio.h>


int main()

{


int c;
int cb = 0;
int ct = 0;
int cn = 0;

while( (c = getchar()) != EOF )
{
     if (' ' == c){
        cb++;}
     if ('\t' == c){
        ct++;}
     if ('\n' == c){
        cn++;}

}
printf("N° de espacios en blanco : %d\n", cb);
printf("N° de tabuladores : %d\n", ct);
printf("N° de nueva linea : %d\n", cn);

}
