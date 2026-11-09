// Name: sound_sndmain.cpp_FUN_005727e0
// Address: 005727e0
// Address Range: [[005727e0, 00572806]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_005727e0(CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_005727e0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d10) = 1;
  *(CVector3f **)(iVar1 + 0x2c78d0c) = position_source_ptr;
  return;
}
