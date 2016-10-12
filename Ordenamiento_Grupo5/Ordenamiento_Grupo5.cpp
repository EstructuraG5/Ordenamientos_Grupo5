// Ordenamiento_Grupo5.cpp: archivo de proyecto principal.

#include "stdafx.h"


using namespace std;

struct Nodo{
	int valor;
	struct Nodo* siguiente;
};

typedef struct Nodo* Tlista;
Tlista lista = NULL, lista0 = NULL, lista1 = NULL, lista2 = NULL,
lista3 = NULL, lista4 = NULL, lista5 = NULL, lista6 = NULL,
lista7 = NULL, lista8 = NULL, lista9 = NULL;

//Prototipos

void Menu();
void Insertar(Tlista &lista, int elemento);
void Burbuja(Tlista lista);
void Mostrar(Tlista lista);
void Insercion(Tlista &lista, int elemento);
void Intercambio(Tlista lista);
void Seleccion(Tlista lista);
void intercambiar(Tlista &lista, int pos, int numero);
int tamanio(Tlista lista);
int dato(Tlista lista, int tamanio);
void quickSort(Tlista lista, int primero, int ultimo);
void shellSort(Tlista lista, int tamanio);
int pot(int base, int exp);
void insertarLista0(Tlista &lista0);
void insertarLista1(Tlista &lista1);
void insertarLista2(Tlista &lista2);
void insertarLista3(Tlista &lista3);
void insertarLista4(Tlista &lista4);
void insertarLista5(Tlista &lista5);
void insertarLista6(Tlista &lista6);
void insertarLista7(Tlista &lista7);
void insertarLista8(Tlista &lista8);
void insertarLista9(Tlista &lista9);
void Radix(Tlista &lista);
void llenar(Tlista &lista, Tlista listaNum);
void insertar(Tlista &lista);
void partir_lista(Tlista cab, Tlista *prim, Tlista *fin);
Tlista listando(Tlista a, Tlista b);
void mergeSort(Tlista *lista);
//Main principal
int main(){
	Menu();
	return 0;
}

//Moodulos
void Menu(){
	int opc = 0, opc1 = 0, elemento;
	do{
		cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
		cout << "\t\t\t\tบ   Menu Ordenamiento        บ" << endl;
		cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
		cout << "\t\t\t\tบ 1.Ordenamiento burbujar    บ" << endl;
		cout << "\t\t\t\tบ 2.Ordenamiento insercion   บ" << endl;
		cout << "\t\t\t\tบ 3.Ordenamiento intercambio บ" << endl;
		cout << "\t\t\t\tบ 4.Ordenamiento seleccion   บ" << endl;
		cout << "\t\t\t\tบ 5.Ordenamiento quick sort  บ" << endl;
		cout << "\t\t\t\tบ 6.Ordenamiento shell sort  บ" << endl;
		cout << "\t\t\t\tบ 7.Ordenamiento radix       บ" << endl;
		cout << "\t\t\t\tบ 8.Ordenamiento merger sort บ" << endl;
		cout << "\t\t\t\tบ 9.Salir                    บ" << endl;
		cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
		cout << "\t\t\t\tIngrese una opcion : ";
		cin >> opc;
		system("cls");
		switch (opc){
		case 1:	do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO BURBUJA     บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por burbuja      บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2: Burbuja(lista);
				break;
			case 3:	cout << "\t\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Burbuja" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 2:do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO INSERCION    บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por insercion     บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insercion(lista, elemento);
				cout << endl;
				break;
			case 2: cout << "\t\t\t\tHa salido del Ordenamiento de Insercion" << endl;
				system("pause>NULL");

				break;
			default:cout << "\t\t\t\tOpcion incorrecta" << endl;
				break;

			}
			system("cls");
		} while (opc1 != 2);
			break;
		case 3:		do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO INTERCAMBIO บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por intercambio  บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2: Intercambio(lista);
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Inercambio" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 4:		do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO SELECCION   บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por seleccion    บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2: Seleccion(lista);
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Seleccion" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 5:		do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO QUICK SORT  บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por quick sort   บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2: quickSort(lista, 1, tamanio(lista));
				cout << "ELEMENTOS ORDENADOS !!!" << endl;
				system("PAUSE");
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Quick sort" << endl;
				system("PAUSE");
				system("CLS");
				Menu(); break;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 6:		do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO SHELL SORT  บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por shell sort   บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2: shellSort(lista, tamanio(lista));
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Shell sort" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 7:		do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO RADIX       บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar por radix        บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2:  Radix(lista);
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento de Radix" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 8:	do{
			cout << "\t\t\t\tษออออออออออออออออออออออออออออป" << endl;
			cout << "\t\t\t\tบ   ORDENAMIENTO MERGESORT   บ" << endl;
			cout << "\t\t\t\tฬออออออออออออออออออออออออออออน" << endl;
			cout << "\t\t\t\tบ 1.Insertar elementos       บ" << endl;
			cout << "\t\t\t\tบ 2.Ordenar                  บ" << endl;
			cout << "\t\t\t\tบ 3.Mostrar elemento         บ" << endl;
			cout << "\t\t\t\tบ 4.Salir                    บ" << endl;
			cout << "\t\t\t\tศออออออออออออออออออออออออออออผ" << endl;
			cout << "\t\t\t\tIngrese una opcion : ";
			cin >> opc1;
			switch (opc1){
			case 1:	cout << "\t\t\t\tIngrese elementos : ";
				cin >> elemento;
				Insertar(lista, elemento);
				break;
			case 2:cout << "ELEMENTOS ORDENADOS !!!" << endl;
				system("PAUSE");
				system("cls");
				mergeSort(&lista);
				break;
			case 3:	cout << "\t\t\t\t";
				Mostrar(lista);
				cout << endl;
				system("pause");
				break;
			case 4: cout << "Has salido del ordenamiento MergeSort" << endl;
			default: cout << "Opcion incorrecta" << endl;
				break;
			}
			system("cls");
		} while (opc1 != 4);
			break;
		case 9:	cout << "\t\t\t\tHas salido del programa" << endl;
			system("pause>NULL");
			system("EXIT");
			break;
		default:cout << "\t\t\t\tOpcion incorrecta " << endl;
			system("pause>NULL");
			break;
		}
	} while (opc != 9);
}

