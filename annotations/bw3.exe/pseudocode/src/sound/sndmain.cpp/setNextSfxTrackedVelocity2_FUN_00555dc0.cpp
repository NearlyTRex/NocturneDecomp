// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_00555dc0
// Address: 00555dc0
// Address Range: [[00555dc0, 00555de6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00555dc0(CVector3d *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_00555dc0(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_INT_02ceb91c;
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].velocity_format = 2;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
