CXXFLAGS:=  -std=c++11 -Wpedantic -Wall -Wextra -Werror -pthread
CXX:= g++
OFILES:= Player.o
TARGETS:= wizards_and_wyverns

all: $(TARGETS)

wizards_and_wyverns: wizards_and_wyverns.o $(OFILES)
	$(CXX) $(CXXFLAGS) -o $@ $^ 

Player.o: Player.cpp Player.h
	$(CXX) $(CXXFLAGS) -c Player.cpp
	
clean: 
	-rm -f *.o $(TARGETS)