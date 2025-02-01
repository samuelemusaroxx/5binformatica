#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <conio.h>
#include "windows.h"
#include <ctime>
 using namespace std;
 char nome[50]=" ";
 char cognome[50]=" ";
 int eta=0;
 char numTel[20];
 int inserimento=0;
 int main()
 {
 	FILE*Rubrica;
 	Rubrica = fopen("Rubrica.txt","r");
 	if(Rubrica==NULL)
 	{
 		Rubrica = fopen("Rubrica.txt","w");
	 }
	else
	{
		
 		Rubrica = fopen("Rubrica.txt","a");
	 
	 } 
 do
 {
 	 printf("INSERISCI IL NOME:   ");
 scanf("%s",&nome);
printf("INSERISCI IL COGNOME:   ");
 scanf("%s",&cognome);
 printf("INSERISCI L'ETA:   ");
 scanf("%d",&eta);
 printf("INSERISCI IL NUMERO DI TELEFONO:  ");
 scanf("%s",&numTel);
 fprintf(Rubrica, "%s %s %d %s\n",nome,cognome,eta,numTel);
 printf("Vuoi inserire altri nominativi o no? 1 per continuare 2 uscire");
 scanf("%d",&inserimento);
 }while(inserimento==1);
 
 
return 0;
 fclose(Rubrica);
 
 }
