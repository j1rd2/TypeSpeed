CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
SRC = main.cpp src/Menu.cpp src/Game.cpp
TARGET = typespeed

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all clean