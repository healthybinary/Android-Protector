#include <jni.h>
#include <string>


/**
 * Get Current Package Of Application
 * @param env
 * @param contextApp
 * @return currentPackage
 */
string getPackageName(JNIEnv *env, jobject contextApp) {
    jclass activity_class = env->GetObjectClass(contextApp);
    jmethodID mid = env->GetMethodID(activity_class, "getPackageName", "()Ljava/lang/String;");
    jstring jPackageName = (jstring) env->CallObjectMethod(contextApp, mid);
    return env->GetStringUTFChars(jPackageName, 0);
}