#pragma once

// Function prototypes for sound/snddx.cpp
// Generated from Ghidra function signatures

// Original: sound_snddx.cpp_staticInit_FUN_005ade60
// Address: 005ade60
void staticInit(void);

// Original: sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
// Address: 005ade70
char * getDirectSoundErrorString(uint error_code);

// Original: sound_snddx.cpp_checkDirectSoundError_FUN_005adf90
// Address: 005adf90
int checkDirectSoundError(HRESULT error_code, char * operation_description);

// Original: sound_snddx.cpp_fillStreamBuffer_FUN_005adff0
// Address: 005adff0
int fillStreamBuffer(void);

// Original: sound_snddx.cpp_releaseSfxHardwareBuffers_FUN_005ae1c0
// Address: 005ae1c0
int releaseSfxHardwareBuffers(int sfx_handle);

// Original: sound_snddx.cpp_CDirectSoundDevice_close_FUN_005ae270
// Address: 005ae270
int CDirectSoundDevice::close(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340
// Address: 005ae340
int CDirectSoundDevice::start(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0
// Address: 005ae4b0
int CDirectSoundDevice::reset(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_initPropertySet_FUN_005ae660
// Address: 005ae660
void CDirectSoundDevice::initPropertySet(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_setMode_FUN_005ae830
// Address: 005ae830
int CDirectSoundDevice::setMode(CDirectSoundDevice * this_ptr, int bits_per_sample, int channels, int sample_rate, int * out_samples_per_block);

// Original: sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50
// Address: 005aed50
int CDirectSoundDevice::poll(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_005aee20
// Address: 005aee20
int CDirectSoundDevice::hasHardware3D(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerPos_FUN_005aee30
// Address: 005aee30
void CDirectSoundDevice::set3DListenerPos(CDirectSoundDevice * this_ptr, double x, double y, double z);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerOrient_FUN_005aee70
// Address: 005aee70
void CDirectSoundDevice::set3DListenerOrient(CDirectSoundDevice * this_ptr, double x_front, double y_front, double z_front, double x_top, double y_top, double z_top);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerVelocity_FUN_005aeed0
// Address: 005aeed0
void CDirectSoundDevice::set3DListenerVelocity(CDirectSoundDevice * this_ptr, double x_velocity, double y_velocity, double z_velocity);

// Original: sound_snddx.cpp_CDirectSoundDevice_set3DListenerDistanceFactor_FUN_005aef10
// Address: 005aef10
void CDirectSoundDevice::set3DListenerDistanceFactor(CDirectSoundDevice * this_ptr, double distance_in_feet);

// Original: sound_snddx.cpp_CDirectSoundDevice_allocateSample_FUN_005aef40
// Address: 005aef40
int CDirectSoundDevice::allocateSample(CDirectSoundDevice * this_ptr, int bits_per_sample, int channel_count, int sample_rate, int sample_count);

// Original: sound_snddx.cpp_isValidSampleBuffer_FUN_005af150
// Address: 005af150
int isValidSampleBuffer(int buffer_id);

// Original: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190
// Address: 005af190
void CDirectSoundDevice::freeSample(CDirectSoundDevice * this_ptr, int buffer_id);

// Original: sound_snddx.cpp_CDirectSoundDevice_lockSample_FUN_005af220
// Address: 005af220
int CDirectSoundDevice::lockSample(CDirectSoundDevice * this_ptr, int buffer_id, int offset, int size);

// Original: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_005af320
// Address: 005af320
void CDirectSoundDevice::unlockSample(CDirectSoundDevice * this_ptr, int buffer_id);

// Original: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
// Address: 005af410
int CDirectSoundDevice::allocateSfx(CDirectSoundDevice * this_ptr, int sample_buffer_id);

// Original: sound_snddx.cpp_isValidSfxHandle_FUN_005af720
// Address: 005af720
int isValidSfxHandle(int sfx_handle);

// Original: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
// Address: 005af750
int CDirectSoundDevice::setSfxPos(CDirectSoundDevice * this_ptr, CSfxSlot * slot, int update_flags);

// Original: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
// Address: 005afcc0
int CDirectSoundDevice::isSfxPlaying(CDirectSoundDevice * this_ptr, CSfxSlot * slot);

// Original: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_005afd60
// Address: 005afd60
double CDirectSoundDevice::getSfxPlaybackPos(CDirectSoundDevice * this_ptr, CSfxSlot * slot);

// Original: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_005afe80
// Address: 005afe80
int CDirectSoundDevice::startSfx(CDirectSoundDevice * this_ptr, CSfxSlot * slot);

// Original: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_005b0030
// Address: 005b0030
void CDirectSoundDevice::killSfx(CDirectSoundDevice * this_ptr, CSfxSlot * slot);

// Original: sound_snddx.cpp_directSoundEnumerationCallback_FUN_005b0120
// Address: 005b0120
int directSoundEnumerationCallback(LPGUID device_guid, LPCSTR description, LPCSTR module, LPVOID context);

// Original: sound_snddx.cpp_CDirectSoundDevice_commitDeferredSettings_FUN_005b0340
// Address: 005b0340
void CDirectSoundDevice::commitDeferredSettings(CDirectSoundDevice * this_ptr);

// Original: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_005b0390
// Address: 005b0390
int enumerateDirectSoundDevice(UINT device_id, SSoundDeviceInfo * device_info);

// Original: sound_snddx.cpp_getDirectSoundDevice_FUN_005b0440
// Address: 005b0440
CDirectSoundDevice * getDirectSoundDevice(UINT device_id);
