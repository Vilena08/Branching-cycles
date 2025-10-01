/********************
* Author:Saibuu V.M *
* Date 25.09.2025   *
* Option 15         *
********************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
  double l, K, R, phi, p, p1, h, F;
    
  p = 1.03;   
  p1 = 0.68; 
  h = 0.85; 
  F = 16;                
    
  double lengths[] = {0.9, 1.0, 1.5, 2.0};
  int beam_lengths = sizeof(lengths) / sizeof(lengths[0]);

  for (int i = 0; i < beam_lengths; ++i) {
    double l = lengths[i];
      
  double k = (l / h) - (sqrt(p / p1));
  
  if (k > 0) {
      R = l * F * p1 * ((sqrt(p / p1)) - 1)*100;
      phi = acos(h / l * sqrt(p / p1));
      
  } else {
      R = l * F * p1 * ((h / l) * (p / p1) - 1)*100;
      phi = 0;
      
  }
  
  cout << fixed << setprecision(3)
  << "l =  " << l 
  << " k = " << k 
  << " R = " << R
  << " φ = " << phi
  << endl;
      
  }
  
  return 0;
}
