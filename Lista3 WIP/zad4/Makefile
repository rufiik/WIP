all: zad4

zad4: zad4.o newagent.o distance.o north.o south.o east.o west.o
	gcc  zad4.o newagent.o distance.o north.o south.o east.o west.o -o  zadanie4 -lm 
newagent.o: newagent.c
	gcc -c newagent.c
zad4.o: zad4.c
	gcc -c zad4.c
distance.o: distance.c
	gcc -c distance.c
north.o: north.c
	gcc -c north.c
south.o: south.c
	gcc -c south.c
east.o: east.c
	gcc -c east.c
west.o: west.c
	gcc -c west.c
clean:
	rm -f zadanie4 *.o *~
