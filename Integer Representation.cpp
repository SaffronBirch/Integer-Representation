// *************************************************
// Saffron Birch
// 100795118
// Lab 01 Activity #2
// September 25, 2020
// *************************************************

/* Output of Program: "The integer representation of CSCI 1060U is
   C=67 S=83 C=67 I=73 (space)=32 1=49 0=48 6=54 0=48 U=85" */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {                // Characters in course code "CSCI 1060U"
  char c1 = 'C';
  char c2 = 'S';
  char c3 = 'I';
  char c4 = '1';
  char c5 = '0';
  char c6 = '6';
  char c7 = 'U';
  char c8 = ' ';

  cout << "The integer representation of CSCI 1060U is "
       << "C = " << (int)c1 << " S = " << (int)c2 << " C = " << (int)c1
       << " I = " << (int)c3 << " (space) = " << (int)c8 << " 1 = " << (int)c4
       << " 0 = " << (int)c5 << " 6 = " << (int)c6 << " 0 = " << (int)c5
       << " U = " << (int)c7 << endl;

  return 0;
}
