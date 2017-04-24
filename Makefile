main:main.o compare.o
	gcc main.o compare.o -o main
main.o:main.c
	gcc -c main.c
compare.o:compare.c
	gcc -c compare.c
clean:
	rm main *.o
