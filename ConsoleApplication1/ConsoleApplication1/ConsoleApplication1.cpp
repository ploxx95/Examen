
#include <iostream>
using namespace std;

//INICIALIZO METODOS
void EntradaDatos(int, int, int);
int D01, D02, D03;



//--------------------------
int main()

{
	int arreglo1[50] = { 289,76,287,84,27,15,338,368,98,281,393,372,347,51,235,345,351,35,253,43,201,314,75,387,55,42,274,336,261,254 };
	int arreglo2[] = { 10,8,5,3,2,1 };

	int aux;

	EntradaDatos(D01,D02,D03);

	//metodo burbuja sin metodo
	for (int i = 10; i < 20; i++) {
		for (int j = 10; j < 20; j++) {
			if (arreglo1[j] > arreglo1[j + 1]) {
				aux = arreglo1[j];
				arreglo1[j] = arreglo1[j + 1];
				arreglo1[j + 1] = aux;


			}
		}
	}

	cout << "Orden Ascendente:  "<<endl;
	for (int i = 10; i < 20; i++) {
		cout << arreglo1[i] << endl;
	}
	

	system("pause");
	return 0;

}
//METODOSSS----------------------------------------------
void EntradaDatos(int D01a, int D02a, int D03a) {
	cout << "Ingrese 2 digitos" << endl;
	cin >> D01a;
	cout << "Ingrese ultimo digito";
	cin >> D02a;
	cout << "Ingrese penultimo digito";
	cin >> D03a;
}

