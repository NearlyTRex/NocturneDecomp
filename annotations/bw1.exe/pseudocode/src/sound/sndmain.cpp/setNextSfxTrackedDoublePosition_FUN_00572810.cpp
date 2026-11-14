// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_00572810
// Address: 00572810
// Address Range: [[00572810, 00572836]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00572810(CVector3d *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00572810(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d10) = 2;
  *(CVector3d **)(iVar1 + 0x2c78d0c) = position_source_ptr;
  return;
}
