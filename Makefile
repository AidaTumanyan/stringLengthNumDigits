run: task2
	./task2

task2: main.o string.o 
	g++  main.o string.o -o  task2

main.o: main.cpp string.h
	g++ -c main.cpp

string.o: string.cpp string.h
	g++ -c string.cpp

clean:
	rm *.o task2
