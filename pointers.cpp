//
// Created by Miguel on 12/27/2022.
//
#include <iostream>

int main (){
//    int *pInt {}; // will initialize with null pointer
//    double *pDouble {};
    int variable{43};
    int *pInt = &variable;
    std::cout<< pInt;
    return 0;
}