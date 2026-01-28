// Name: sound_snddx.cpp_staticInit_FUN_005ade60
// Address: 005ade60
// Address Range: [[005ade60, 005ade6a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_staticInit_FUN_005ade60(void)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_staticInit_FUN_005ade60(void)

{
  g_CDirectSoundDeviceInstance.base.vtable = (CSoundDevice)&g_CDirectSoundDeviceVTable;
  return;
}
