// Programm zum Umwandeln von Groﬂ- in Kleinbuchstaben und umgekehrt (Version 2)
// Autor: Fabian Prestros
// Datum: 12.01.2021

#include <stdio.h>
#include <string.h>

#define zahl 1000

// Funktion zum Umwandeln von Groﬂ- in Kleinbuchstaben und umgekehrt
int tauschen(char y[zahl])
{
	int i = 0;

	while (y[i] != '\0')
	{
		// Umwandeln von Groﬂ- in Kleinbuchstaben
		if (y[i] >= 'A' && y[i] <= 'Z')
		{
			y[i] = y[i] + 32;
		}

		// Umwandeln von Klein- in Groﬂbuchstaben
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
	
	// String einlesen
	printf("Bitte geben Sie Zeichen ein: ");
	gets_s(zeichen, zahl);

	tauschen(zeichen);

	// String ausgeben
	i = 0;
	while (zeichen[i] != '\0')
	{
		printf("%c", zeichen[i]);
		i++;
	}
}