program:
	gcc -o program objects/main.o objects/bill.o

objects/main.o:
	gcc -c -o objects/main.o source/main.c

objects/libfoo.a:
	ar crv objects/libfoo.a objects/bill.o objects/fred.o

objects/fred.o: source/fred.c
	gcc -o objects/fred.o source/fred.c -c -W -Wall -ansi -pedantic

objects/bill.o: source/bill.c
	gcc -o objects/bill.o source/bill.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf objects/*.o objects/*.a *~ program
