#include <iostream>

using namespace std;

unsigned int addMofizWay(unsigned int a, unsigned int b) {
  unsigned int sum = 0, carry = 0;
  for (int i = 0; i < 32; ++i) {
    // XOR current bits
    unsigned int bitA = (a >> i) & 1;
    unsigned int bitB = (b >> i) & 1;
    sum |= (bitA ^ bitB) << i;
    carry = 0;
    if (bitA && bitB) {
      carry = 1 << (i + 1);
    }
  }
  return sum;
}

int main() {
  unsigned int num1, num2;

  while (cin >> num1 >> num2) {
    unsigned int result = addMofizWay(num1, num2);
    cout << result << endl;
  }

  return 0;
}
