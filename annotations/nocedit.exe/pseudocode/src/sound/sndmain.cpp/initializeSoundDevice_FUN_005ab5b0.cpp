// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0
// Address: 005ab5b0
// Address Range: [[005ab5b0, 005ab65c]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_initializeSoundDevice_FUN_005ab5b0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005ab5b0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_005ab4c0(g_CurrentSoundDevice);
  if (-1 < g_CurrentSoundDevice) {
    if (g_SoundDevices[g_CurrentSoundDevice].api_type == 0) {
      g_CSoundDevicePtr =
           &sound_sndwav_cpp_getWavOutDevice_FUN_005b1510
                      (g_SoundDevices[g_CurrentSoundDevice].device_id)->base;
    }
    if (g_SoundDevices[g_CurrentSoundDevice].api_type == 1) {
      g_CSoundDevicePtr =
           &sound_snddx_cpp_getDirectSoundDevice_FUN_005b0440
                      (g_SoundDevices[g_CurrentSoundDevice].device_id)->base;
    }
    if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
      return 0;
    }
    g_HasHardware3DSound = (*g_CSoundDevicePtr->vtable->hasHardware3D)(g_CSoundDevicePtr);
    return 1;
  }
  return 0;
}
