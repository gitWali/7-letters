#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;  //"Namensraum"

int main() //"Hauptfunktion"
{
	char a; //Variable für den 1. Buchstaben erstellen
	char b; //Variable für den 2. Buchstaben erstellen
	char c; //Variable für den 3. Buchstaben erstellen
	char d; //Variable für den 4. Buchstaben erstellen
	char e; //Variable für den 5. Buchstaben erstellen
	char f; //Variable für den 6. Buchstaben erstellen
	char g; //Variable für den 7. Buchstaben erstellen
	
	cout << "Bitte geben Sie den 1. Buchstaben ein:" << endl;	//Eingabefeld für den 1. Buchstaben
		cin >> a;	//Den eingegebenen 1. Buchstaben Lesen
	cout << "Bitte geben Sie den 2. Buchstaben ein:" << endl;	//Eingabefeld für den 2. Buchstaben
		cin >> b;	//Den eingegebenen 2. Buchstaben Lesen
	cout << "Bitte geben Sie den 3. Buchstaben ein:" << endl;	//Eingabefeld für den 3. Buchstaben
		cin >> c;	//Den eingegebenen 3. Buchstaben Lesen
	cout << "Bitte geben Sie den 4. Buchstaben ein:" << endl;	//Eingabefeld für den 4. Buchstaben
		cin >> d;	//Den eingegebenen 4. Buchstaben Lesen
	cout << "Bitte geben Sie den 5. Buchstaben ein:" << endl;	//Eingabefeld für den 5. Buchstaben
		cin >> e;	//Den eingegebenen 5. Buchstaben Lesen
	cout << "Bitte geben Sie den 6. Buchstaben ein:" << endl;	//Eingabefeld für den 6. Buchstaben
		cin >> f;	//Den eingegebenen 6. Buchstaben Lesen
	cout << "Bitte geben Sie den 7. Buchstaben ein:" << endl;	//Eingabefeld für den 7. Buchstaben
		cin >> g;	//Den eingegebenen 7. Buchstaben Lesen
	
	cout << "Ihr Wort lautet:" << string(1, a)+string(1, b)+string(1, c)+string(1, d)+string(1, e)+string(1, f)+string(1, g) << endl;	//Die 7 Buchstaben zu einem Wort zusammenführen
	

		return 0;									  //"Programm beenden"
	
}
