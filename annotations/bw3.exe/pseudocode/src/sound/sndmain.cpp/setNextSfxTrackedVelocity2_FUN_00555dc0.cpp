// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00555dc0
// Address: 00555dc0
// Address Range: [[00555dc0, 00555de6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00555dc0(CVector3d *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00555dc0(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb954) = 2;
  *(CVector3d **)(iVar1 + 0x2ceb950) = velocity_source_ptr;
  return;
}
