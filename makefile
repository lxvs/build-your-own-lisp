.PHONY: all clean

all: *.c *.h
	cc -std=c99 -Wall lispy.c -o lispy

clean:
	-rm -f *.o
	-rm -f lispy
