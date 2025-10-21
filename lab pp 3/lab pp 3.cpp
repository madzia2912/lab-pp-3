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

#include <iostream>
using namespace std;
int main() {
	double a;
	double b;
	char znak;   // zmienna przechowująca znak działania
	char decyzja; // zmienna przechowująca decyzję użytkownika o zakończeniu programu
	while (1) {  // Pętla nieskończona
		cout << "Wprowadz dwie liczby zmiennoprzecinkowe" << endl;
		cin >> a >> b:
		cout << "Wprowadz znak dzialania (+, -, *, /): " << endl;
		cin >> znak;
		if (znak == '+') {
			cout(<< "Wynik dodawania: " << a + b << endl;)
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
	} 
 















