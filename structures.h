#include <string>
using namespace std;

class Atom {
  string element;
  float location[3];
  int id;
  string name;
  float charge;
  float bvalue;
  float anisotropy[6];

  public: Atom(string element_, float x_, float y_, float z_, int id_, string name_, float charge_, float bvalue_) {
    element = element_;
    location[0] = x_;
    location[1] = y_;
    location[2] = z_;
    id = id_;
    name = name_;
    charge = charge_;
    bvalue = bvalue_;
  }

  public: string getElement() {
    return element;
  }
};
