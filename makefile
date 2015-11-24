CC=gcc
CFLAGS=-I. -Wall
DEPS = filtres.h

SRCS = filtres.o testf.o
OBJS = $(SRCS:.c=.o)

all: testf

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

testf: $(OBJS)
	gcc -o $@ $^ $(CFLAGS)

clean:
	-${RM} ${TARGET_LIB} ${OBJS} $(SRCS:.c=.d)
