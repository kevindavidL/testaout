# include <stdio.h>
# include <stdlib.h>
int main ()
{


 int z;
 printf("Introduire un caractère suivi de 'Enter'\n");
 z = getchar();
 printf("Le caractère %c a le code ASCII %d\n", z, z);

 
return 0;
}
