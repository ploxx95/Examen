
#include <iostream>
using namespace std;
void EntradaDatos(int, int, int);
int D01, D02, D03;
int main()

{
	int arreglo1[] = { 289,76,287,84,27,15,338,368,98,281,393,372,347,51,235,345,351,35,253,43,201,314,75,387,55,42,274,336,261,254 };
	int arreglo2[] = { 10,8,5,3,2,1 };

	EntradaDatos(D01,D02,D03);
	system("pause");
	return 0;
}

void EntradaDatos(int D01a, int D02a, int D03a) {
	cout << "Ingrese 2 digitos" << endl;
	cin >> D01a;
	cout << "Ingrese ultimo digito";
	cin >> D02a;
	cout << "Ingrese penultimo digito";
	cin >> D03a;
}
