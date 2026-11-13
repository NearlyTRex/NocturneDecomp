// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555d46]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00555d20(CVector3d *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00555d20(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb940) = 2;
  *(CVector3d **)(iVar1 + 0x2ceb93c) = position_source_ptr;
  return;
}
