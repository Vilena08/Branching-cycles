/********************
* Author:Saibuu V.M *
* Date 09.10.2025   *
* Option 15         *
********************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int LenghtCount;
  cout << "enter the number of lengths = ";
  cin >> LenghtCount;
  
  double lengths, k, R, phi;
  double p, p1, h, F;

  p = 1.03;   
  p1 = 0.68; 
  h = 0.85; 
  F = 16;    
  
  for (int lenghtIndex = 0; lenghtIndex <LenghtCount ; lenghtIndex++) {
    cout << "lengths = "<< lenghtIndex << " = ";
    cin >>lengths;
 
  k = (lengths / h) - (sqrt(p / p1));

  if (k > 0) {
    R = lengths * F * p1 * ((sqrt(p / p1)) - 1.0);
    phi = acos(h / lengths * sqrt(p / p1));

  } else {
    R = lengths * F * p1 * ((h / lengths) * (p / p1) - 1.0);
    phi = 0;

  }

  const int outputprecision = 3;
  
  cout << fixed << setprecision(outputprecision)
       << "lengths =  " << lengths
       << " k = " << k 
       << " R = " << R
       << " phi = " << phi
       << endl;
  }

return 0;
}
    

