all:
	gcc main.c -o game -std=c99 -I include/ -L lib/ -lraylib -lm
	./game

win:
	gcc main.c -o game.exe -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm