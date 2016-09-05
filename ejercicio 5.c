#include <stdio.h>
#define Tamano_Arreglo 100

main()

{

     int c,i,s;
     int numero_palabra = 1;
     int caracteres[Tamano_Arreglo + 1] = { 0, 0 };
     while ( (c = getchar()) != EOF) {
       if( c == '\t' || c == '\n' || c == ' ' )

       {
          numero_palabra++;
       }
       else
       caracteres[numero_palabra]++;


     }

printf("\n\n");

for ( s = 1; s <= numero_palabra; s++ ) {
for ( i = 1; i <= caracteres[s]; i++ ) {
printf("*"); }
printf("\n"); }
printf("\n");
return;
}
