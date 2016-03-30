#include <iostream>
#include "xorptr.hxx"

int main() {
  int a = 256;
  int b = 255;
  int c = 3;
  int *c_ptr = &c;
  auto foo = xorptr<int>(&a, &b);
  std::cout << &a << " " << &b << " ";
  std::cout << (foo ^ c_ptr) << std::endl;
}







//  a = a ^ b;
//  b = a ^ b;
//  a = a ^ b;
