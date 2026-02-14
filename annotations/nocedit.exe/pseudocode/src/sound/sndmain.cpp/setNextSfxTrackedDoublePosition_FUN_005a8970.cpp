// Name: sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
// Address: 005a8970
// Address Range: [[005a8970, 005a8993]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(CVector3d *position_source_ptr)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(CVector3d *position_source_ptr)

{
  int iVar1;
  
  iVar1 = g_SfxLastSlot;
  g_SfxOptions[g_SfxLastSlot].position_format = 2;
  g_SfxOptions[iVar1].position_source_ptr = position_source_ptr;
  return;
}
