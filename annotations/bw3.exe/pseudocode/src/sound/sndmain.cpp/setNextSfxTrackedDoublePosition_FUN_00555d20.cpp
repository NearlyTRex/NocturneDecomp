// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_00555d20
// Address: 00555d20
// Address Range: [[00555d20, 00555d46]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00555d20(CVector3d *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00555d20(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02ceb920[g_SfxLastSlot].position_format = 2;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position_source_ptr = position_source_ptr;
  return;
}
