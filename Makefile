test1: stack.o main.o
	gcc stack.o main.o -o test 1
stack.o: stack.h stack.c
	gcc -c -g stack.c
main.o: stack.h main.c
	gcc -c -g main.c

