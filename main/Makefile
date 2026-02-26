CC = gcc
CFLAGS = -Wall -Wextra -std=c11

TARGET = calculatrice

OBJS = main.o operations.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c operations.h
	$(CC) $(CFLAGS) -c main.c

operations.o: operations.c operations.h
	$(CC) $(CFLAGS) -c operations.c

clean:
	rm -f $(OBJS) $(TARGET)

fclean: clean

re: fclean all
