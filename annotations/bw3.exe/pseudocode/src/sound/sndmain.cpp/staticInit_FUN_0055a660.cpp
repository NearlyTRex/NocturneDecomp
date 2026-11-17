// Name: sound_sndmain.cpp_staticInit_FUN_0055a660
// Address: 0055a660
// Address Range: [[0055a660, 0055a66a]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_staticInit_FUN_0055a660(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_staticInit_FUN_0055a660(void)

{
  g_CDirectSoundDeviceInstance.base.vtable = (CSoundDevice)&g_CDirectSoundDeviceVTable;
  return;
}
