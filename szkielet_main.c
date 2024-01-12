#define NAZWAFIGURYSIZE 20
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <locale.h>

struct Punkt {
	int  x;
	int  y;
};
struct Figure {
	int  ilosc;
   char nazwa[NAZWAFIGURYSIZE];
	struct Punkt **p;
};
// Uzupe³niæ argumenty oraz definicje funkcji:
void Stworz_Figury( ??? , const int ilosc) { //...  }
void Pokaz_Figury(struct Figure * const * const figa, int ilosc) { //...  }
// Funkcja przez argumenty ma zwracaæ wyzerowany wskaŸnik oraz wartoœæ rozmiaru 
void Zwolnij_Pamiec(???, ???) { //... }
// Funkcja przez argumenty ma zwracaæ powiêkszan¹ tabicê oraz jej rozmiar 
void Usun_Figure(???, ???) { //... }
// Funkcja przez argumenty ma zwracaæ powiêkszan¹ tabicê oraz jej rozmiar 
void Dodaj_Figure(???, ???) { //... }
void Dodaj_Punkt_do_Figury(struct Figure *const * const figa, const int ilosc) { //... }
void Usun_Punkt_z_Figury(struct Figure * const * const figa, const int ilosc) { //... }


int main() {
	int ilosc = 3, choice;
	char ch;
	struct Figure** figi = NULL;
	srand(time(NULL));
	system("cls");
	srand ( time(NULL) );
	do
	{
		printf("Menu\n\n");
	 	printf("1. Stwórz bazê figur\n");
	 	printf("2. Dodaj figurê \n");
	 	printf("3. Usuñ figurê \n");
	 	printf("4. Dodaj punkt do figury \n");
	 	printf("5. Usuñ punkt z figury\n");
	 	printf("6. Poka¿ figury\n");
	 	printf("0. Exit\n");
	 	printf("Wybie¿ opcjê : \n");
	 	scanf("%d",&choice);
	 	ch = getchar();
	 	switch (choice) {
			case 1:
				Stworz_Figury(???, ilosc);
				printf("Baza figur zosta³a stworzona \n");
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		  	case 2:
				Dodaj_Figure(???, ???);
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		  	case 3:
				Usun_Figure(???, ???);
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		  	case 4:
				Dodaj_Punkt_do_Figury(figi, ilosc);
				printf("Nowa wspó³rzêdzna zosta³a dodana \n");
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		  	case 5:
				Usun_Punkt_z_Figury(figi, ilosc);
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		  	case 6:
				Pokaz_Figury(figi, ilosc);
		  		while (( ch = getchar()) != '\n');
		  		system("cls");
		  		break;
		 	case 0:
		 		printf("Dziêkujê \n");
				Zwolnij_Pamiec(???, ???);
		 		break;
		 	default:
		 		printf("B³êdny wybór. Powtórz\n");
		  		while (( ch = getchar()) != '\n');
				system("cls");
		 		break;
		 }
	} while (choice != 0);
	printf("\n");
}