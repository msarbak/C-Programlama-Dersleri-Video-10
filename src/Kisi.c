#include "Kisi.h"

Kisi KisiOlustur(char isim[], int yas, double kilo, double boy){
	Kisi this;
	this = (Kisi)malloc(sizeof(struct KISI));
	this->isim = isim;
	this->yas= yas;
	this->kilo = kilo;
	this->boy = boy;
	return this;
}

void yasIlerle(const Kisi this, int yil){
	this->yil += yil;
	if(this->yas<25) this->boy++;
}
void yemekYe(const Kisi this, double){
	this->kilo += kalori/1000;
}
void toString(const Kisi this){
	printf("%s %d %lf %lf", this->isim , this->yas , this->kilo , this->boy);
}
void kisiYoket(const Kisi this){
	if(this == NULL) return;
	free(this);
}
