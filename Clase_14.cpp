//Este código implementa el método de Euler para ecuaciones diferenciales ordinarias de primer orden.
#include <iostream>
#include <cmath>
using namespace std;

//Declaración Variables.

double h0 = 0.01;

//Declaración Funciones.

double funct(double PosY, double t);
    
double Euler(double PosY, double t, double h);

//Función Main.

int main()
{
    double y0 = 0; 
    double t0 = 0; 
    
    cout<<t0<<", "<<y0<<endl;
    
    for(int i = 0; i <= 100; i++)
    {
        t0 = t0 + h0;
        y0 = Euler(y0, t0, h0);
        
        cout<<t0<<", "<<Euler(y0, t0, h0)<<endl;
    }
    
    return 0;
}

//Implementación funciones.

double funct(double PosY, double t)
{
    return sin(t);
}

double Euler(double PosY, double t, double h)
{
    return PosY + (h*funct(PosY, t));
}
