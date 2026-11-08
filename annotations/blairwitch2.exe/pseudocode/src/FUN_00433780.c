// Name: FUN_00433780
// Address: 00433780
// Address Range: [[00433780, 00433894]]
// Convention: unknown
// Signature: uint FUN_00433780(byte *param_1,int param_2,int *param_3)

#include "nocturne.h"

uint FUN_00433780(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)param_1;
  if (param_2 < iVar3) {
    uVar4 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> ((byte)param_2 & 0x1f);
    *(int *)param_1 = *(int *)param_1 - param_2;
    return ~(-1 << ((byte)param_2 & 0x1f)) & uVar4;
  }
  if (param_2 == iVar3) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar4 = *(uint *)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return uVar4;
  }
  bVar1 = *param_1;
  param_2 = param_2 - iVar3;
  uVar4 = *(uint *)(param_1 + 4);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar4 = ~(-1 << (bVar1 & 0x1f)) & uVar4;
  for (; 7 < param_2; param_2 = param_2 + -8) {
    uVar2 = (**(code **)(*param_3 + 4))(param_3);
    if ((int)uVar2 < 0) goto LAB_00433842;
    uVar4 = uVar4 | uVar2 << ((byte)iVar3 & 0x1f);
    iVar3 = iVar3 + 8;
  }
  if (param_2 < 1) {
    return uVar4;
  }
  uVar2 = (**(code **)(*param_3 + 4))(param_3);
  if (-1 < (int)uVar2) {
    *(uint *)(param_1 + 4) = uVar2;
    uVar2 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 4) = uVar2 >> ((byte)param_2 & 0x1f);
    *(int *)param_1 = 8 - param_2;
    return uVar4 | (~(-1 << ((byte)param_2 & 0x1f)) & uVar2) << ((byte)iVar3 & 0x1f);
  }
LAB_00433842:
  *(uint *)(param_1 + 4) = uVar4;
  *(int *)param_1 = iVar3;
  return uVar2;
}
