// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005501a0
// Address: 005501a0
// Address Range: [[005501a0, 005501c6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(CVector3d *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641640) = 2;
  *(CVector3d **)(iVar1 + 0x264163c) = position_source_ptr;
  return;
}
