#include <stdio.h>
#include <stdlib.h>
#include "ProbDist.h"
#include <time.h>

int main(int argc, char** argv)
{
    srand(time(NULL));
    int i;
    FILE * pFile;
  	pFile = fopen ("Distribution.txt","w");
    fprintf(pFile,"y = [");
    int d;
    float mi;
    float ma;
    scanf("%d%f%f",&d,&mi,&ma);
    for (i = 0;i<10000;i++) {
        fprintf(pFile,"%f\n",generate_distribution(d,mi,ma,i));
    }
    fprintf(pFile,"];\ny = transpose(y);hist(y,10);");
    fclose(pFile);
    return 0;
}
