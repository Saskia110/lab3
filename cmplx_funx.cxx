#include<iostream>
#include<cmath>
#include<complex>

using namespace std;

complex<double> tang(double phi){
   complex<double> ii = complex<double>(0.0,1.0); 
  return tan(phi*(ii+1.0));
  }


int main(){
  int M = 100;
  complex<double> ii = complex<double>(0.0,1.0);
  double phi ;//= M_PI / 3.0 ;
  double dphi =2*M_PI/(M-1);
  
  complex<double> array[M];
  complex<double> array_tan[M];
  

  for(int i = 0;i<(M);i++){
    phi=(i*dphi)-M_PI;
    array[i]=exp(phi * ii); 
    array_tan[i]=tang(phi);
  }
  

  for(int i =0;i<(M);i++){
    phi=(i*dphi)-M_PI;
    //cout << phi << "\t" << real(array[i]) << "\t"<< imag(array[i]) << endl;
    cout << phi << "\t" << real(array_tan[i]) << "\t"<< imag(array_tan[i]) << "\t"<< abs(array[i]) << endl;
    
  }
  
  

return 0;
}