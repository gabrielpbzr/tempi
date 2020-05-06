CC=gcc
CFLAGS= -Wall -pedantic
OUTPUT=bin/tempi
FILES=*.c

all: clean
	mkdir bin
	$(CC) $(CFLAGS) -o $(OUTPUT) $(FILES)

clean:
	rm -rf bin/
	rm -f *.o

