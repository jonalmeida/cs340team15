all: dllist

clean:
	rm -f *.o dllist

dllist: dllist.o xorptr.o
	$(CXX) -o $@ -std=c++14 -Wall -Wextra $+
	rm -f *.o

dllist.o: dllist.cxx dllist.hxx
	$(CXX) -o $@ -c -std=c++14 -Wall -Wextra $<

xorptr.o: xorptr.hxx
	$(CXX) -o $@ -c -std=c++14 -Wall -Wextra $<

