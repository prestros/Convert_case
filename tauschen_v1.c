// Programm zum Umwandeln von Groﬂ- in Kleinbuchstaben und umgekehrt (Version 1)
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
		if(y[i] >= 'A' && y[i] <= 'Z')
			y[i] = tolower(y[i]);	// Umwandeln von Groﬂ- in Kleinbuchstaben
		
		// Umwandeln von Klein- in Groﬂbuchstaben
		else if (y[i] >= 'a' && y[i] <= 'z')
			y[i] = toupper(y[i]);	// Umwandeln von Klein- in Groﬂbuchstaben

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