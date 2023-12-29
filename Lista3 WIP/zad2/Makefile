all: zad2

zad2: zad2.o f.o rozwiazanie.o
	gcc   zad2.o f.o rozwiazanie.o -o zadanie2 -lm 
zad2.o: zad2.c
	gcc -c zad2.c 
f.o: f.c
	gcc -c f.c 
rozwiazanie.o: rozwiazanie.c
	gcc -c rozwiazanie.c 
clean:
	rm -f zadanie2 *.o *~
