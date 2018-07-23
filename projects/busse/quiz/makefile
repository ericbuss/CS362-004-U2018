CFLAGS = -Wall -fpic -coverage -lm -std=c99

default: tests.out

tests.out: testme.c
	echo "Test Results running test me: " >> tests.out
	gcc -o testme testme.c $(CFLAGS)
	testme >> tests.out
	gcov testme.c >> tests.out

clean:
	rm -rf testme
	rm -rf tests.out

