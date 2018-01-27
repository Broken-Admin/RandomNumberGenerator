#include "hdr.h"

int main(){
    ofstream output;
    rng.setupRNG();
    printf("Generate how many random numbers? [*3]\n");
    cin>>runs;
    printf("What will your max number be?\n");
    cin>>rng.max;
    rng.max++;
    printf("\n");
    checkMax();
    checkRun();
        myfile.open ("example.txt");
    for(int x=0;x<=runs;x++){
        output<<rng.gen(rng.max)<<'\n';
    }
    myfile.close();
}