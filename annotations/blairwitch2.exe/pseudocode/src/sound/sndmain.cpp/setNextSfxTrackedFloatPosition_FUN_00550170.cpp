// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
// Address: 00550170
// Address Range: [[00550170, 00550196]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_INT_0264161c;
  g_CSfxOptions_ARRAY_02641620[g_INT_0264161c].position_format = 1;
  g_CSfxOptions_ARRAY_02641620[iVar1].position_source_ptr = position_source_ptr;
  return;
}
