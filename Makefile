build:
	g++ src/main.cc -o game

run: build
	./game

clean:
	rm game
