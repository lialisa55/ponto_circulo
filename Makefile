all: programa

programa: main.o circulo.o ponto.o
	gcc -Wall -std=c99 -o programa main.o circulo.o ponto.o

main.o: main.c ponto.h circulo.h
	gcc -Wall -std=c99 -c main.c

circulo.o: circulo.c circulo.h ponto.h
	gcc -Wall -std=c99 -c circulo.c

ponto.o: ponto.c ponto.h
	gcc -Wall -std=c99 -c ponto.c

clean:
	rm -f programa main.o circulo.o ponto.o

.PHONY: all clean
