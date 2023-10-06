// Project1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

int main()

{

    int liczba;
    int system;
    string wynik = "";
   cout << "Na jaki system przeliczyć liczbę?\n";
    cin >> system;
    cout << "Podaj liczbe w systemie dziesietnym\n";
    cout << "Podana liczba: ";
    cin >> liczba;
    
    while (liczba != 0) {
        int Reszta = liczba % system;
        string resztaDzielenia;

        if (Reszta > 9) {
            if (Reszta == 10) {
                resztaDzielenia = "A";
            }
            if (Reszta == 11) {
                resztaDzielenia = "B";
            }
            if (Reszta == 12) {
                resztaDzielenia = "C";
            }
            if (Reszta == 13) {
                resztaDzielenia = "D";
            }
            if (Reszta == 14) {
                resztaDzielenia = "E";
            }
            if (Reszta == 15) {
                resztaDzielenia = "F";
            }
        }
        else {
           resztaDzielenia = to_string(Reszta);
        }

        
        wynik = wynik + resztaDzielenia;
        std::cout << "reszta z dzielenia wynosi";

        liczba = liczba / system;
    }
    reverse(wynik.begin(), wynik.end());
    cout << wynik;
   
    return 0;
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
