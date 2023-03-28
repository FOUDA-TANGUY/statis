CC=g++
CFLAGS=-Wall -O --std=c++17
LDFLAGS=-L lib
EXEC=programme

app: objects
	$(CC) $^ -o bin/$(EXEC) $(LDFLAGS)

objects:liste.o main.o 

%.o: src/%.cpp
	$(CC) -o obj/$@ -c $< $(CFLAGS) -I include 

build: main.o
	$(CC) obj/*.o -o bin/$(EXEC) $(LDFLAGS)

clean:
	rm -f obj/*.o core

clear: clean
	rm -f bin/$(EXEC)
