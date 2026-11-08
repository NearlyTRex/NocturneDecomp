// Name: FUN_0041d020
// Address: 0041d020
// Address Range: [[0041d020, 0041d263]]
// Convention: unknown
// Signature: void FUN_0041d020(int param_1,float param_2)

#include "nocturne.h"

void FUN_0041d020(int param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1024 [965];
  byte auStack_9c [48];
  byte auStack_6c [48];
  uint uStack_3c;
  uint auStack_38 [5];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_c;
  
  bVar6 = 0;
  FUN_0041c090(param_1,param_2);
  if ((*(int *)(param_1 + 0x7d4) == 2) &&
     (param_2 = *(float *)(param_1 + 0x37a0) - param_2, *(float *)(param_1 + 0x37a0) = param_2,
     param_2 <= 0.0)) {
    iVar3 = FUN_0040cfc0(0,7,0,0,0);
    FUN_0044b600(param_1 + 0x7d8,iVar3 * 0x4c + 0x7bc9ec);
    uStack_c = FUN_0040cf60(0,0x3e19999a);
    *(uint *)(param_1 + 0x37a0) = uStack_c;
  }
  if (*(int *)(param_1 + 0x7d4) != 3) {
    if (*(int *)(param_1 + 0x248c) == 0) {
      return;
    }
    FUN_00408d70(param_1,param_1 + 0x3788);
    uStack_24 = uStack_18;
    auStack_38[(uint)bVar6 * -2 + 6] = auStack_38[(uint)bVar6 * -2 + 9];
    auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    if ((uint *)(param_1 + 0x7dc) != auStack_38 + 5) {
      *(uint *)(param_1 + 0x7dc) = uStack_24;
      *(uint *)(param_1 + 0x7e0) = uStack_20;
      *(uint *)(param_1 + 0x7e4) = uStack_1c;
    }
    FUN_00591c10(auStack_9c,&DAT_0265370c,param_1 + 0x3794);
    FUN_00591c10(auStack_6c,&DAT_0265370c,param_1 + 0x30);
    FUN_005916b0(auStack_9c,auStack_6c);
    puVar4 = (uint *)&stack0xffffff04;
    puVar5 = (uint *)&stack0xffffff34;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_00591de0(&stack0xffffff34);
    auStack_38[2] = uStack_3c;
    auStack_38[(uint)bVar6 * -2 + 3] = auStack_38[(uint)bVar6 * -2];
    auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    FUN_00449280(param_1 + 0x7e8,auStack_38 + 2);
    FUN_00530630(0x01E661B8,param_1 + 0x7d8);
    return;
  }
  iVar3 = param_1 + 0x37a4;
  FUN_00448810(iVar3,param_1 + 0x20);
  uVar2 = FUN_005b849c();
  *(uint *)(param_1 + 0x37e0) = uVar2 & 0x7fff;
  *(char *)(param_1 + 0x37c0) = (char)((int)(uVar2 & 0x7fff) >> 10);
  FUN_00448860(iVar3,0x40000000);
  uVar1 = 0x01E661B8;
  *(uint *)(param_1 + 0x37c4) = 0;
  FUN_005306b0(uVar1,iVar3);
  return;
}
