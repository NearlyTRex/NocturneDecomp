// Name: sound_snddx.cpp_staticInit_FUN_005ade60
// Address: 005ade60
// Address Range: [[005ade60, 005ade6a]]
// Convention: __cdecl
// Signature: void sound_snddx.cpp_staticInit_FUN_005ade60(void)
// Globals:
//   CDirectSoundDevice_vtable g_CDirectSoundDeviceVTable
//   CDirectSoundDevice g_CDirectSoundDeviceInstance

#include "nocturne.h"

void __cdecl sound_snddx_cpp_staticInit_FUN_005ade60(void)

{
  g_CDirectSoundDeviceInstance.vtable = &g_CDirectSoundDeviceVTable;
  return;
}


// Assembly code:
// 005ade60: MOV dword ptr [0x03f6ad30],0x663204
//   Label: sound_snddx.cpp_staticInit_FUN_005ade60
//   XREF to: 03f6ad30 (WRITE)
//   XREF to: 00663204 (DATA)
// 005ade6a: RET
