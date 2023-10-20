// specZsowolnegoNaDziesieny.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    int system;
    string liczba;
    int wynik = 0;
    int konwersja;
    int waga = 1;
    
    cout << "Podaj w jakim systemie napiszesz liczbę (max 16) : ";
    cin >> system;
    cout << "Podaj liczbę: ";
    cin >> liczba;

    if (system > 16) {
        cout << "System nie może być więszky od 16-stkowego";

        return 0;
    }
    else {
        reverse(liczba.begin(), liczba.end());

        for (int i = 0; i < liczba.length(); i++) {
            if (system <= 9) {
                if (liczba[i] - '0' >= system) {
                    cout << "Nie ma takiej liczby w systemie: " << system;

                    return 0;
                }
                else {

                    konwersja = liczba[i] - '0';
                    wynik = wynik + (waga * konwersja);
                }
            }
            else {
                if (liczba[i] == 'A' || liczba[i] == 'B' || liczba[i] == 'C' || liczba[i] == 'D' || liczba[i] == 'E' || liczba[i] == 'F') {
                    if (liczba[i] == 'A') {
                        wynik = wynik + (waga * 10);
                    }
                    if (liczba[i] == 'B') {
                        wynik = wynik + (waga * 11);
                    }
                    if (liczba[i] == 'C') {
                        wynik = wynik + (waga * 12);
                    }
                    if (liczba[i] == 'D') {
                        wynik = wynik + (waga * 13);
                    }
                    if (liczba[i] == 'E') {
                        wynik = wynik + (waga * 14);
                    }
                    if (liczba[i] == 'F') {
                        wynik = wynik + (waga * 15);
                    }
                }
                else {
                    if (liczba[i] - '0' >= system) {
                        cout << "Nie ma takiej liczby w systemie: " << system;

                        return 0;
                    }
                    else {

                        konwersja = liczba[i] - '0';
                        wynik = wynik + (waga * konwersja);
                    }

                }
            }
            
            waga = waga * system;
        }
        cout << "Liczba w systemie dziesiętnym to: " << wynik;
    }
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
