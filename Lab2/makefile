# Haotai Xiong C00265675
# 12/10/2023
# Licensed under GPLv3

CC = gcc
CFLAGS = -Wall -Wextra
OUTPUT = test
SOURCES = listmain.c
HEADERS = minunit.h DLinkedList.h
OBJECTS = $(SOURCES:.c=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OUTPUT)
