// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005501a0
// Address: 005501a0
// Address Range: [[005501a0, 005501c6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(CVector3d *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005501a0(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].position_format = 2;
  g_CSfxOptions_ARRAY_02641620[iVar1].position_source_ptr = position_source_ptr;
  return;
}
