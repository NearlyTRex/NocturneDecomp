// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005727e0
// Address: 005727e0
// Address Range: [[005727e0, 00572806]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(CVector3f *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005727e0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].position_format = 1;
  g_CSfxOptions_ARRAY_02c78cf0[iVar1].position_source_ptr = position_source_ptr;
  return;
}
