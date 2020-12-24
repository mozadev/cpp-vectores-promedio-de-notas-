#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;

void ingresadatos(int*n, float*notas)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "ingresa la nota " << i + 1 << ":";
		cin >> notas[i];
	}
}

void salidadatos(int*n,float*notas)
{
	for (int i = 0; i < *n; i++)
	{
		cout << "la nota " << i + 1 << "es: " << notas[i] << endl;
		cin >> notas[i];
	}
}

void promedio(int*n, float*notas)
{
	int posicion;
	float suma = 0, prom, menor = notas[0];
	for (int i = 1; i < *n; i++)
		if (menor>notas[i])
		{
			menor = notas[i];
			posicion = i;
		}
	for (int i = 0; i < *n; i++)
		if (posicion != i)
			suma = suma + notas[i];
	prom = suma / (*n - 1);
	cout << "el promedio sin el menor es:" << prom << endl;
	cout << "el menor valor es" << menor << endl;
	cout << "el menor valor se encuentra en la posicion" << posicion << endl;

}


int main()
{

	int n = 6;
	float *notas;
	notas = new float[n];
	ingresadatos(&n, notas);
	promedio(&n, notas);
	delete notas;
	_getch();
