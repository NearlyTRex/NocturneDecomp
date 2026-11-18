// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_00572810
// Address: 00572810
// Address Range: [[00572810, 00572836]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00572810(CVector3d *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_00572810(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].position_format = 2;
  g_CSfxOptions_ARRAY_02c78cf0[iVar1].position_source_ptr = position_source_ptr;
  return;
}
