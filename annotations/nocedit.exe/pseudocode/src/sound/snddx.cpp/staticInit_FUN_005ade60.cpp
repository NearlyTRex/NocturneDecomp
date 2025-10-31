// Name: sound_snddx.cpp_staticInit_FUN_005ade60
// Address: 005ade60
// Address Range: [[005ade60, 005ade6a]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_staticInit_FUN_005ade60()
// Globals:
//   void* PTR_sound_snddx.cpp_FUN_005ae270_00663204 = 005ae270
//   undefined4 DAT_03f6ad30

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_staticInit_FUN_005ade60(void)

{
  _DAT_03f6ad30 = &PTR_sound_snddx_cpp_FUN_005ae270_00663204;
  return;
}


// Assembly code:
// 005ade60: MOV dword ptr [0x03f6ad30],0x663204
//   Label: sound_snddx.cpp_staticInit_FUN_005ade60
//   XREF to: 03f6ad30 (WRITE)
//   XREF to: 00663204 (DATA)
// 005ade6a: RET
