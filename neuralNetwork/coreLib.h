//
//  coreLib.h
//  neuralNetwork
//
//  Created by Ravi Narayana K S on 14/10/23.
//

#ifndef coreLib_h
#define coreLib_h

class layerINPUT {
    float* values;
    int neuronCount;
public:
    layerINPUT(int neurons){
        this->neuronCount = neurons;
        values = new float(neuronCount);
    }
    int readINPUT(){
        std::cout<<"readINPUT : "<<neuronCount;
        return (int)'s';
    }
};

#endif /* coreLib_h */
