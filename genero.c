#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 char nome [30];
  char genero;
 int grau;
 float temp;
 
 int main (){
    puts ("digite seu nome");
gets (nome);
 	
 puts ("\n digite seu genero (f ou m):");
 genero = getche ();
  
 switch(genero){
 case 'f':
 case 'F':
    printf ("\n %s vc eh mulher",nome); break;
case 'm':
case 'M':
    printf ("\n %s vc eh homem",nome); break;
default: printf("\n vc digitou um genero invalido");    
 }
 
 puts ("\n digite seu grau de instrucao:0 a 4");
 scanf ("%i", & grau);
 switch (grau){
 case 0: puts ("\n vc eh analfabeto"); break;
 case 1: puts ("\n vc tem ensino funtamental"); break;
 case 2: puts ("\n vc tem ensino medio"); break;
 case 3: puts ("\n vc tem ensino superior"); break;
 case 4: puts ("\n vc tem pos graduacao"); break;
    default: puts ("n vc digitou grau instrucao invalido");
} 
 printf ("\n\n digite a temperatura um grau celsus");
 scanf ("%f",&temp);
 if (temp< 10.0)
 puts ("\n o clima esta fresco ou frio");
 else
 if (temp<=10.0 && temp <=20.0)
 puts ("\n o clima esta fresco e agradavel");
 else
 puts("\n o clima etsa quenter ou muito quente");
 puts ("\n\n the end");
 getch ();
 }
