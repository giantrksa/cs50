CC = gcc
CFLAGS = -std=c99 -Wall -Werror

all: compare

compare: compare.o cs50.o
	$(CC) $(CFLAGS) -o compare compare.o cs50.o

compare.o: compare.c cs50.h
	$(CC) $(CFLAGS) -c compare.c

cs50.o: cs50.c cs50.h
	$(CC) $(CFLAGS) -c cs50.c

clean:
	rm -f *.o compare
