hepsi: derle calistir

derle:
	gcc -I ./include -o ./lib/Kisi.o ./src/Kisi.c
	gcc -I ./include -o bin/Program  ./lib/Kisi.o ./Program.c
	
calistir:
	./bin/Program