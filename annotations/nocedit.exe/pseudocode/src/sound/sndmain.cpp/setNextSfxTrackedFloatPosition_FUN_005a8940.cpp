// Name: sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
// Address: 005a8940
// Address Range: [[005a8940, 005a8963]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].position_format = 1;
  g_SfxOptions[iVar1].position_source_ptr = position_source_ptr;
  return;
}
