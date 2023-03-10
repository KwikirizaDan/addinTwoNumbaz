// Adding two numbers
/*
===========
  ALGORITHM
============
Step 1: Get number by user
Step 2: Get the modulus/remainder of the number
Step 3: sum the remainder of the number
Step 4: Divide the number by 10
Step 5: Repeat the step 2 while number is greater than 0.
*/

#include <iostream>
using namespace std;
int
main ()
{
  int n, sum = 0, m;
  cout << "Enter a number: ";
  cin >> n;
  while (n > 0)
    {
      m = n % 10;
      sum = sum + m;
      n = n / 10;
    }
  cout << "Sum is= " << sum << endl;
  return 0;
}
