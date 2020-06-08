#include<iostream>
#include<cmath>

int i;

double zufall(int Start, int a, int c, int m) {
  static int I;
  I = (a*Start + c) % m;
  return I;
}

int main() {

  double x = 20;
  double y = 10; 
  double a = 205;
  double c= 29573;
  double m = 139968;
  double Nin = 0;
  double N = 100;

for (i=0; i < N; ++i) {

  x = zufall(x,a,c,m);
  y = zufall(y, a, c, m);
  double ux = x/m;
  double uy = y/m;
  //std::cout << ux << std::endl;

  double Kreis = sqrt(ux*ux + uy*uy);
  if (Kreis < 1) {
    Nin++;
  }
}

double pi = 4*Nin/N;
double p = M_PI/4;
double E = p*N;
double V = p*(1-p)*N;
double sigma = 4*sqrt(V)/N;

std::cout << "N = " << N << std::endl;
std::cout << "E = " << E << std::endl;
std::cout << "V = " << V << std::endl;
std::cout << "N_in = " << Nin << std::endl;
std::cout << "pi = " << pi << std::endl;
std::cout << "sigma = " << sigma << std::endl;

}
