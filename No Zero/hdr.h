#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;
int runs;

class RNG{
    private:
    int num;
    int originSeed
    public:
    int max=150;
    void setupRNG(){
        srand(time(NULL));
        originSeed=rand();
    }
    void gen(int max=150){
        srand(originSeed++);
        num=rand()%max;
        while(rand==0){
            num=rand()%max;
        }
        return(num);

    }
};
RNG rng;
void checkRun(){ // Checks if the 'run' variable is invalid input.
    if(runs>5000||runs<=0){
        printf("Please pick an appropriate number in the range of 1-5000 \nand please avoid letters & symbols.\n\n");
        printf("Running Program 5 times due to improper input.\n");
        printf("Setting max to 150 times due to improper input.\n\n");
        runs=5;
    }
}
void checkMax(){ // Checks if the 'max' variable is invalid input. A basic copy of the above function.
    if(rng.max>6000||rng.max<=0){
        printf("Please pick an appropriate number in the range of 1-6000 and please avoid letters & symbols.\n\n");
        printf("Setting max to 150 times due to improper input.\n\n");
    }
}