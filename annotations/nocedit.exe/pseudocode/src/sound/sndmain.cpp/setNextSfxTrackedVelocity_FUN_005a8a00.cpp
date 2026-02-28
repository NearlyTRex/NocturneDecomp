// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a00
// Address: 005a8a00
// Address Range: [[005a8a00, 005a8a23]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].velocity_format = 1;
  g_SfxOptions[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
