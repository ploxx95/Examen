
#include <iostream>
using namespace std;

//INICIALIZO METODOS
void EntradaDatos();
void busqueda();
void OrdenBurbuja();
void vuelto();

int arreglo1[50] = { 289,76,287,84,27,15,338,368,98,281,393,372,347,51,235,345,351,35,253,43,201,314,75,387,55,42,274,336,261,254 };
int arreglo2[] = { 10,8,5,3,2,1 };

int D01, D02, D03;
int aux;

//---------------------------------------------------------------------------->
int main()

{

	EntradaDatos();
	OrdenBurbuja();
	busqueda();
	vuelto();

	system("pause");
	return 0;

} 
//---------------------------------------------------------------------------->     METODOSSS    <--------------------------------------------------------------------------------->
void EntradaDatos() {
	
	cout << "Ingrese 2 digitos" << endl;
	cin >> D01;
	cout << "Ingrese ultimo digito";
	cin >> D02;
	cout << "Ingrese penultimo digito";
	cin >> D03;
}

void OrdenBurbuja() {
	for (int i = 10; i < 20; i++) {
		for (int j = 10; j < 20; j++) {
			if (arreglo1[j] > arreglo1[j + 1]) {
				aux = arreglo1[j];
				arreglo1[j] = arreglo1[j + 1];
				arreglo1[j + 1] = aux;


			}
		}
	}

	cout << "Orden Ascendente:  " << endl;
	for (int i = 10; i < 20; i++) {
		cout << arreglo1[i] << endl;
	}
}

void busqueda() {
	char bandera = 'f';
	int i = 0;

	while ((bandera == 'f') && (i < 10)) {
		if (arreglo1[i] == D01) {
			bandera = 'v';
		}
		i++;
	}
	if (bandera == 'v') {
		cout << "EL NUMERO "<<D01<<"  SE ENCONTRO EN LA POSICION "<< i << endl;

	}
	else if (bandera == 'f') {
		cout << "EL NUMERO"<<D01<<" NO SE A ENCONTRADO " << endl;
	}

}

void vuelto() {
	int i = 0;
	int residuo = 0, divi = 0, result = 0;
	while ((D01) && (i < 6)) {

		residuo = D01 % arreglo2[i];
		divi = D01 / arreglo2[i];
		result += divi;
		D01 = residuo;



		cout << "MONEDAS " << arreglo2[i] << "veces :" << divi << endl;
		

		i++;
	}
	cout <<"se utilizaran "<< result<<" MONEDAS" << endl;
	


}