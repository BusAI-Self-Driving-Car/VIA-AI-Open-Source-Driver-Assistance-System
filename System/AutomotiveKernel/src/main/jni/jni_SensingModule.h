/* /////////////////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//                                 MIT License
//                            Copyright (c) 2019 VIA, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files (the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
// NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//
// ////////////////////////////////////////////////////////////////////////////////////////////// */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_via_adas_sensing_SensingModule */

#ifndef _Included_com_via_adas_sensing_SensingModule
#define _Included_com_via_adas_sensing_SensingModule
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_create
 * Signature: (IJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_viatech_sensing_SensingModule_jni_1create
        (JNIEnv *, jobject, jint, jlong, jlong);


/*
 * Class:     com_viatech_sensing_SensingModule
 * Method:    jni_detect
 * Signature: (JZIFFZZ)I
 */
JNIEXPORT jint JNICALL Java_com_viatech_sensing_SensingModule_jni_1detect
        (JNIEnv *, jobject, jlong, jboolean, jboolean, jint, jfloat, jfloat, jboolean, jboolean);



/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame
 * Signature: (JLjava/nio/ByteBuffer;Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;IIIIIIIIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame
  (JNIEnv *, jobject, jlong, jbyteArray, jbyteArray, jbyteArray, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame_NV12
 * Signature: (JJIIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame_1NV12
  (JNIEnv *, jobject, jlong, jobject, jint, jint, jint, jint, jint, jint);


/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame_ARGB8888
 * Signature: (JLjava/nio/ByteBuffer;IIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame_1ARGB8888
        (JNIEnv *env, jobject jobj, jlong moduleAddr, jobject buffer,
         jint frameWidth, jint frameHeight, jint roiX, jint roiY, jint roiWidth, jint roiHeight);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame_nativeAddress
 * Signature: (JJIIIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame_1nativeAddress
        (JNIEnv *, jobject, jlong, jlong, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame_directByteBuffer
 * Signature: (JLjava/nio/ByteBuffer;IIIIIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame_1directByteBuffer
        (JNIEnv *, jobject, jlong, jobject, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_bufferFrame_bitmap
 * Signature: (JLjava/lang/Object;IIII)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1bufferFrame_1bitmap
        (JNIEnv *, jobject, jlong, jobject, jint, jint, jint, jint);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_init
 * Signature: (IJJLjava/lang/String;)J
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1init
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_release
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_viatech_sensing_SensingModule_jni_1release
  (JNIEnv *, jobject, jlong, jint);


/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_getFrameQueueCount
 * Signature: (JJ)Z
 */
JNIEXPORT jint JNICALL Java_com_viatech_sensing_SensingModule_jni_1getFrameQueueCount
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_updateCameraModule
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1updateCameraModule
        (JNIEnv *, jobject, jlong, jlong, jint);


/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_setRuntimeLoadableData
 * Signature: (JILjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1setRuntimeLoadableData
  (JNIEnv *, jobject, jlong, jint, jstring, jstring);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_getConfiguration
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_viatech_sensing_SensingModule_jni_1getConfiguration
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_via_adas_car_CANbusModule
 * Method:    jni_getModuleNativeAddress
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_viatech_sensing_SensingModule_jni_1getModuleNativeAddress
        (JNIEnv *, jobject, jlong);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_registerRelatedModule
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1registerRelatedModule
        (JNIEnv *, jobject, jlong, jlong, jint);


/*
 * Class:     com_viatech_sensing_SensingModule
 * Method:    jni_getCalibrationStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_viatech_sensing_SensingModule_jni_1getCalibrationStatus
        (JNIEnv *, jobject, jlong);


/*
 * Class:     com_viatech_sensing_SensingModule
 * Method:    jni_restoreConfiguration
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1restoreConfiguration
        (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_via_adas_sensing_SensingModule
 * Method:    jni_enableOnTheFlyCalibration
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1enableOnTheFlyCalibration
  (JNIEnv *, jobject, jlong, jfloat, jfloat);


/*
 * Class:     com_viatech_sensing_SensingModule
 * Method:    jni_updateLaneData
 * Signature: (J[F[F[F)Z
 */
JNIEXPORT jboolean JNICALL Java_com_viatech_sensing_SensingModule_jni_1updateLaneData
        (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jfloatArray);


#ifdef __cplusplus
}
#endif
#endif
