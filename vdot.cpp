//
// Created by Brian Dolle on 3/13/18.
//

double vdot(double g, double b, double m, double vold){
    return -g-(b*vold/m);
} //closes vdot function