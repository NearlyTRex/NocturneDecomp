// Name: FUN_00422f90
// Address: 00422f90
// Address Range: [[00422f90, 004231d3]]
// Convention: unknown
// Signature: void FUN_00422f90(int param_1,float param_2)

#include "nocturne.h"

void FUN_00422f90(int param_1,float param_2)

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
  FUN_00422000(param_1,param_2);
  if ((*(int *)(param_1 + 0x678) == 2) &&
     (param_2 = *(float *)(param_1 + 0x3640) - param_2, *(float *)(param_1 + 0x3640) = param_2,
     param_2 <= 0.0)) {
    iVar3 = FUN_0040cc60(0,7,0,0,0);
    FUN_00463e30(param_1 + 0x67c,iVar3 * 0x4c + 0x7c5098);
    uStack_c = FUN_0040cc00(0,0x3e19999a);
    *(uint *)(param_1 + 0x3640) = uStack_c;
  }
  if (*(int *)(param_1 + 0x678) != 3) {
    if (*(int *)(param_1 + 0x2330) == 0) {
      return;
    }
    FUN_00408b40(param_1,param_1 + 0x3628);
    uStack_24 = uStack_18;
    auStack_38[(uint)bVar6 * -2 + 6] = auStack_38[(uint)bVar6 * -2 + 9];
    auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    if ((uint *)(param_1 + 0x680) != auStack_38 + 5) {
      *(uint *)(param_1 + 0x680) = uStack_24;
      *(uint *)(param_1 + 0x684) = uStack_20;
      *(uint *)(param_1 + 0x688) = uStack_1c;
    }
    FUN_005b5760(auStack_9c,&DAT_02c8af28,param_1 + 0x3634);
    FUN_005b5760(auStack_6c,&DAT_02c8af28,param_1 + 0x30);
    FUN_005b5200(auStack_9c,auStack_6c);
    puVar4 = (uint *)&stack0xffffff04;
    puVar5 = (uint *)&stack0xffffff34;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    FUN_005b5930(&stack0xffffff34);
    auStack_38[2] = uStack_3c;
    auStack_38[(uint)bVar6 * -2 + 3] = auStack_38[(uint)bVar6 * -2];
    auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         auStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    FUN_0045f3e0(param_1 + 0x68c,auStack_38 + 2);
    FUN_005518e0(0x01E82168,param_1 + 0x67c);
    return;
  }
  iVar3 = param_1 + 0x3644;
  FUN_0045e970(iVar3,param_1 + 0x20);
  uVar2 = FUN_005c084c();
  *(uint *)(param_1 + 0x3680) = uVar2 & 0x7fff;
  *(char *)(param_1 + 0x3660) = (char)((int)(uVar2 & 0x7fff) >> 10);
  FUN_0045e9c0(iVar3,0x40000000);
  uVar1 = 0x01E82168;
  *(uint *)(param_1 + 0x3664) = 0;
  FUN_00551960(uVar1,iVar3);
  return;
}
