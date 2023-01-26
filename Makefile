# Steven Mai
CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: main test

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
 # name of output should be consistent

#functions_to_implement.o: functions_to_implement.cpp
#$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# runs for "make clean"
clean:
	rm main test
#include all targets here