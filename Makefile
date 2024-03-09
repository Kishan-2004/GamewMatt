.PHONY: run
run: build
	./game

.PHONY: build
build:
	g++ src/main.cc -o game

.PHONY: clean
clean:
	rm game
