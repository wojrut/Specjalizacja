// Project4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
using namespace std;

int czy_mniejszy(int n, string s, int k1, int k2) {
    int i = k1;
    int j = k2;

    while (i <= n && j <= n) {
        if (s[i] == s[j]) {
            i = i + 1;
            j = j + 1;
        }
        else {
            if (s[i] < s[j]) return true;
            else return false;

        }
    }

    if (j <= n) return true;
    else return false;
}

int main()
{
    bool result;
    fstream file;
    file.open("sufiks_2.txt");
    int wordLenght;
    string word;
    int number1, number2;
    while (!file.eof())
    {

        file >> wordLenght;
        file >> word;
        file >> number1;
        file >> number2;
        result = czy_mniejszy(wordLenght, word, number1, number2);
        
        if (file.eof()) break;
    }

    cout << result;
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
