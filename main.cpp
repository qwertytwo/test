#include <iostream>
#include "List.h"
#include "tmp.h"
using namespace std;

double M1 = 4;
double NTST = 0;

int main() 
{
    List<double> phi(M1+2), source(M1+1), dx(M1+2), V(M1+1), Af(M1+2);
    List<List<double>> coef(M1+1);
    for(int i=1; i<coef.size();i++) coef[i].setSize(M1+1);
  
    init_mesh(dx,V,Af);
    init_phi(phi);
/*   
    for (int nTime=0; nTime<NTST;nTime++)
    {
        bcond(phi);
        calc_source(phi, source, dx, V, Af, nTime);
        calc_coef(coef, source, dx, V, Af, nTime);//calc_coef((double*)coef, source, dx, V, Af, nTime);
        solve(coef, phi, source, nTime);//solve((double*)coef, phi, source, nTime);
    }
    write_phi(phi);
     */
    return 0;
}