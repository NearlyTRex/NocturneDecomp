// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0
// Address: 00525fc0
// Address Range: [[00525fc0, 00525fed]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].position_format = 1;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].position_source_ptr = position_source_ptr;
  return;
}
