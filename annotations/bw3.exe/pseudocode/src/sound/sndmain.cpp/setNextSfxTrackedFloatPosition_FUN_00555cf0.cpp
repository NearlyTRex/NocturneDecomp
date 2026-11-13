// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0
// Address: 00555cf0
// Address Range: [[00555cf0, 00555d16]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0(CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02ceb91c * 0x60;
  *(uint *)(iVar1 + 0x2ceb940) = 1;
  *(CVector3f **)(iVar1 + 0x2ceb93c) = position_source_ptr;
  return;
}
