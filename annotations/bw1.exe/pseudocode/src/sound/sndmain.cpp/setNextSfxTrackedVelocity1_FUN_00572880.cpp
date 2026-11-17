// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00572880
// Address: 00572880
// Address Range: [[00572880, 005728a6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880(CVector3f *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00572880(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].velocity_format = 1;
  g_CSfxOptions_ARRAY_02c78cf0[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
