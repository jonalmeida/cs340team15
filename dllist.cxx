#include "dllist.hxx"
#include <initializer_list>
#include <iostream>

int main() {
  std::cout << "hello, world!" << std::endl;
  dllist<int> tester( {1, 2, 3 } );
  //l.push_back(10);
  tester.push_front(2);
  tester.push_back(2);
  tester.pop_back();
  for (auto i : tester){
    std::cout << i << ' ';
  }
}
