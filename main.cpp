#include <iostream>
#include <fstream>
#include <math.h>
#include "vdot.h"
using namespace std;

int main() {

    ofstream balldrop;
    balldrop.open("balldrop.csv",ios::app);

    // Defines most variables
    double g=9.81;
    double b=7.0;
    double m=5.0;
    double xold=50.0;
    double xnew=0.0;
    double vold=-3.0;
    double vnew=0.0;
    double told=0.0;
    double tnew=0.0;
    double dt=.01;

    for(int j=0; j<756; j++){

        // Prints the values
        cout << told << "," << xold << "," << vold << endl;

        // Calculates the new values
        xnew = xold + vold*dt;
        vnew = vold + vdot(g,b,m,vold)*dt;
        tnew = told + dt;

        // Updates the old values
        xold = xnew;
        vold = vnew;
        told = tnew;

    } // closes for loop

    balldrop.close();

    return 0;
}