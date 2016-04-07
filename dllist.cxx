#include <iostream>
#include "xorptr.hxx"
#include "dllist.hxx"
#include <algorithm>
#include <iterator>
#include <limits>
#include <initializer_list>
#include <cstdint>
#include <cstddef>
#include <iomanip>


void printdllist(dllist<int> a_list)
{
for (auto i : a_list)
  std::cout << i << ' ';
std::cout << '\n';
}


int main(){

// int i{ 55 }, j{ 30 };
// int const* jp{ &j };
// int const* ip{ &i };
// xorptr<int> test{ ip, jp };

// int a{ 10 }, b{ 20 };
// int *ap{ &a };
// int *bp{ &b };
// xorptr<int> test2{ ap,bp };

// std::cout << *(test ^ jp) << std::endl;
// std::cout << *(test2 ^ bp) << std::endl;

  dllist<int> tester(std::size_t(5), int(1));
  dllist<int> tester2( { 1, -5, 4 } );
  dllist<int> tester3( tester2.begin(), tester2.end() );
  dllist<int> tester4(tester3);
  dllist<int> l;
  l.push_back(10);
  tester.push_front(2);
  tester.push_back(2);
  tester.pop_back();

	printdllist(tester);
	printdllist(tester2);
	printdllist(tester3);
	printdllist(tester4);



	dllist<int> tester7 = tester4;
	dllist<int> tester9;
	tester9.assign({1,2,4,5,6});
	printdllist(tester7);
	printdllist(tester9);

	  dllist<int> tester10;
	  dllist<int> tester11;
	  //tester10.assign(std::size_t(5), int(5));
	  tester11.assign(tester7.begin(), tester7.end());
//printdllist(tester10);
	printdllist(tester11);
tester3.clear();


  return 0;
}

