/*
This program was orginally developed by Broken Admin
Please view his other works at https://github.com/Broken-Admin/
Thanks for using my Random Number Generator!
*/

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;
int runs;

class RNG{
    private:
    int originSeed
    public:
    int max=150;
    void setupRNG(){
        srand(time(NULL));
        originSeed=rand();
    }
    void gen(int max=150){
        srand(originSeed++);
        return(rand()%max);

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