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
	struct Punkt** p;
};
// Uzupełnić argumenty oraz definicje funkcji:
void Stworz_Figury(struct Figure*** figury, const int ilosc)
{
	struct Figure** temp = (struct Figure**)malloc(sizeof(struct Figure*) * ilosc);
	for (int i = 0; i < ilosc; i++) {
		temp[i] = (struct Figure*)malloc(sizeof(struct Figure));
	}
	*figury = temp;
}
void Pokaz_Figury(struct Figure* const* const figa, int ilosc) 
{
	if (ilosc == 1)
		printf("FIGURA JEST PUNKTEM");
	else if (ilosc == 2)
		printf("FIGURA JEST PROSTĄ");
	else
	printf("FIGURA JEST: %d-KĄTEM", ilosc);
}
void Dodaj_Punkt_do_Figury(struct Figure *const *const figa, const int ilosc) 
{
	int figura = rand() % +1;
	p->
	




}

// Funkcja przez argumenty ma zwracać wyzerowany wskaźnik oraz wartość rozmiaru 
void Zwolnij_Pamiec(? ? ? , ? ? ? ) 
{ 

}

int main() {
	int ilosc = 3, choice;
	char ch;
	struct Figure** figi = NULL;
	srand(time(NULL));
	system("cls");
	srand(time(NULL));
	do
	{
		printf("Menu\n\n");
		printf("1. Stwórz bazę figur\n");
		printf("4. Dodaj punkt do figury \n");
		printf("6. Pokaż figury\n");
		printf("0. Exit\n");
		printf("Wybież opcję : \n");
		scanf("%d", &choice);
		ch = getchar();
		switch (choice) {
		case 1:
			Stworz_Figury(*figi, ilosc);
			printf("Baza figur została stworzona \n");
			while ((ch = getchar()) != '\n');
			system("cls");
			break;
		case 4:
			Dodaj_Punkt_do_Figury(figi, ilosc);
			printf("Nowa współrzędzna została dodana \n");
			while ((ch = getchar()) != '\n');
			system("cls");
			break;
		case 6:
			Pokaz_Figury(figi, ilosc);
			while ((ch = getchar()) != '\n');
			system("cls");
			break;
		case 0:
			printf("Dziękuję \n");
			Zwolnij_Pamiec(? ? ? , ? ? ? );
			break;
		default:
			printf("Błędny wybór. Powtórz\n");
			while ((ch = getchar()) != '\n');
			system("cls");
			break;
		}
	} while (choice != 0);
	printf("\n");
}
