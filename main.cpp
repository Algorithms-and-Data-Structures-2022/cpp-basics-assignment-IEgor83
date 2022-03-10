#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {
  int a = 5;
  int b = 3;
  cout << allocate_arr(a, b);
  return 0;
}
