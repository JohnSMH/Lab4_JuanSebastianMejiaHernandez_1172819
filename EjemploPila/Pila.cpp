#include "Pila.h"



Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

int Pila::Numerodeelementos() {
	return NElementos;
}

void Pila::Apilar(Carta valor) {
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->Valor = valor;// asignar la carta al nodo
	if (Head == nullptr)
	{
		Head = NodoNuevo;
	}
	else
	{
		Nodo* Aux = new Nodo();
		Aux = Head; //Guardamos el que era la cima anterior, que sera el siguiente
		Head = NodoNuevo; // la cima es el nuevo nodo
		Head->Siguiente = Aux; //Hacemos que auxiliar sea el siguiente nodo
	}
	NElementos ++; // Aumentamos manualmente la cantidad de elementos para llevar control
}
Carta Pila::Desapilar() {
	if (Head == nullptr)
	{
		return *new Carta();
	}
	else
	{
		Carta valor = Head->Valor;
		Head = Head->Siguiente;
		NElementos--;
		return valor;
	}
}
Carta Pila::ObtenerCima() {
	if (Head == nullptr)
	{
		return * new Carta;
	}
	else
	{
		return Head->Valor;
	}
}
