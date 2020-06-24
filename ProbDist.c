#ifndef zPROBDIST

#define zPROBDIST
#define INT_MAX 4294967295
#define EE  2.71828

#include <math.h>
#include <stdlib.h>
#include "ProbDist.h"

/************************************************
    Abdulilah Azzazi        900092644
    Random Number generator Based on probability
    distributions:
    --------------------------------------------
    The following are implemented:
    0 - Uniform Distribution
    1 - Poisson Distribution
    2 - Guassian Distribution


************************************************/
float generate_distribution(int dist, float min, float max,int i)
{
    //Please seed random in main
    float r = (float) rand() / RAND_MAX;
    switch (dist)
    {
        case 0:
            //Uniform
            return (r*max);
        case 1:
            //Poisson
            return (log(r*max));
        case 2:
            //Guassian
            if (i%2 == 0) {
            return -(pow(EE,r*r)/2*r)*max;
            } else {
            return (pow(EE,r*r)/2*r)*max;
            }
    }
};

#endif // zPROBDIST
