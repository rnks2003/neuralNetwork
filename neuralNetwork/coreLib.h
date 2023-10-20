//
//  coreLib.h
//  neuralNetwork
//
//  Created by Ravi Narayana K S on 14/10/23.
//

#ifndef coreLib_h
#define coreLib_h

// class defining input layer

class layerINPUT {
    float* values = NULL;
    
    int xLen = 0;
    int yLen = 0;
    
    int neuronCount = 0;
    int inputSize = 0;
    int inputDim = 0;
    
public:
    layerINPUT(int sampleCount,float* values){
        this->neuronCount = sampleCount;
        this->values = values;
        this->inputSize = neuronCount*sizeof(values);
        this->inputDim = 1;
    }
    layerINPUT(int width, int height, float* values){
        this->xLen = width;
        this->yLen = height;
        this->neuronCount = xLen*yLen;
        this->values = values;
        this->inputSize = neuronCount*sizeof(values);
        this->inputDim = 2;
    }
    int readStatus(){
        /*   // check if all inputs are read
             {
                int i= 0;
                float* temp = values;
                do{
                    std::cout<<std::endl;
                    std::cout<<": "<<*temp;
                    temp++;
                    i++;
                }while(i < xLen*yLen);
                std::cout<<std::endl;
            }
        */
        return this->inputDim;
    }
};

#endif /* coreLib_h */
