compile:
	gcc -Wall bcp.c game.c -o game
run: compile
	./game
clean: 
	rm game
