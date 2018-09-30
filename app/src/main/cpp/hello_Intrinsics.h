//
// Created by Navendra on 9/29/18.
//

#ifndef HELLONEON_HELLO_INTRINSICS_H
#define HELLONEON_HELLO_INTRINSICS_H


#include <arm_neon.h>

class hello_Intrinsics {

    public:
        hello_Intrinsics();
        int add(int a, int b);
        int getR(int colorInt[]);
};

hello_Intrinsics::hello_Intrinsics() {}

inline int hello_Intrinsics::add(int a, int b) {
    return a+b;
}

inline int hello_Intrinsics::getR(int* colorInt){
//    int16x4x4_t a = vld4_s16(colorInt);
//
//    int16x4_t first = a.val[0];
//    int16x4_t second = a.val[1];
//    int16x4_t fs = vqadd_s16(first,second);
//
//    int16x4_t third = a.val[2];
//    int16x4_t fourth = a.val[3];
//    int16x4_t tf = vqadd_s16(third,fourth);
//
//    int16x4_t sum = vqadd_s16(fs,tf);
//    int64_t k ;
//    vst1_s16(fs,tf);

    return 0;

}






#endif //HELLONEON_HELLO_INTRINSICS_H
