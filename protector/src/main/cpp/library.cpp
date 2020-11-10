#include <jni.h>
#include <string>
#include "data.h"
#include "helpers.h"

using namespace std;


extern "C" JNIEXPORT void JNICALL
Java_com_ayoubfletcher_protector_Holder_init(JNIEnv *env, jobject calling_object,
                                               jobject contextApp) {
    string currentPackageName = getPackageName(env, contextApp);
    if (currentPackageName != Data::getPackageName()) {
        raise(SIGSEGV);
    }
}
