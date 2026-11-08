// Name: FUN_00464c10
// Address: 00464c10
// Address Range: [[00464c10, 00464cc7]]
// Convention: unknown
// Signature: void FUN_00464c10(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464c10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *unaff_ESI;
  byte bVar5;
  float10 fVar6;
  float afStackY_1008 [1013];
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  int local_14;
  int local_10;
  
  bVar5 = 0;
  iVar3 = param_1 + 0x158;
  iVar1 = FUN_004625a0(iVar3);
  iVar1 = *(int *)(iVar1 + 0x10c);
  iVar2 = FUN_004625a0(iVar3);
  local_10 = *(int *)(iVar2 + 0x100) + -1;
  fVar6 = (float10)local_10 * (float10)*(float *)(param_1 + 0x9ac);
  FUN_005a3120(iVar3);
  local_14 = (int)ROUND(fVar6);
  iVar3 = FUN_004625a0();
  piVar4 = (int *)((*(int *)(param_1 + 0xa48) + *(int *)(iVar3 + 0x104) * local_14) * 0xc + iVar1);
  local_2c = (float)*piVar4 * _DAT_005deb98;
  local_28 = (float)piVar4[1] * _DAT_005deb98;
  local_24 = (float)piVar4[2] * _DAT_005deb98;
  FUN_00408b80(param_1,&stack0xffffffd4);
  *unaff_ESI = local_20;
  unaff_ESI[(uint)bVar5 * -2 + 1] =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar5 * 0xfffffffe * 4);
  (unaff_ESI + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       *(uint *)(&stack0xffffffe8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  return;
}
