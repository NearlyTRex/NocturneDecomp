// Name: FUN_00526f00
// Address: 00526f00
// Address Range: [[00526f00, 00526f5b]]
// Convention: unknown
// Signature: undefined4 FUN_00526f00(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00526f00(void)

{
  int iVar1;
  uint in_stack_00000008;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x20) = 2;
  *(uint *)(iVar1 + 0x1c) = in_stack_00000008;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
