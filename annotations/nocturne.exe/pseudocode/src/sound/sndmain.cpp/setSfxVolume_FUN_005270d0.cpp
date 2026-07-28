// Name: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
// Address: 005270d0
// Address Range: [[005270d0, 0052712a]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint sfx_handle,float volume)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 1;
  *(float *)(iVar1 + 0x44) = volume;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,8);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar2;
}