void Insertar(Tlista &lista, int elemento){
	Tlista nuevo;
	nuevo = new(struct Nodo);
	nuevo->valor = elemento;
	nuevo->siguiente = NULL;
	if (lista == NULL)
		lista = nuevo;
	else{
		Tlista temp = lista;
		while (temp->siguiente != NULL)
			temp = temp->siguiente;

		temp->siguiente = nuevo;
	}
	cout << "DATO REGISTRADO !!!" << endl;
	system("PAUSE");
}
void Burbuja(Tlista lista){
	Tlista temp = lista;
	int num;
	bool interruptor = true;
	do{
		if (temp->siguiente == NULL){
			temp = lista;
			interruptor = false;
		}
		if (temp->valor>temp->siguiente->valor){
			num = temp->valor;
			temp->valor = temp->siguiente->valor;
			temp->siguiente->valor = num;
			interruptor = true;
		}
		temp = temp->siguiente;
	} while (interruptor || temp->siguiente != NULL);
	cout << "ELEMENTOS ORDENADOS !!!" << endl;
	system("PAUSE");
}
void Insercion(Tlista &lista, int elem){
	int num;
	Tlista nuevo, inicio = lista;
	nuevo = new(struct Nodo);
	nuevo->valor = elem;
	nuevo->siguiente = NULL;

	if (lista == NULL)
		lista = nuevo;
	else{
		Tlista aux = lista, fin = NULL;
		while (aux->siguiente != NULL)
			aux = aux->siguiente;
		aux->siguiente = nuevo;
		fin = nuevo;
		while (inicio->siguiente != NULL){
			if (fin->valor<inicio->valor){
				num = fin->valor;
				fin->valor = inicio->valor;
				inicio->valor = num;
			}
			inicio = inicio->siguiente;
		}
	}
	cout << "\t\t\t\t\tLista ordenada" << endl;
	cout << "\t\t\t\t\t";
	Mostrar(lista);
	system("pause>NULL");
}
void Intercambio(Tlista lista){
	Tlista inicio = lista, recorrer = lista;
	int num;
	while (inicio->siguiente != NULL){
		recorrer = inicio;
		while (recorrer->siguiente != NULL){
			recorrer = recorrer->siguiente;
			if (inicio->valor>recorrer->valor){
				num = inicio->valor;
				inicio->valor = recorrer->valor;
				recorrer->valor = num;
			}
		}
		inicio = inicio->siguiente;
	}
	cout << "ELEMENTOS ORDENADOS !!!" << endl;
	system("PAUSE");
}

