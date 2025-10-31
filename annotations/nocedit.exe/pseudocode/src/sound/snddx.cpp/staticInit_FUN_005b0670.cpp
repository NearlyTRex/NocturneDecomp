// Name: sound_snddx.cpp_staticInit_FUN_005b0670
// Address: 005b0670
// Address Range: [[005b0670, 005b0686]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_staticInit_FUN_005b0670()
// Globals:
//   void* PTR_sound_snddx.cpp_waveInClose_FUN_005b0d70_00663264 = 005b0d70
//   void* PTR_sound_snddx.cpp_waveOutClose_FUN_005b0840_00663284 = 005b0840
//   undefined4 DAT_03f6af40
//   undefined4 DAT_03f6af44

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_staticInit_FUN_005b0670(void)

{
  _DAT_03f6af44 = &PTR_sound_snddx_cpp_waveInClose_FUN_005b0d70_00663264;
  _DAT_03f6af40 = &PTR_sound_snddx_cpp_waveOutClose_FUN_005b0840_00663284;
  return;
}


// Assembly code:
// 005b0670: MOV ECX,0x663264
//   Label: sound_snddx.cpp_staticInit_FUN_005b0670
//   XREF to: 00663264 (DATA)
// 005b0675: MOV EDX,0x663284
//   XREF to: 00663284 (DATA)
// 005b067a: MOV dword ptr [0x03f6af44],ECX
//   XREF to: 03f6af44 (WRITE)
// 005b0680: MOV dword ptr [0x03f6af40],EDX
//   XREF to: 03f6af40 (WRITE)
// 005b0686: RET
