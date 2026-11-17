// Name: sound_sndwav.cpp_staticInit_FUN_0057a570
// Address: 0057a570
// Address Range: [[0057a570, 0057a586]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndwav_cpp_staticInit_FUN_0057a570(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_0057a570(void)

{
  g_CWavInDevice_02c82a50.base.vtable = (CSoundDevice)&g_CWavInDeviceVTable;
  g_CWavOutDevice_02c82a4c.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}
