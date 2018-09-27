#include "SecDin.h"

unsigned Longitud(const SecDin& s){
	return s.n;
}

int Get(const SecDin& s, unsigned i){
	return s.a.at(i);
}

void Set(const SecDin& s, unsigned i, int x){
	s.a.at(i) = x;
}

void Insertar(SecDin& s, unsigned i, int x){
	s.a.at(i) = x;
	for (int c = s.a.at(n-1); s.a.at(i) < c; c--)
		 
}