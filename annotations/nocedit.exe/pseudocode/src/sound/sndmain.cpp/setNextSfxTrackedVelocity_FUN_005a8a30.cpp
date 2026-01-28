// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity_FUN_005a8a30
// Address: 005a8a30
// Address Range: [[005a8a30, 005a8a53]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d *velocity_source_ptr)

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a30(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].velocity_format = 2;
  g_SfxOptions[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
