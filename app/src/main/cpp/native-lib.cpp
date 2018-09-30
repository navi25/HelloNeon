
#include <jni.h>

#include <string>

#include "hello_Intrinsics.h"

#define DEBUG 0

#if DEBUG
#include <android/log.h>
#  define  D(x...)  __android_log_print(ANDROID_LOG_INFO,"helloneon",x)
#else
#  define  D(...)  do {} while (0)
#endif

extern "C" JNIEXPORT jint JNICALL
Java_io_navendra_helloneon_MainActivity_sumFromJNI(JNIEnv *env, jobject  instance, jint a, jint b) {
    std::string hello = "Hello from C++";
    jint sum = hello_Intrinsics().add(a,b);
    return sum;
}

extern "C" JNIEXPORT jint JNICALL
Java_io_navendra_helloneon_MainActivity_rgbFromJNI(JNIEnv *env, jobject  instance, int* colorInt){
    return hello_Intrinsics().getR(colorInt);
}
