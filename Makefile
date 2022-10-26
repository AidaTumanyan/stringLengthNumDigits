FLAGS = -Werror -Wall -g -fsanitize=address,undefined
		
run: task2
	./task2

task2: main.o string.o
	g++ ${FLAGS} main.o string.o -o task2

main.o: main.cpp string.h
	g++ ${FLAGS} -c main.cpp

string.o: string.cpp string.h
	g++ ${FLAGS} -c string.cpp
clean:
	rm *.o task2
