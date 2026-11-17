// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_005728b0
// Address: 005728b0
// Address Range: [[005728b0, 005728d6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005728b0(CVector3d *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005728b0(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02c78cf0[g_SfxLastSlot].velocity_format = 2;
  g_CSfxOptions_ARRAY_02c78cf0[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
