#pragma once

// Function prototypes for sound/snddx.cpp
// Generated from Ghidra function signatures

// Original: sound_snddx.cpp_staticInit_FUN_00529a80
// Address: 00529a80
void __cdecl staticInit(void);

// Original: sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
// Address: 00529a90
char * __cdecl getDirectSoundErrorString(uint error_code);

// Original: sound_snddx.cpp_fillStreamBuffer_FUN_00529c10
// Address: 00529c10
int __cdecl fillStreamBuffer(void);

// Original: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_00529de0
// Address: 00529de0
int __cdecl releaseSfxHardwareBuffers(int sfx_handle);

// Original: sound_snddx.cpp_CDirectSoundDevice_close_FUN_00529e90
// Address: 00529e90
int __cdecl CDirectSoundDevice::close(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_start_FUN_00529f60
// Address: 00529f60
int __cdecl CDirectSoundDevice::start(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0
// Address: 0052a0d0
int __cdecl CDirectSoundDevice::reset(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_0052a280
// Address: 0052a280
void __cdecl CDirectSoundDevice::initPropertySet(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_0052a450
// Address: 0052a450
int __cdecl CDirectSoundDevice::setMode(CDirectSoundDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block);

// Original: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_0052a970
// Address: 0052a970
int __cdecl CDirectSoundDevice::poll(CDirectSoundDevice *this_ptr,short *output_buffer,int num_samples);

// Original: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_0052aa40
// Address: 0052aa40
int __cdecl CDirectSoundDevice::hasHardware3D(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_0052aa50
// Address: 0052aa50
void __cdecl CDirectSoundDevice::set3DListenerPos(CDirectSoundDevice *this_ptr,double x,double y,double z);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_0052aa90
// Address: 0052aa90
void __cdecl CDirectSoundDevice::set3DListenerOrient(CDirectSoundDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top,double x_right,double y_right,double z_right);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_0052aaf0
// Address: 0052aaf0
void __cdecl CDirectSoundDevice::set3DListenerVelocity(CDirectSoundDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_0052ab30
// Address: 0052ab30
void __cdecl CDirectSoundDevice::set3DListenerDistanceFactor(CDirectSoundDevice *this_ptr,double distance_in_feet);

// Original: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_0052ab60
// Address: 0052ab60
int CDirectSoundDevice::allocateSample(undefined4 param_1,int param_2,int param_3,int param_4,int param_5);

// Original: sound_snddx.cpp_FUN_0052ad30
// Address: 0052ad30
undefined4 FUN_0052ad30(void);

// Original: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_0052ad50
// Address: 0052ad50
void CDirectSoundDevice::freeSample(undefined4 param_1,int param_2);

// Original: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_0052adc0
// Address: 0052adc0
void * CDirectSoundDevice::lockSample(undefined4 param_1,int param_2,int param_3,int param_4,CSfxSample *param_5);

// Original: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0052ae90
// Address: 0052ae90
void CDirectSoundDevice::unlockSample(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5);

// Original: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0052af50
// Address: 0052af50
int CDirectSoundDevice::allocateSfx(undefined4 param_1,int param_2);

// Original: sound_snddx.cpp_isValidSfxHandle_FUN_0052b240
// Address: 0052b240
int __cdecl isValidSfxHandle(int sfx_handle);

// Original: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_0052b270
// Address: 0052b270
int __cdecl CDirectSoundDevice::setSfxPos(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags);

// Original: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_0052b7e0
// Address: 0052b7e0
int __cdecl CDirectSoundDevice::isSfxPlaying(CDirectSoundDevice *this_ptr,CSfxSlot *slot);

// Original: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
// Address: 0052b880
double __cdecl CDirectSoundDevice::getSfxPlaybackPos(CDirectSoundDevice *this_ptr,CSfxSlot *slot);

// Original: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0
// Address: 0052b9a0
undefined4 CDirectSoundDevice::startSfx(int *param_1,int param_2);

// Original: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0052bae0
// Address: 0052bae0
void __cdecl CDirectSoundDevice::killSfx(CDirectSoundDevice *this_ptr,CSfxSlot *slot);

// Original: sound_snddx.cpp_directSoundEnumerationCallback_FUN_0052bbd0
// Address: 0052bbd0
int __cdecl directSoundEnumerationCallback(LPGUID device_guid,LPCSTR description,LPCSTR module,LPVOID context);

// Original: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_0052bdf0
// Address: 0052bdf0
void __cdecl CDirectSoundDevice::commitDeferredSettings(CDirectSoundDevice *this_ptr);

// Original: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
// Address: 0052be40
int __cdecl enumerateDirectSoundDevice(UINT device_id,SSoundDeviceInfo *device_info);

// Original: sound_snddx.cpp_getDirectSoundDevice_FUN_0052bef0
// Address: 0052bef0
CDirectSoundDevice * __cdecl getDirectSoundDevice(UINT device_id);
