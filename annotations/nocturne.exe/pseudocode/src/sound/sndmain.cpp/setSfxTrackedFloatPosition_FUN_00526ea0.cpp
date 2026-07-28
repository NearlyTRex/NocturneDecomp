// Name: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00526ea0
// Address: 00526ea0
// Address Range: [[00526ea0, 00526efb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0(uint sfx_handle,CVector3f *position_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00526ea0(uint sfx_handle,CVector3f *position_source_ptr)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x20) = 1;
  *(CVector3f **)(iVar1 + 0x1c) = position_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
