CC :=	g++
LIBS := -lsfml-graphics -lsfml-window -lsfml-system

DEBUG_BUILD := -g
LANG_STD := -std=c++20
FLAGS := -Wall  $(DEBUG_BUILD) $(LANG_STD)  #-Wfatal-errors

APP :=	billiar.app


all:
	$(CC) $(FLAGS) src/*.cpp -o $(APP) $(LIBS)

run:	all
	./billiar.app

clean:
	rm $(APP)