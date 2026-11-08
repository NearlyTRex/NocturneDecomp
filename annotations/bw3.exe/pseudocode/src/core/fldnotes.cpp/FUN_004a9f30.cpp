// Name: FUN_004a9f30
// Address: 004a9f30
// Address Range: [[004a9f30, 004aa0ae]]
// Convention: unknown
// Signature: int FUN_004a9f30(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a9f30(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  FUN_0040d460(param_1 + 0x70,param_1 + 4,*(uint *)(param_1 + 0x68),
               *(uint *)(param_1 + 0x6c));
  iVar1 = FUN_005a3e50(*(uint *)(param_1 + 0x84),
                       *(int *)(param_1 + 0x7c) * *(int *)(param_1 + 0x80));
  *(int *)(param_1 + 0x84) = iVar1;
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x77a;
    FUN_004e4330("Out of memory!");
  }
  uVar3 = *(int *)(param_1 + 0x80) * *(int *)(param_1 + 0x7c);
  puVar6 = *(uint **)(param_1 + 0x74);
  puVar7 = *(uint **)(param_1 + 0x84);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(byte *)puVar7 = *(byte *)puVar6;
    puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
    puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
  }
  iVar1 = *(int *)(param_1 + 0x68) / 2;
  iVar2 = *(int *)(param_1 + 0x6c) / 2;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  FUN_0040d320(param_1 + 0x88,iVar1,iVar2);
  iVar1 = FUN_0040dbb0(param_1 + 0x88,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    iVar5 = param_1 + 0xa0;
    do {
      iVar1 = *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x6c);
      iVar2 = iVar2 + 1;
      *(float *)(iVar5 + 0x84) =
           SQRT(((float)(*(int *)(param_1 + 0x94) * *(int *)(param_1 + 0x98)) *
                (ABS((float)((*(int *)(iVar5 + 100) - *(int *)(iVar5 + 0x6c)) *
                            (*(int *)(iVar5 + 0x68) - *(int *)(iVar5 + 0x70)))) /
                ABS((*(float *)(iVar5 + 0x78) - *(float *)(iVar5 + 0x80)) *
                    (*(float *)(iVar5 + 0x74) - *(float *)(iVar5 + 0x7c))))) / (float)iVar1);
      iVar5 = iVar5 + 0x88;
    } while (iVar2 < *(int *)(param_1 + 0x9c));
  }
  return iVar1;
}
