#include "homework2-1.h"

/* TODO IntClac 네임스페이스 및 함수 정의하기 */

/* TODO FloatClac 네임스페이스 및 함수 정의하기 */

namespace IntCalc{
    int add(int a, int b){
        return a+b;
    }

    int subtract(int a, int b){
        return a- b;
    }

    int multiply(int a, int b){
        return a*b;
    }

    int divide(int a, int b){
        if(b == 0) return 0;
        return a/b;
    }
}

namespace FloatCalc{
     float add(float a, float b){
        return a+b;
    }

    float subtract(float a, float b){
        return a- b;
    }

    float multiply(float a, float b){
        return a*b;
    }

    float divide(float a, float b){
        if(b == 0.0f) return 0.0f;
        return a/b;
    }
}
