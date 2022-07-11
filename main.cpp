#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinToss();

int main() {
 srand(time(0)); //****
  // Ask times
  int times;
  cout << "How many times: ";
  cin >> times;
  for (int i = 0; i < times; i++){
  coinToss();
    }

  return 0;
}

// Function
void coinToss() {
  
  int num = (rand() % 2) + 1;
  
  string face = "head";
  if (num == 2) face = "tail";
  
  cout << face << endl;
}
