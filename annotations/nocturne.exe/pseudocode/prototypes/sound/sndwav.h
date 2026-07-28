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
undefined4 CWavOutDevice::start(int *param_1);

// Original: sound_sndwav.cpp_CWavOutDevice_reset_FUN_0052c3f0
// Address: 0052c3f0
undefined4 CWavOutDevice::reset(void);

// Original: sound_sndwav.cpp_CWavOutDevice_setMode_FUN_0052c460
// Address: 0052c460
undefined4 CWavOutDevice::setMode(undefined4 *param_1,uint param_2,int param_3,uint *param_4);

// Original: sound_sndwav.cpp_CWavOutDevice_poll_FUN_0052c640
// Address: 0052c640
undefined4 CWavOutDevice::poll(void);

// Original: sound_sndwav.cpp_enumerateWavOutDevice_FUN_0052c6c0
// Address: 0052c6c0
undefined4 enumerateWavOutDevice(UINT_PTR param_1,char *param_2);

// Original: sound_sndwav.cpp_getWavOutDevice_FUN_0052c760
// Address: 0052c760
CWavOutDevice * __cdecl getWavOutDevice(UINT device_id);

// Original: sound_sndwav.cpp_CWavOutDevice_hasHardware3D_FUN_0052c7b0
// Address: 0052c7b0
undefined4 CWavOutDevice::hasHardware3D(void);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerPos_FUN_0052c7c0
// Address: 0052c7c0
void CWavOutDevice::set3DListenerPos(void);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerOrient_FUN_0052c7d0
// Address: 0052c7d0
void CWavOutDevice::set3DListenerOrient(void);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerVelocity_FUN_0052c7e0
// Address: 0052c7e0
void CWavOutDevice::set3DListenerVelocity(void);

// Original: sound_sndwav.cpp_CWavOutDevice_set3DListenerDistanceFactor_FUN_0052c7f0
// Address: 0052c7f0
void CWavOutDevice::set3DListenerDistanceFactor(void);

// Original: sound_sndwav.cpp_CWavOutDevice_commitDeferredSettings_FUN_0052c800
// Address: 0052c800
void CWavOutDevice::commitDeferredSettings(void);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSample_FUN_0052c810
// Address: 0052c810
undefined4 CWavOutDevice::allocateSample(void);

// Original: sound_sndwav.cpp_CWavOutDevice_freeSample_FUN_0052c820
// Address: 0052c820
void CWavOutDevice::freeSample(void);

// Original: sound_sndwav.cpp_CWavOutDevice_lockSample_FUN_0052c830
// Address: 0052c830
undefined4 CWavOutDevice::lockSample(void);

// Original: sound_sndwav.cpp_CWavOutDevice_unlockSample_FUN_0052c840
// Address: 0052c840
void CWavOutDevice::unlockSample(void);

// Original: sound_sndwav.cpp_CWavOutDevice_allocateSfx_FUN_0052c850
// Address: 0052c850
undefined4 CWavOutDevice::allocateSfx(void);

// Original: sound_sndwav.cpp_CWavOutDevice_setSfxPos_FUN_0052c860
// Address: 0052c860
undefined4 CWavOutDevice::setSfxPos(void);

// Original: sound_sndwav.cpp_CWavOutDevice_getSfxPlaybackPos_FUN_0052c870
// Address: 0052c870
undefined8 CWavOutDevice::getSfxPlaybackPos(void);

// Original: sound_sndwav.cpp_CWavOutDevice_startSfx_FUN_0052c890
// Address: 0052c890
undefined4 CWavOutDevice::startSfx(void);

// Original: sound_sndwav.cpp_CWavOutDevice_killSfx_FUN_0052c8a0
// Address: 0052c8a0
void CWavOutDevice::killSfx(void);

// Original: sound_sndwav.cpp_CWavOutDevice_isSfxPlaying_FUN_0052c8b0
// Address: 0052c8b0
undefined4 CWavOutDevice::isSfxPlaying(void);
