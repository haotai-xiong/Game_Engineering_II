# Haotai Xiong C00265675
# 28/09/2023
# Licensed under GPLv3

CC = gcc
CFLAGS = -Wall -Wextra
OUTPUT = test
SOURCES = stuff.c
HEADERS = minunit.h
OBJECTS = $(SOURCES:.c=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OUTPUT)
