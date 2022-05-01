#ifndef KISI_H
#define KISI_H

#include "stdio.h"
#include "stdlib.h"

struct KISI{
	char* isim;
	int yas;
	double boy;
	double kilo;
};

typedef struct KISI* Kisi;

Kisi KisiOlustur(char isim[],int , double, double);
void yasIlerle(const Kisi, int);
void yemekYe(const Kisi, double);
void toString(const Kisi);
void kisiYoket(const Kisi);

#endif
