all: main.o linked_list.o
			gcc -o out main.o linked_list.o
linked_list.o: linked_list.c
			gcc -c linked_list.c
main.o: main.c linked_lists.h
			gcc -c main.c
run:
			./out
clean:
			rm *.exe
			rm *.o
