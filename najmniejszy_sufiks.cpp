// Project4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;

int najmniejszy_sufiks(int n, string s) {
    int liczba = 0;
    char min = s[0];
    for (int i = 1; i < n; i++) {
        if (min > s[i]) {
            min = s[i];
            liczba = i;
        }
        else {
            if (min == s[i]) {
                min = s[i];
                liczba = i;
            }
        }
    }

    return liczba;
}

int main()
{
    int number;
    fstream file;
    file.open("sufiks_4.txt");
    int n;
    string s;
    while (!file.eof())
    {

        file >> n;
        file >> s;
        number = najmniejszy_sufiks(n, s);

        if (file.eof()) break;

        for (int j = number; j < n; j++) {
            cout << s[j];
        }
        cout << endl;
    }
 
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
