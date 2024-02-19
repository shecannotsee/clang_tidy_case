//
// Created by shecannotsee on 24-2-19.
//

#include "clang_tidy_test.h"

#include <iostream>

namespace {
void init(int print_value) {
  switch (static_cast<char>(print_value)) {
    case 1:
      print_value += 10;
    case 2:
      print_value += 10;
    default:
      print_value += 10;
  }

  std::cout << print_value << "init\n";
}

}  // namespace

clang_tidy_test::clang_tidy_test() {
  init(1);
  init(2);
  init(3);
}
