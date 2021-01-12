// Programm zum Umwandeln von Groﬂ- in Kleinbuchstaben und umgekehrt
// Autor: Fabian Prestros
// Datum: 12.01.2021

#include <stdio.h>
#include <string.h>

#define zahl 20

int tauschen(char y[zahl])
{
	int i = 0;

	while (y[i] != '\0')
	{

		if (y[i] >= 'A' && y[i] <= 'Z')
		{
			y[i] = y[i] + 32;
		}

		else if (y[i] >= 'a' && y[i] <= 'z')
		{
			y[i] = y[i] - 32;
		}
		i++;
	}
}
int main()
{
	char zeichen[zahl] = { 0 };
	int i;
	
	printf("Bitte geben Sie Zeichen ein: ");
	gets_s(zeichen, zahl);

	tauschen(zeichen);

	i = 0;
	while (zeichen[i] != '\0')
	{
		printf("%c", zeichen[i]);
		i++;
	}
}