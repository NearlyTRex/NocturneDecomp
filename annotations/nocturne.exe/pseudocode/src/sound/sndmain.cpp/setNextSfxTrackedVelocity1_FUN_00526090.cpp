// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00526090
// Address: 00526090
// Address Range: [[00526090, 005260bd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1bb8) = 1;
  *(CVector3f **)(iVar1 + 0x2dc1bb4) = velocity_source_ptr;
  return;
}
