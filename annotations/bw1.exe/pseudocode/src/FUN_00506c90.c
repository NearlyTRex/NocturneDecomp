// Name: FUN_00506c90
// Address: 00506c90
// Address Range: [[00506c90, 00506e16]]
// Convention: unknown
// Signature: void FUN_00506c90(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00506c90(uint param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte auStack_44 [4];
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar5 = 0;
  iStack_1c = (int)ROUND(*param_2 * _DAT_006036b0);
  iStack_18 = (int)ROUND(param_2[1] * _DAT_006036b0);
  iStack_14 = (int)ROUND(param_2[2] * _DAT_006036b0);
  FUN_0058043c(*DAT_00612560,&iStack_1c);
  piVar1 = DAT_00612560;
  puVar3 = (uint *)*DAT_00612560;
  puVar4 = (uint *)*DAT_00612560 + 0xc;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = (uint *)*piVar1;
  puVar4 = (uint *)*piVar1 + 0x18;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = (uint *)*piVar1;
  puVar4 = (uint *)*piVar1 + 0x24;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(int *)*piVar1 = *(int *)*piVar1 + 0x80;
  *(int *)(*piVar1 + 4) = *(int *)(*piVar1 + 4) + 0x80;
  *(int *)(*piVar1 + 0x30) = *(int *)(*piVar1 + 0x30) + -0x80;
  *(int *)(*piVar1 + 0x34) = *(int *)(*piVar1 + 0x34) + 0x80;
  *(int *)(*piVar1 + 0x60) = *(int *)(*piVar1 + 0x60) + -0x80;
  *(int *)(*piVar1 + 100) = *(int *)(*piVar1 + 100) + -0x80;
  *(int *)(*piVar1 + 0x90) = *(int *)(*piVar1 + 0x90) + 0x80;
  *(int *)(*piVar1 + 0x94) = *(int *)(*piVar1 + 0x94) + -0x80;
  *(uint *)(*piVar1 + 0x10) = 0x80000000;
  *(uint *)(*piVar1 + 0x40) = 0x80000000;
  *(uint *)(*piVar1 + 0x70) = 0x80000000;
  *(uint *)(*piVar1 + 0xa0) = 0x80000000;
  *(uint *)(*piVar1 + 0x18) = 0x80000;
  *(uint *)(*piVar1 + 0x1c) = 0xf80000;
  *(uint *)(*piVar1 + 0x48) = 0xf80000;
  *(uint *)(*piVar1 + 0x4c) = 0xf80000;
  *(uint *)(*piVar1 + 0x78) = 0xf80000;
  *(uint *)(*piVar1 + 0x7c) = 0x80000;
  *(uint *)(*piVar1 + 0xa8) = 0x80000;
  *(uint *)(*piVar1 + 0xac) = 0x80000;
  uStack_40 = 4;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_2c = 0;
  uStack_20 = 3;
  uStack_28 = 1;
  uStack_24 = 2;
  FUN_00482170(piVar1,auStack_44,99);
  return;
}
