// Name: sound_sndmain.cpp_FUN_00526f60
// Address: 00526f60
// Address Range: [[00526f60, 00526feb]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_FUN_00526f60(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint sound_sndmain_cpp_FUN_00526f60(void)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x3c) = 0;
  *(uint *)(iVar1 + 0x40) = 0;
  *(uint *)(iVar1 + 0x24) = in_stack_00000008;
  *(uint *)(iVar1 + 0x28) = in_stack_0000000c;
  *(uint *)(iVar1 + 0x2c) = in_stack_00000010;
  *(uint *)(iVar1 + 0x30) = in_stack_00000014;
  *(uint *)(iVar1 + 0x34) = in_stack_00000018;
  uVar2 = 1;
  *(uint *)(iVar1 + 0x38) = in_stack_0000001c;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    uVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return uVar2;
}
