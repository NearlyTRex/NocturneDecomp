// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00572880
// Address: 00572880
// Address Range: [[00572880, 005728a6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880(CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d24) = 1;
  *(CVector3f **)(iVar1 + 0x2c78d20) = velocity_source_ptr;
  return;
}