void Seleccion(Tlista lista){
	bool interruptor = false;
	int min;
	Tlista q = lista, p = lista, aux;
	aux = new(struct Nodo);
	aux = NULL;
	do {
		interruptor = false;
		min = q->valor;
		p = q->siguiente;
		do {
			if (min > p->valor) {
				interruptor = true;
				aux = p;
				min = aux->valor;
			}
			p = p->siguiente;
		} while (p != NULL);
		if (interruptor) {
			aux->valor = q->valor;
			q->valor = min;
		}
		q = q->siguiente;
	} while (q->siguiente != NULL);
	cout << "ELEMENTOS ORDENADOS !!!" << endl;
	system("PAUSE");
}

int tamanio(Tlista lista){
	int c = 1;
	while (lista->siguiente != NULL){
		lista = lista->siguiente;
		c++;
	}
	return c;
}
int dato(Tlista lista, int tamanio){
	int c = 1;
	while (c != tamanio){
		lista = lista->siguiente;
		c++;
	}
	return lista->valor;
}
void intercambiar(Tlista &lista, int pos, int numero){
	Tlista aux = lista;
	int c = 1;
	while (c != pos){
		aux = aux->siguiente;
		c++;
	}
	aux->valor = numero;
}
void quickSort(Tlista lista, int primero, int ultimo){
	int i, j, central, pivote;
	central = (primero + ultimo) / 2;
	pivote = dato(lista, central);
	i = primero;
	j = ultimo;
	do{
		while (dato(lista, i)<pivote)
			i++;
		while (dato(lista, j)>pivote)
			j--;
		if (i <= j){
			int aux;
			aux = dato(lista, i);
			intercambiar(lista, i, dato(lista, j));
			intercambiar(lista, j, aux);
			i++;
			j--;
		}
	} while (i <= j);

	if (primero<j)
		quickSort(lista, primero, j);
	if (i<ultimo)
		quickSort(lista, i, ultimo);
}
void shellSort(Tlista lista, int tamanio){
	int salto, i, j, k;
	salto = tamanio / 2;
	while (salto>0){
		for (i = salto + 1; i <= tamanio; i++){
			j = i - salto;
			while (j >= 0){
				k = j + salto;
				if (dato(lista, j) <= dato(lista, k))
					j = -1;
				else{
					int aux = dato(lista, j);
					intercambiar(lista, j, dato(lista, k));
					intercambiar(lista, k, aux);
					j = j - salto;
				}
			}
		}
		salto = salto / 2;
	}
}

