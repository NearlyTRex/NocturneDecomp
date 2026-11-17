// Name: sound_sndwav.cpp_staticInit_FUN_0055d6a0
// Address: 0055d6a0
// Address Range: [[0055d6a0, 0055d6b6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndwav_cpp_staticInit_FUN_0055d6a0(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_0055d6a0(void)

{
  g_CWavInDeviceInstance.base.vtable = (CSoundDevice)&g_CWavInDeviceVTable;
  g_CWavOutDeviceInstance.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}
