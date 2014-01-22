/* Copyright (c) 2011 The WebM project authors. All Rights Reserved. */
/*  */
/* Use of this source code is governed by a BSD-style license */
/* that can be found in the LICENSE file in the root of the source */
/* tree. An additional intellectual property rights grant can be found */
/* in the file PATENTS.  All contributing project authors may */
/* be found in the AUTHORS file in the root of the source tree. */
static const char* const cfg = "--target=armv7-android-gcc --sdk-path=/home/yy147/proj./linphone_proj/linphone-android/android-ndk --disable-vp9 --disable-examples --disable-unit-tests --disable-postproc --enable-error-concealment --enable-debug";
const char *vpx_codec_build_config(void) {return cfg;}
