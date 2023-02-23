TARGET=build/imnotsleeping.exe

all: $(TARGET)

clean:
	rm -rf build/*

$(TARGET) : build/toggler.o build/main.o
	g++ build/toggler.o build/main.o -o $(TARGET)

build/main.o : src/main.cpp
	g++ -c src/main.cpp -o build/main.o

build/toggler.o : src/toggler.h src/toggler.cpp
	g++ -c src/toggler.cpp -o build/toggler.o
