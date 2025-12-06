// Name: sound_sndwav.cpp_staticInit_FUN_005b0670
// Address: 005b0670
// Address Range: [[005b0670, 005b0686]]
// Convention: __cdecl
// Signature: void sound_sndwav.cpp_staticInit_FUN_005b0670(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_005b0670(void)

{
  g_CWavInDeviceInstance.base.vtable = (CSoundDevice)&g_CWavInDeviceVTable;
  g_CWavOutDeviceInstance.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}
