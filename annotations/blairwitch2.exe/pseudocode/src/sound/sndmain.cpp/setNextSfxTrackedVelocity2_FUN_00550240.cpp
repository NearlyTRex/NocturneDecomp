// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00550240
// Address: 00550240
// Address Range: [[00550240, 00550266]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(CVector3d *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641654) = 2;
  *(CVector3d **)(iVar1 + 0x2641650) = velocity_source_ptr;
  return;
}
