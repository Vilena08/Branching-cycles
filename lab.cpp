/********************
* Author:Saibuu V.M *
* Date 03.10.2025   *
* Option 15         *
********************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
  double l, k, R, phi;
  double p, p1, h, F;

  p = 1.03;   
  p1 = 0.68; 
  h = 0.85; 
  F = 16;    
  
  for (int index = 0; index < 4; index++) {
  cout << "lengths = "<< index << " = ";
  cin >> l;
 
  k = (l / h) - (sqrt(p / p1));

  if (k > 0) {
    R = l * F * p1 * ((sqrt(p / p1)) - 1);
    phi = acos(h / l * sqrt(p / p1));

  } else {
      R = l * F * p1 * ((h / l) * (p / p1) - 1);
      phi = 0;

  }

  cout << fixed << setprecision(3)
       << "l =  " << l 
       << " k = " << k 
       << " R = " << R
       << " phi = " << phi
       << endl;
  }

return 0;
}
    
