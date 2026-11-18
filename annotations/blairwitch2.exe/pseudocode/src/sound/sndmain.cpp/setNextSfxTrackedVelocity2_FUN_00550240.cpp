// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00550240
// Address: 00550240
// Address Range: [[00550240, 00550266]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(CVector3d *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00550240(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_CSfxOptions_ARRAY_02641620[g_SfxLastSlot].velocity_format = 2;
  g_CSfxOptions_ARRAY_02641620[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
