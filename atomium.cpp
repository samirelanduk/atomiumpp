#include <iostream>
#include "./structures.h"
using namespace std;

int main(int argc, char *argv[]) {
  cout << "Welcome to atomium++" << endl;

  // Make atom
  Atom* atom = new Atom("N", 0, 0, 0, 1, "N", 0.5, 0.6);

  return 0;
}
