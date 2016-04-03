#include <iostream>
#include "xorptr.hxx"

int main() {
  int a = 256;
  int b = 255;
  int c = 3;
  int *a_ptr = &a;
  int *b_ptr = &b;
  int *c_ptr = &c;
  auto foo = xorptr<int>(&a, &b);
  std::cout << "&a -> " << &a << " &b -> " << &b << "\n";
  std::cout << "&foo: " << (&foo) << "\n";
  std::cout << "(foo ^ a_ptr): " << (foo ^ a_ptr) << std::endl;
  std::cout << "(foo ^ b_ptr): " << (foo ^ b_ptr) << std::endl;
}







//  a = a ^ b;
//  b = a ^ b;
//  a = a ^ b;
