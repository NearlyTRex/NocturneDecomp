// Name: FUN_004e0240
// Address: 004e0240
// Address Range: [[004e0240, 004e0376]]
// Convention: unknown
// Signature: void FUN_004e0240(int param_1)

#include "nocturne.h"

void FUN_004e0240(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_101c [965];
  uint uStack_e8;
  uint uStack_d8;
  uint uStack_c8;
  byte auStack_c4 [48];
  byte auStack_94 [48];
  uint auStack_64 [12];
  uint uStack_34;
  uint auStack_30 [4];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x43c) == 0) {
    return;
  }
  FUN_00591c10(auStack_c4,param_1 + 0x440,param_1 + 0x44c);
  FUN_00591c10(auStack_94,*(int *)(param_1 + 0x43c) + 0x20,*(int *)(param_1 + 0x43c) + 0x30);
  FUN_005916b0(auStack_c4,auStack_94);
  puVar2 = auStack_64;
  puVar3 = (uint *)&stack0xffffff0c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_10 = uStack_e8;
  uStack_c = uStack_d8;
  uStack_8 = uStack_c8;
  uStack_34 = uStack_e8;
  auStack_30[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2 + 9];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  *(uint *)(param_1 + 0x20) = uStack_34;
  *(uint *)(param_1 + 0x24) = auStack_30[0];
  *(uint *)(param_1 + 0x28) = auStack_30[1];
  FUN_00591de0(&stack0xffffff0c);
  auStack_30[2] = uStack_1c;
  auStack_30[(uint)bVar4 * -2 + 3] = auStack_30[(uint)bVar4 * -2 + 6];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  if ((uint *)(param_1 + 0x30) != auStack_30 + 2) {
    *(uint *)(param_1 + 0x30) = auStack_30[2];
    *(uint *)(param_1 + 0x34) = auStack_30[3];
    *(uint *)(param_1 + 0x38) = uStack_20;
  }
  FUN_00408ae0(param_1);
  return;
}
