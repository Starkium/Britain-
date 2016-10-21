CC        = g++
CFLAGS    = -c -Wall -Werror -ansi -pedantic
SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
OBJS      = main.o

all: Britain

Britain: main.o
	$(CC) -g -o Britain main.o $(SFMLFLAGS)

main.o: main.cpp
	$(CC) -c -o main.o main.cpp $(CFLAGS)

clean:
	rm -rf *.o Britain *~ *.out
