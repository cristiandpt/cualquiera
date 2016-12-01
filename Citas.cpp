/*
 * Autor: Carlos Andres Delgado
 * Archivo: DiscoDuro.cpp
 * Descripción: Este archivo define la clase discoDuro
 * Fecha: 02 de Octubre de 2016
 * Modificación: 04 de Octubre de 2016
 */
 
#include "Citas.h"
 
Citas::Citas(string dianIn, string descripcionCIn){
	dia = diaIn;
	descripcionC = descripcionCIn;
	
}
Citas::~Citas(){}

string Citas::getdia(){
	return dia;
}

string Citas::getdescripcionC(){
	return descripcionC;
}

void Citas::setdia(string diaIn){
	dia = diaIn;
}

void Citas::setDescripcionC(string descripcionCIn){
	descripcionC = descripcionCIn;
}
}	

