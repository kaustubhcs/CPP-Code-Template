#!/bin/bash

# Created Kaustubh Shivdikar -- All Rights Reserved


TARGET = hello.bin
CC = nvcc
#CFLAGS=-Wall -O2 -std=c++0x
CFLAGS=-O2 -std=c++11
LDFLAGS=
ARCH=-arch sm_35
ROOT_DIR=$(PWD)
CODE_DIR=$(ROOT_DIR)/src/code
HEADER_DIR=$(ROOT_DIR)/src/lib
LIB_DIR=$(ROOT_DIR)/src/lib
OBJ_DIR=$(ROOT_DIR)/src/obj

OBJ=$(CODE_DIR)/main.o $(OBJ_DIR)/functions.o $(OBJ_DIR)/debugger.o
OBJ_WITH_TARGET=$(OBJ_DIR)/main.o $(OBJ_DIR)/functions.o $(OBJ_DIR)/debugger.o



all: $(OBJ)
	$(CC) $(ARCH) $(CFLAGS) $(LDFLAGS) -o $(ROOT_DIR)/$(TARGET) $(OBJ_WITH_TARGET)
#	cp $(BIN_DIR)/$(TARGET) $(ROOT_DIR)

$(OBJ_DIR)/%.o: $(LIB_DIR)/%.cu
	$(CC) $(ARCH) -I$(LIB_DIR) $(CFLAGS) -c $<
	mv $(@F) $(OBJ_DIR)

$(CODE_DIR)/%.o: $(CODE_DIR)/%.cu
	$(CC) $(ARCH) -I$(LIB_DIR) $(CFLAGS) -c $<
	mv $(@F) $(OBJ_DIR)




clean:
	printf "\n\e[1;32mCleaning all files\e[0m\n"
	rm -f $(OBJ_DIR)/*.o $(ROOT_DIR)/*.bin

run: clean all
	$(ROOT_DIR)/$(TARGET)

test:
	echo "Test Start"
