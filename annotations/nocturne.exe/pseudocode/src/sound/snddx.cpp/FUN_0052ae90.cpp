// Name: FUN_0052ae90
// Address: 0052ae90
// Address Range: [[0052ae90, 0052af4f]]
// Convention: unknown
// Signature: void FUN_0052ae90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052ae90(uint param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  char *pcStack_1a8;
  int iStack_1a4;
  
  if (((param_2 < 1) || (0x18 < param_2)) || (*(int *)(&DAT_02dc9244 + param_2 * 4) == 0)) {
    iStack_1a4 = param_2;
    pcStack_1a8 = "DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d";
    _DAT_01cc4800 = "..\\sound\\snddx.cpp";
    _DAT_01cc4804 = 0x2b6;
    uStack_1ac = 0x52aed2;
    FUN_004c8440();
  }
  iStack_1a4 = *(uint *)(param_5 + 0x15c);
  pcStack_1a8 = *(char **)(param_5 + 0x164);
  uStack_1ac = *(uint *)(param_5 + 0x158);
  uStack_1b0 = *(uint *)(param_5 + 0x160);
  piStack_1b4 = *(int **)(&DAT_02dc9244 + param_2 * 4);
  iVar1 = (**(code **)(*piStack_1b4 + 0x4c))();
  if (iVar1 != 0) {
    uVar2 = FUN_00529a90(iVar1);
    FUN_00563c90(&piStack_1b4,"DirectSux: Unable to %s.  (%s)",
                 "Unlock hw sample buffer",uVar2);
    FUN_00529980(&piStack_1b4);
    return;
  }
  return;
}
