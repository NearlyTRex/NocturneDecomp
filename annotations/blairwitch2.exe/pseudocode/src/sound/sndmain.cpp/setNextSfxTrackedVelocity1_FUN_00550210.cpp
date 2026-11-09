// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00550210
// Address: 00550210
// Address Range: [[00550210, 00550236]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641654) = 1;
  *(CVector3f **)(iVar1 + 0x2641650) = velocity_source_ptr;
  return;
}
