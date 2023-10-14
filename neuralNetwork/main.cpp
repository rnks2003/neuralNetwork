//
//  main.cpp
//  neuralNetwork
//
//  Created by Ravi Narayana K S on 14/10/23.
//

#include <iostream>
#include "coreLib.h"

int main() {
    float a[3][3] = {1,2,3,4,5,6,7,8,9};
    
    layerINPUT input(3,3,&a[0][0]);
    
    std::cout<<"Read status : "<<input.readStatus()<<std::endl;
}
