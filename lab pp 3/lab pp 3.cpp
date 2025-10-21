//POĆWICZYĆ JESZCZE CASE, SWITCH I BREAK !!!

/*Zad 1. Napisz program, który poprosi użytkownika o wprowadzenie z klawiatury dwóch wartości dla zmiennych
całkowitych a i b. Następnie program powinien sprawdzić czy wprowadzone liczby są sobie równe, jeśli tak jest
to kod wyświetla odpowiedni komunikat. Jeśli a i b nie są sobie równe to program powinien sprawdzić czy a < b.
Jeśli a < b jest to kod wyświetla odpowiedni komunikat. W innym wypadku program powinien wyświetlić, że
a > b.*/

/*#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "Wprowadz dwie liczby calkowite" << endl;
	cin >> a >> b;
	if (a == b) {
		cout << "Liczby sa sobie rowne" << endl;
	}
	else if (a < b) {
		cout << "Liczba " << a <<  " jest mniejsza od liczby " << b << endl;
	}
	else {
		cout << "Liczba "  << a << " jest wieksza od liczby " << b << endl;
	}
}
*/

/*Zad 2. Wykorzystaj kod z poprzedniego zadania i zastanów się jak zmienić kod, aby zamiast instrukcji else if
wykorzystać zagnieżdżone instrukcje if i else*/

/*#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout << "Wprowadz dwie liczby calkowite" << endl;
	cin >> a >> b;
	if (a == b) {
	cout << "Liczby sa sobie rowne" << endl;
	}
	else {                                                                      //Zagnieżdżone instrukcje if i else oznaczają umieszczenie jednej instrukcji warunkowej 
		if (a < b) {                                                            //wewnątrz innej. Pozwala to na tworzenie bardziej złożonych ścieżek decyzyjnych, gdzie  
			cout << "Liczba " << a << " jest mniejsza od liczby " << b << endl; //wykonanie danego bloku kodu zależy od spełnienia serii warunków, jeden po drugim. 
		}
		else {
			cout << "Liczba " << a << " jest wieksza od liczby " << b << endl;
		}
	}

} */

/*Zad 4. Napisz program, który będzie prostym kalkulatorem implementującym działanie dodawania, odejmowania, dzielenia. Program prosi użytkownika o wprowadzenie dwóch 
liczb zmiennoprzecinkowych oraz o wprowadzenie znaku dla pożądanego działania (’+’ lub ’-’ lub ’*’ lub ’/’). Ponadto program powinien zawierać zabezpieczenie dla dzielenia 
przez 0; odpowiedni warunek przy którym pojawi się komunikat ńie mozna dzielic przez 0!".*/

/*#include <iostream>
using namespace std;
int main() {
	double a;
	double b;
	char znak; //zmienna przechowujaca znak dzialania
	cout << "Wprowadz dwie liczby zmiennoprzecinkowe" << endl;
	cin >> a >> b;
	cout << "Wprowadz znak dzialania (+, -, *, /): " << endl;
	cin >> znak;

	if (znak == '+') {
		cout << "Wynik dodawania: " << a + b << endl;
	}
	else if (znak == '-') {
		cout << "Wynik odejmowania: " << a - b << endl;
	}
	else if (znak == '*') {
		cout << "Wynik mnozenia: " << a * b << endl;
	}
	else if (znak == '/') {
		if (b != 0) {                                     //zafnieżdżona funkcja if sprawdzająca czy b jest różne od 0. PO TO SĄ TE ZAGNIEŻDŻONE!!!
			cout << "Wynik dzielenia: " << a / b << endl;
		}
		else {
			cout << "Nie mozna dzielic przez 0!" << endl;
		}
	}
} */

/* Zad 5. Przetestuj poniższy kod (kod 6 dostępny w materiałach na stronie) i spróbuj napisać własną pętlę
nieskończoną while(). Zwróć uwagę, że pętla while wymaga podania warunku, niech ten warunek będzie zawsze
prawdziwy.*/

