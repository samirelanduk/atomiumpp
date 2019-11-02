#include <iostream>
#include "./structures.h"
using namespace std;

#define BOOST_TEST_MODULE Simple testcases
#include <boost/test/unit_test.hpp>

int main(int argc, char *argv[]) {
  cout << "Welcome to atomium++" << endl;

  // Make atoms
  Atom* atom1 = new Atom("N", 0, 0, 0, 1, "N", 0.5, 0.6);
  Atom* atom2 = new Atom("C", 1.5, 0, 0, 2, "CA", 0, 0.6);
  Atom* atom3 = new Atom("C", 1.5, 1.5, 0, 3, "CB", 0, 0.6);
  Atom* atom4 = new Atom("C", 3, 0, 0, 4, "C", 0, 0.6);
  Atom* atom5 = new Atom("O", 3, 0, -1.5, 5, "O", 0, 0.6);



  return 0;
}

BOOST_AUTO_TEST_CASE(simple_test) {
  BOOST_CHECK_EQUAL(2+2, 4);
}
