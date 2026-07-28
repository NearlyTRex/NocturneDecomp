// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
// Address: 00525fc0
// Address Range: [[00525fc0, 00525fed]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74 * 0x6c;
  *(uint *)(iVar1 + 0x2dc1b98) = 1;
  *(CVector3f **)(iVar1 + 0x2dc1b94) = position_source_ptr;
  return;
}
