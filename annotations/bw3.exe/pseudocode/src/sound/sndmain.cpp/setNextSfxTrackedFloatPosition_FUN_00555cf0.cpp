// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0
// Address: 00555cf0
// Address Range: [[00555cf0, 00555d16]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0(CVector3f *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00555cf0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_INT_02ceb91c;
  g_CSfxOptions_ARRAY_02ceb920[g_INT_02ceb91c].position_format = 1;
  g_CSfxOptions_ARRAY_02ceb920[iVar1].position_source_ptr = position_source_ptr;
  return;
}
