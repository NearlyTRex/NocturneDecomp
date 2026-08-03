#pragma once

// Function prototypes for sound/sndwav.cpp
// Generated from Ghidra function signatures

// Original: sound_sndwav.cpp_staticInit_FUN_0052c120
// Address: 0052c120
void __cdecl staticInit(void);

// Original: sound_sndwav.cpp_writeWavOutBuffer_FUN_0052c130
// Address: 0052c130
int __cdecl writeWavOutBuffer(int buffer_index);

// Original: sound_sndwav.cpp_CWavOutDevice_close_FUN_0052c290
// Address: 0052c290
int __cdecl CWavOutDevice::close(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_start_FUN_0052c340
// Address: 0052c340
int __cdecl CWavOutDevice::start(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0052c3f0
// Address: 0052c3f0
int __cdecl CWavOutDevice::reset(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460
// Address: 0052c460
int __cdecl CWavOutDevice::setMode(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_buffer_size);

// Original: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0052c640
// Address: 0052c640
int __cdecl CWavOutDevice::poll(CWavOutDevice *this_ptr,short *output_buffer,int num_samples);

// Original: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0
// Address: 0052c6c0
int __cdecl enumerateWavOutDevice(UINT device_id,SSoundDeviceInfo *device_info);

// Original: sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
// Address: 0052c760
CWavOutDevice * __cdecl getWavOutDevice(UINT device_id);

// Original: sound_sndwav.cpp_CWavOutDevice_hasHardware3D_FUN_0052c7b0
// Address: 0052c7b0
int __cdecl CWavOutDevice::hasHardware3D(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerPos_FUN_0052c7c0
// Address: 0052c7c0
void __cdecl CWavOutDevice::set3DListenerPos(CWavOutDevice *this_ptr,double x,double y,double z);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerOrient_FUN_0052c7d0
// Address: 0052c7d0
void __cdecl CWavOutDevice::set3DListenerOrient(CWavOutDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerVelocity_FUN_0052c7e0
// Address: 0052c7e0
void __cdecl CWavOutDevice::set3DListenerVelocity(CWavOutDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_0052c7f0
// Address: 0052c7f0
void __cdecl CWavOutDevice::set3DListenerDistanceFactor(CWavOutDevice *this_ptr,double distance_in_feet);

// Original: sound_sndwav.cpp_CWavOutDevice_commitDeferredSettings_FUN_0052c800
// Address: 0052c800
void __cdecl CWavOutDevice::commitDeferredSettings(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSample_FUN_0052c810
// Address: 0052c810
int __cdecl CWavOutDevice::allocateSample(CWavOutDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count);

// Original: sound_sndwav.cpp_CWavOutDevice_freeSample_FUN_0052c820
// Address: 0052c820
void __cdecl CWavOutDevice::freeSample(CWavOutDevice *this_ptr,int buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_lockSample_FUN_0052c830
// Address: 0052c830
int __cdecl CWavOutDevice::lockSample(CWavOutDevice *this_ptr,int buffer_id,int offset,int size);

// Original: sound_sndwav.cpp_CWavOutDevice_unlockSample_FUN_0052c840
// Address: 0052c840
void __cdecl CWavOutDevice::unlockSample(CWavOutDevice *this_ptr,int buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSfx_FUN_0052c850
// Address: 0052c850
int __cdecl CWavOutDevice::allocateSfx(CWavOutDevice *this_ptr,int sample_buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_setSfxPos_FUN_0052c860
// Address: 0052c860
int __cdecl CWavOutDevice::setSfxPos(CWavOutDevice *this_ptr,CSfxSlot *slot,int update_flags);

// Original: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0052c870
// Address: 0052c870
double __cdecl CWavOutDevice::getSfxPlaybackPos(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_startSfx_FUN_0052c890
// Address: 0052c890
int __cdecl CWavOutDevice::startSfx(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_killSfx_FUN_0052c8a0
// Address: 0052c8a0
void __cdecl CWavOutDevice::killSfx(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_isSfxPlaying_FUN_0052c8b0
// Address: 0052c8b0
int __cdecl CWavOutDevice::isSfxPlaying(CWavOutDevice *this_ptr,CSfxSlot *slot);
