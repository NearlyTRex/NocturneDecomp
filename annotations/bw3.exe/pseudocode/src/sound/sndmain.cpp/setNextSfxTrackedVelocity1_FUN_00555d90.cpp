// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity1_FUN_00555d90
// Address: 00555d90
// Address Range: [[00555d90, 00555db6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00555d90(CVector3f *velocity_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00555d90(CVector3f *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = g_INT_02ceb91c;
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].velocity_format = 1;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
