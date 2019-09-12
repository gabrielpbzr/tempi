CC=gcc
CFLAGS=-o bin/tempi -Wall
FILES=*.c

all: clean
	mkdir bin
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -rf bin/
	rm -f *.o

