// Name: FUN_00527060
// Address: 00527060
// Address Range: [[00527060, 005270c1]]
// Convention: unknown
// Signature: undefined4 FUN_00527060(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00527060(void)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000008;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x40) = 2;
  uVar2 = 1;
  *(uint *)(iVar1 + 0x3c) = in_stack_00000008;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    uVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return uVar2;
}
