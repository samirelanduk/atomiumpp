#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

  // What is the file to open?
  string fileName;
  if (argc < 2) {
    cout << "Where is the pdb?" << endl;
    cin >> fileName;
  } else {
    fileName = argv[1];
  }

  // Get file contents
  vector<string> pdbLines(0);
  string pdbLine;
  ifstream infile;
  infile.open(fileName);
  if (infile.good()) {
    while(!infile.eof()) {
      getline(infile, pdbLine);
      pdbLines.push_back(pdbLine);
    }
  } else {
    cout << "Could not find that file" << endl;
  }
  infile.close();

  return 0;
}
