// Name: sound_sndwav.cpp_staticInit_FUN_005b0670
// Address: 005b0670
// MANUAL RECONSTRUCTION
// Address Range: [[005b0670, 005b0686]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndwav_cpp_staticInit_FUN_005b0670(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_005b0670(void)

{
  g_CWavInDeviceInstance.base.vtable = (CSoundDeviceFull_vtable *)&g_CWavInDeviceVTable;
  g_CWavOutDeviceInstance.base.vtable = &g_CWavOutDeviceVTable;
  return;
}
