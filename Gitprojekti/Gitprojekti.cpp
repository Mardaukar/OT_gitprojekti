#include <iostream>
using namespace std;

int summa(int, int);
int erotus(int, int);
int jako(int, int);
int kerto(int, int);

int main()
{
    int a, b, toiminto;
    cout << "Anna ensimmainen luku: " << endl;
    cin >> a;
    cout << "Anna toinen luku: " << endl;
    cin >> b;
    cout << "Valitse toiminto: " << endl;
    cout << "(1) +" << endl;
    cout << "(2) -" << endl;
    cout << "(3) *" << endl;
    cout << "(4) /" << endl;
    
    cin >> toiminto;

    if (toiminto == 1) { //Markus
        cout << summa(a, b) << endl;
    }
    else if (toiminto == 2) { // Gamze
		cout << erotus(a, b) << endl;
    }
    else if (toiminto == 3) { //Sara
		cout << kerto(a, b) << endl;
    }
    else if (toiminto == 4) { //Hilda
		cout << jako(a, b) << endl;
    }

    system("pause");
}

int summa(int a, int b) {
    return a + b;
}

int erotus(int a, int b) {
	return a - b;
}

int jako(int a, int b) {
	return a / b;
}
  
int kerto(int a, int b) {
	return a * b;
}