/*#include <iostream>
using namespace std;
int main() {
	for (int i = 0; ; i++) {
		cout << i;
	}
} */

/* Pętla nieskończona while*/

/*#include <iostream>
using namespace std;
int main() {
	int i = 0;
	while (1) {
		cout << i;
		i++;
	}
} */

/*Zad 6. Wykorzystaj prosty kalkulator napisany w Zad 4. i zmień go tak aby wykonywał się w nieskończonej pętli.
Niech użytkownik zdecyduje kiedy zakończyć działanie programu. Program poza zapytaniem jakie działanie
wykonać, powinien także zapytać czy zakończyć swoje działanie. Aby zakończyć działanie programu wykorzystaj
funkcję return.*/

/*#include <iostream>
using namespace std;

int main() {
	while (true) { // nieskończona pętla 
		double a, b;
		char znak;
		char zakoncz; // zmienna do odpowiedzi czy zakończyć 

		cout << "Wprowadz dwie liczby zmiennoprzecinkowe: ";
		cin >> a >> b;

		cout << "Wprowadz znak dzialania (+, -, *, /): ";
		cin >> znak;

		if (znak == '+') {
			cout << "Wynik dodawania: " << a + b << endl;
		}
		else if (znak == '-') {
			cout << "Wynik odejmowania: " << a - b << endl;
		}
		else if (znak == '*') {
			cout << "Wynik mnozenia: " << a * b << endl;
		}
		else if (znak == '/') {
			if (b != 0) {
				cout << "Wynik dzielenia: " << a / b << endl;
			}
			else {
				cout << "Nie mozna dzielic przez 0!" << endl;
			}
		}
		else {
			cout << "Nieznany znak dzialania!" << endl;
		}

		cout << "Czy chcesz zakonczyc program? (t = tak, n = nie): ";
		cin >> zakoncz;

		if (zakoncz == 't' || zakoncz == 'T') {
			cout << "Koniec programu. Do widzenia!" << endl;
			return 0;  // zakończenie programu gdy użytkownik wybierze tak
		}

	}

} */

/*Zad 7. Napisz program, który zawiera pętlę nieskończoną, która wyświetla kolejne liczby całkowite z tym, że
każdą podzielną przez 2 pomija odpowiednią instrukcją. Ponadto, napisz warunek przerwania pętli, jeśli iterator
będzie równy 200.*/

/*#include <iostream     //okej ale nie o to chodziło w zadaniu
using namespace std;
int main() {
	for (int i = 1; i <= 200; i++, i++) { //lub i+=2
		cout << i << endl;
	}
} */

// poprawne rozwiązanie zadania 7

/*#include <iostream>
using namespace std;
int main() {
	int i = 1;
	while (1) {

		if (i == 200) {    // warunek przerwania pętli
			break;        // break przerywa działanie pętli
		}
		if (i%2 == 0) { //sprawdzenie czy liczba jest podzielna przez 2
			i++;      // jeśli tak to zwiększamy iterator i przechodzimy do następnej iteracji
			continue; // instrukcja continue powoduje pominięcie reszty kodu w pętli i przejście do nastepnej iteracji jakby
		}             // "pomiń resztę kodu poniżej i wróć na początek pętli"

		cout << i << endl; // wyświetlanie liczby niepodzielnej przez 2
		i++;
	}
} */

/*Zad 8. Napisz program, który sprawdzi czy wprowadzona przez użytkownika naturalna dodatnia liczba n,
posiada co najmniej jeden dzielnik z przedziału [2,
√
n]. Oznacza to, że jeśli program znajdzie pierwszy dzielnik
z tego przedziału to wyświetla odpowiedni komunikat i przerywa działanie pętli. Aby wykonać pierwiastkowanie
wykorzystaj gotową funkcje sqrt(), z której można skorzystać po dołączeniu biblioteki math.h.*/

















