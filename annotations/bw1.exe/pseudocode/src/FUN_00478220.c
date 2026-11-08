// Name: FUN_00478220
// Address: 00478220
// Address Range: [[00478220, 004782fb]]
// Convention: unknown
// Signature: int FUN_00478220(int param_1)

#include "nocturne.h"

int FUN_00478220(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_68 [6];
  uint auStack_50 [6];
  uint auStack_38 [6];
  uint auStack_20 [6];
  
  bVar5 = 0;
  if (2 < *(int *)(param_1 + 0x9c8)) {
    return 0;
  }
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = auStack_20;
  puVar4 = auStack_50;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar2 = FUN_004207b0(auStack_50);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x9d4) != 0) {
      iVar1 = FUN_00483e60(DAT_00612560);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
        puVar3 = auStack_68;
        puVar4 = auStack_38;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        FUN_00421670(auStack_38);
        goto LAB_004782c3;
      }
    }
    FUN_004688a0(param_1 + 0x158,0,0xffffffff);
    FUN_004087f0(param_1);
    return iVar2;
  }
LAB_004782c3:
  FUN_004087f0(param_1);
  return iVar2;
}
