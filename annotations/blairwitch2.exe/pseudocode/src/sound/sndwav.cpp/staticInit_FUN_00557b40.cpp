// Name: sound_sndwav.cpp_staticInit_FUN_00557b40
// Address: 00557b40
// Address Range: [[00557b40, 00557b56]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndwav_cpp_staticInit_FUN_00557b40(void)

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_00557b40(void)

{
  g_CWavInDevice_0264b280.base.vtable = (CSoundDevice)&g_CWavInDeviceVTable;
  g_CWavOutDevice_0264b27c.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}
