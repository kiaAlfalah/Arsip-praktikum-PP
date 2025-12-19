#include <iostream>
using namespace std;

int main() {
  int a = 2;
  int b = 2;
  int c = a + b;
  
  cout << "Nilai a : " << a << endl;
  cout << "Nilai b : " << b << endl;
  cout << "Nilai c : " << c << endl;
  
  a = a + b; // sama dengan a += b
  
  cout << "NIlai a setelah (a= a + b) : " << a << endl;
  
  return 0;
}
