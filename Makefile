# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall

# Source and object files
SRC = src/timer_interrupt_example.c
OBJ = $(SRC:src/%.c=build/%.o)

# Output binary
TARGET = build/my_project

# Default target
all: $(TARGET)

# Link the object files to create the final executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files to object files
build/%.o: src/%.c
	@mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f build/*.o build/my_project
