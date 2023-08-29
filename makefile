.PHONY: all clean

LINK_LIBS += -lreadline

all: *.c *.h
	cc -std=c99 -Wall lispy.c $(LINK_LIBS) -o lispy

clean:
	-rm -f *.o
	-rm -f lispy
