CC := gcc
SRC := $(wildcard *.c)
CFLAGS := -Wall -Wextra -Og
LIBS := -lm -lpthread

disc: $(SRC)
	@$(CC) $(SRC) $(CFLAGS) $(LIBS) -o disc

clean:
	@rm disc

