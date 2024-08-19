all: programa

programa: main.o circulo.o ponto.o
	gcc -Wall -o programa main.o circulo.o ponto.o

main.o: main.c ponto.h circulo.h
	gcc -Wall -c main.c

circulo.o: circulo.c circulo.h ponto.h
	gcc -Wall -c circulo.c

ponto.o: ponto.c ponto.h
	gcc -Wall -c ponto.c

clean:
	rm -f programa main.o circulo.o ponto.o

.PHONY: all clean