void insertarLista0(Tlista &lista0, int num) {
	Tlista p = lista0;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista0 == NULL) {
		lista0 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista1(Tlista &lista1, int num) {
	Tlista p = lista1;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista1 == NULL) {
		lista1 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista2(Tlista &lista2, int num) {
	Tlista p = lista2;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista2 == NULL) {
		lista2 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista3(Tlista &lista3, int num) {
	Tlista p = lista3;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista3 == NULL) {
		lista3 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista4(Tlista &lista4, int num) {
	Tlista p = lista4;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista4 == NULL) {
		lista4 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista5(Tlista &lista5, int num) {
	Tlista p = lista5;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista5 == NULL) {
		lista5 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista6(Tlista &lista6, int num) {
	Tlista p = lista6;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista6 == NULL) {
		lista6 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista7(Tlista &lista7, int num) {
	Tlista p = lista7;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista7 == NULL) {
		lista7 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista8(Tlista &lista8, int num) {
	Tlista p = lista8;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista8 == NULL) {
		lista8 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

void insertarLista9(Tlista &lista9, int num) {
	Tlista p = lista9;
	Tlista nuevo = new(struct Nodo);
	nuevo->valor = num;
	nuevo->siguiente = NULL;
	if (lista9 == NULL) {
		lista9 = nuevo;
		nuevo->siguiente = NULL;
	}
	else {
		while (p->siguiente != NULL)
			p = p->siguiente;
		p->siguiente = nuevo;
	}
}

int pot(int base, int exp) {
	int resp = 1, i;
	if (exp == 0)
		return 1;
	else {
		for (i = 1; i <= exp; i++)
			resp = 10 * resp;
		return resp;
	}

}

void Radix(Tlista &lista) {
	Tlista p = lista;
	bool seguir = false;
	int r, n = 1;
	while (p != NULL || seguir == true) {
		seguir = false;
		p = lista;
		while (p != NULL) {
			r = (p->valor%pot(10, n)) / pot(10, n - 1);
			if (r != 0)
				seguir = true;
			switch (r) {
			case 0: insertarLista0(lista0, p->valor); break;
			case 1: insertarLista1(lista1, p->valor); break;
			case 2: insertarLista2(lista2, p->valor); break;
			case 3: insertarLista3(lista3, p->valor); break;
			case 4: insertarLista4(lista4, p->valor); break;
			case 5: insertarLista5(lista5, p->valor); break;
			case 6: insertarLista6(lista6, p->valor); break;
			case 7: insertarLista7(lista7, p->valor); break;
			case 8: insertarLista8(lista8, p->valor); break;
			case 9: insertarLista9(lista9, p->valor); break;
			}
			p = p->siguiente;
		}
		insertar(lista);
		n = n + 1;
	}
	cout << "ELEMENTOS ORDENADOS !!!" << endl;
	system("PAUSE");
	system("cls");
}

void llenar(Tlista &lista, Tlista listaNum) {
	Tlista aux = listaNum;
	while (aux != NULL) {
		Tlista p = lista;
		Tlista nuevo = new(struct Nodo);
		nuevo->valor = aux->valor;
		nuevo->siguiente = NULL;
		if (lista == NULL) {
			lista = nuevo;
			nuevo->siguiente = NULL;
		}
		else {
			while (p->siguiente != NULL)
				p = p->siguiente;
			p->siguiente = nuevo;
		}
		aux = aux->siguiente;
	}
}

void insertar(Tlista &lista) {
	lista = NULL;
	if (lista0 != NULL) {
		llenar(lista, lista0);
		lista0 = NULL;
	}
	if (lista1 != NULL) {
		llenar(lista, lista1);
		lista1 = NULL;
	}
	if (lista2 != NULL) {
		llenar(lista, lista2);
		lista2 = NULL;
	}
	if (lista3 != NULL) {
		llenar(lista, lista3);
		lista3 = NULL;
	}
	if (lista4 != NULL) {
		llenar(lista, lista4);
		lista4 = NULL;
	}
	if (lista5 != NULL) {
		llenar(lista, lista5);
		lista5 = NULL;
	}
	if (lista6 != NULL) {
		llenar(lista, lista6);
		lista6 = NULL;
	}
	if (lista7 != NULL) {
		llenar(lista, lista7);
		lista7 = NULL;
	}
	if (lista8 != NULL) {
		llenar(lista, lista8);
		lista8 = NULL;
	}
	if (lista9 != NULL) {
		llenar(lista, lista9);
		lista9 = NULL;
	}
}

void Mostrar(Tlista lista){
	while (lista != NULL){
		cout << lista->valor << " ";
		lista = lista->siguiente;
	}
}

void partir_lista(Tlista cab, Tlista *prim, Tlista *fin){
	Tlista aux1;
	Tlista aux2;
	if (cab == NULL || cab->siguiente == NULL){
		*prim = cab;
		*fin = NULL;
	}
	else{
		aux2 = cab;
		aux1 = cab->siguiente;
		while (aux1 != NULL){
			aux1 = aux1->siguiente;
			if (aux1 != NULL){
				aux2 = aux2->siguiente;
				aux1 = aux1->siguiente;
			}
		}
		*prim = cab;
		*fin = aux2->siguiente;
		aux2->siguiente = NULL;
		Mostrar(*prim);
		Mostrar(*fin);
	}
}

Tlista listando(Tlista a, Tlista b){
	Tlista p = NULL;
	if (a == NULL){
		return b;
	}
	else if (b == NULL){
		return a;
	}
	if (a->valor <= b->valor){
		p = a;
		p->siguiente = listando(a->siguiente, b);
	}
	else{
		p = b;
		p->siguiente = listando(a, b->siguiente);
	}
	return p;
}

void mergeSort(Tlista *lista){
	Tlista cab = *lista;
	Tlista a = NULL;
	Tlista b = NULL;
	if (cab == NULL || cab->siguiente == NULL){
		return;
	}
	partir_lista(cab, &a, &b);
	mergeSort(&a);
	mergeSort(&b);
	*lista = listando(a, b);
}

