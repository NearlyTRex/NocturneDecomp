// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
// Address: 00550170
// Address Range: [[00550170, 00550196]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_0264161c * 0x60;
  *(uint *)(iVar1 + 0x2641640) = 1;
  *(CVector3f **)(iVar1 + 0x264163c) = position_source_ptr;
  return;
}
