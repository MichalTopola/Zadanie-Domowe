// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;
bool przystepnosc(int rok) {

	return (rok % 4 == 0 && rok % 100 == 0 || rok % 400 == 0);
}



int main(bool przestepny)
{
	string tydzien[] =
	{ "Poniedzialek", "Wtorek", "Sroda", "Czwartek", "Piatek", "Sobota", "Niedziela" };
	int yy, c, g;
	int wynik = 0;
	int dzienTygodniaPierwszy;
	int liczbaDniWmiesiacu;
	int liczbaDni[] =
	{ 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
	int dzien, miesiac, rok;
	cout << "Podaj dzien: " << endl;
	cin >> dzien;
	cout << "Podaj miesiac: " << endl;
	cin >> miesiac;
	cout << "Podaj rok: " << endl;
	cin >> rok;

	bool przystepnosc(int rok);
	if (przystepnosc(rok) == true) {
		yy = (rok - 1) % 100;
		c = (rok - 1) - yy;
		g = yy + yy / 4;
		dzienTygodniaPierwszy = (((((c / 100) % 4) * 5) + g) % 7);
		liczbaDniWmiesiacu = (liczbaDni[miesiac] + dzien);
		dzienTygodniaPierwszy += liczbaDniWmiesiacu - 1;
		wynik = dzienTygodniaPierwszy % 7;
	}
	else
	{
		yy = (rok - 1) % 100;
		c = (rok - 1) - yy;
		g = yy + yy / 4;
		dzienTygodniaPierwszy = (((((c / 100) % 4) * 5) + g) % 7);
		liczbaDniWmiesiacu = (liczbaDni[miesiac] + dzien);
		dzienTygodniaPierwszy += liczbaDniWmiesiacu;
		wynik = dzienTygodniaPierwszy % 7;
	}
	cout << tydzien[wynik];



}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
