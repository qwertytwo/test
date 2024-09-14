#include "tmp.h"
#include "List.h"

void init_mesh(List<double>& dx, List<double>& V, List<double>& Af)
{
    for(int i=1;i<=dx.size();i++)  dx[i]=1.0/double(V.size()-1);
    dx[1]=0.5*dx[1];
    dx[dx.size()-1]=0.5*dx[dx.size()-1];
    for(int i=1;i<=V.size();i++)
    {
        Af[i]=DY*DZ;
        V[i]=Af[i]*1.0/double(V.size()-1);
    }
    Af[Af.size()-1]=DY*DZ;

}