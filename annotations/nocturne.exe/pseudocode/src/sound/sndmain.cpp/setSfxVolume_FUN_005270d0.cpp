// Name: sound_sndmain.cpp_setSfxVolume_FUN_005270d0
// Address: 005270d0
// Address Range: [[005270d0, 0052712a]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_setSfxVolume_FUN_005270d0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 1;
  *(uint *)(iVar1 + 0x44) = param_2;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    uVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,8);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return uVar2;
}
