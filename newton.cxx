#include <iostream>
#include <complex>

using namespace std;

int main(){

  // Example how to declare a single complex variable:
  complex<double> c,calt;
    int n = 0;

  // d = 1 + 2i 
 // complex<double> d = complex<double>(1.0, 2.0); 

  for(double re=-2;re<=2;re+=0.01){
      for(double im=-2;im<=2;im+=0.01){
        c= complex<double>(re,im);
	n=0;
	while ((n<100) && (abs(c-calt)  > 1e-8) ){
	  calt = c;
	  c = c-(((c*c*c)-1.0)/(3.0*(c*c)));
	  n++;
	}
	//cout << re <<"\t" << im << "\t" << n << endl;
	cout << re <<"\t" << im << "\t" << n << endl;
      }
    
  }
    
   
  
  return 0;
}
