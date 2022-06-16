
build: itoa.o

itoa.o: itoa.c itoa.h
	$(CC) -c -o itoa.o itoa.c

clean:
	rm -f itoa.o

all: build clean

