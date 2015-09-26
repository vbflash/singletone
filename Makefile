all : test_output

CC = g++
CFLAGS = -std=c++11 -c

#SINLIB = SingletonTestClass.o

#singlelib.a : $(SINLIB)
#	ar r singlelib.a $(SINLIB)

#SingletonTestClass.o:
#	$(CC) $(CFLAGS) SingletonTestClass.cpp SingletonTestClass.h


test_output :
	$(CC) -std=c++11 -o test_output main.cpp define.h Singleton.hpp
 
clean:
	rm -rf *.o test_output singlelib.a *.gch
