// Name: sound_sndwav.cpp_staticInit_FUN_0052c120
// Address: 0052c120
// Address Range: [[0052c120, 0052c12a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndwav_cpp_staticInit_FUN_0052c120(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_0052c120(void)

{
  g_CWavOutDeviceInstance.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}
