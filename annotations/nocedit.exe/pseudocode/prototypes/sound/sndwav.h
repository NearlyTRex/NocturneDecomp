#pragma once

// Function prototypes for sound/sndwav.cpp
// Generated from Ghidra function signatures

// Original: sound_sndwav.cpp_staticInit_FUN_005b0670
// Address: 005b0670
void __cdecl staticInit(void);

// Original: sound_sndwav.cpp_getWavOutBufferSizeBytes_FUN_005b0690
// Address: 005b0690
int __cdecl getWavOutBufferSizeBytes(void);

// Original: sound_sndwav.cpp_writeWavOutBuffer_FUN_005b06c0
// Address: 005b06c0
int __cdecl writeWavOutBuffer(int buffer_index);

// Original: sound_sndwav.cpp_CWavOutDevice_close_FUN_005b0840
// Address: 005b0840
int __cdecl CWavOutDevice::close(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0
// Address: 005b08f0
int __cdecl CWavOutDevice::start(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_reset_FUN_005b09c0
// Address: 005b09c0
int __cdecl CWavOutDevice::reset(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_005b0a30
// Address: 005b0a30
int __cdecl CWavOutDevice::setMode(CWavOutDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block);

// Original: sound_sndwav.cpp_CWavOutDevice_poll_FUN_005b0c10
// Address: 005b0c10
int __cdecl CWavOutDevice::poll(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_getWavInBufferSizeBytes_FUN_005b0c90
// Address: 005b0c90
int __cdecl getWavInBufferSizeBytes(void);

// Original: sound_sndwav.cpp_writeWavInBuffer_FUN_005b0cc0
// Address: 005b0cc0
int __cdecl writeWavInBuffer(int buffer_index);

// Original: sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
// Address: 005b0d70
int __cdecl CWavInDevice::close(CWavInDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavInDevice_start_FUN_005b0e20
// Address: 005b0e20
int __cdecl CWavInDevice::start(CWavInDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavInDevice_reset_FUN_005b0f10
// Address: 005b0f10
int __cdecl CWavInDevice::reset(CWavInDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavInDevice_setMode_FUN_005b0f70
// Address: 005b0f70
int __cdecl CWavInDevice::setMode(CWavInDevice *this_ptr,int bits_per_sample,int channels,int sample_rate,int *out_samples_per_block);

// Original: sound_sndwav.cpp_CWavInDevice_poll_FUN_005b12e0
// Address: 005b12e0
int __cdecl CWavInDevice::poll(CWavInDevice *this_ptr);

// Original: sound_sndwav.cpp_enumerateWavOutDevice_FUN_005b1470
// Address: 005b1470
int __cdecl enumerateWavOutDevice(UINT device_id,SSoundDeviceInfo *device_info);

// Original: sound_sndwav.cpp_getWavOutDevice_FUN_005b1510
// Address: 005b1510
CWavOutDevice * __cdecl getWavOutDevice(UINT device_id);

// Original: sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
// Address: 005b1560
int __cdecl enumerateWavInDevice(UINT device_id,SRecordingDeviceInfo *device_info);

// Original: sound_sndwav.cpp_getWavInDevice_FUN_005b1600
// Address: 005b1600
CWavInDevice * __cdecl getWavInDevice(UINT device_id);

// Original: sound_sndwav.cpp_CWavOutDevice_hasHardware3D_FUN_005b1650
// Address: 005b1650
int __cdecl CWavOutDevice::hasHardware3D(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerPos_FUN_005b1660
// Address: 005b1660
void __cdecl CWavOutDevice::set3DListenerPos(CWavOutDevice *this_ptr,double x,double y,double z);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerOrient_FUN_005b1670
// Address: 005b1670
void __cdecl CWavOutDevice::set3DListenerOrient(CWavOutDevice *this_ptr,double x_front,double y_front,double z_front,double x_top,double y_top,double z_top);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerVelocity_FUN_005b1680
// Address: 005b1680
void __cdecl CWavOutDevice::set3DListenerVelocity(CWavOutDevice *this_ptr,double x_velocity,double y_velocity,double z_velocity);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_005b1690
// Address: 005b1690
void __cdecl CWavOutDevice::set3DListenerDistanceFactor(CWavOutDevice *this_ptr,double distance_in_feet);

// Original: sound_sndwav.cpp_CWavOutDevice_commitDeferredSettings_FUN_005b16a0
// Address: 005b16a0
void __cdecl CWavOutDevice::commitDeferredSettings(CWavOutDevice *this_ptr);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSample_FUN_005b16b0
// Address: 005b16b0
int __cdecl CWavOutDevice::allocateSample(CWavOutDevice *this_ptr,int bits_per_sample,int channel_count,int sample_rate,int sample_count);

// Original: sound_sndwav.cpp_CWavOutDevice_freeSample_FUN_005b16c0
// Address: 005b16c0
void __cdecl CWavOutDevice::freeSample(CWavOutDevice *this_ptr,int buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_lockSample_FUN_005b16d0
// Address: 005b16d0
int __cdecl CWavOutDevice::lockSample(CWavOutDevice *this_ptr,int buffer_id,int offset,int size);

// Original: sound_sndwav.cpp_CWavOutDevice_unlockSample_FUN_005b16e0
// Address: 005b16e0
void __cdecl CWavOutDevice::unlockSample(CWavOutDevice *this_ptr,int buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSfx_FUN_005b16f0
// Address: 005b16f0
int __cdecl CWavOutDevice::allocateSfx(CWavOutDevice *this_ptr,int sample_buffer_id);

// Original: sound_sndwav.cpp_CWavOutDevice_setSfxPos_FUN_005b1700
// Address: 005b1700
int __cdecl CWavOutDevice::setSfxPos(CWavOutDevice *this_ptr,CSfxSlot *slot,int update_flags);

// Original: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_005b1710
// Address: 005b1710
double __cdecl CWavOutDevice::getSfxPlaybackPos(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_startSfx_FUN_005b1730
// Address: 005b1730
int __cdecl CWavOutDevice::startSfx(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_killSfx_FUN_005b1740
// Address: 005b1740
void __cdecl CWavOutDevice::killSfx(CWavOutDevice *this_ptr,CSfxSlot *slot);

// Original: sound_sndwav.cpp_CWavOutDevice_isSfxPlaying_FUN_005b1750
// Address: 005b1750
int __cdecl CWavOutDevice::isSfxPlaying(CWavOutDevice *this_ptr,CSfxSlot *slot);
