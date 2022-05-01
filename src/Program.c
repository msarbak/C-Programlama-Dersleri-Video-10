#include "Kisi.h"

int main() {
	Kisi Mehmet = KisiOlustur("Mehmet",30,75,195);
	yemekye(Mehmet,2000);
	toString(Mehmet);
	KisiYoket(Mehmet);
	return 0;
}
