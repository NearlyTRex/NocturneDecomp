// Name: FUN_004b8ac0
// Address: 004b8ac0
// Address Range: [[004b8ac0, 004b8c81]]
// Convention: unknown
// Signature: void FUN_004b8ac0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8ac0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStackY_1020 [1004];
  uint auStack_68 [6];
  uint auStack_50 [6];
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  int iStack_20;
  float *pfStack_1c;
  int iStack_18;
  
  uVar2 = DAT_00612560;
  bVar6 = 0;
  *(uint *)(param_1 + 0x2a0) = 0;
  *(uint *)(param_1 + 0x298) = 0;
  iVar1 = FUN_00483e60(uVar2);
  if ((iVar1 == 0) && (param_2 != 0)) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar4 = auStack_50;
    puVar5 = auStack_68;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    uVar2 = FUN_004207b0(auStack_68);
    *(uint *)(param_1 + 0x290) = uVar2;
    FUN_004087f0(param_1);
    if ((((*(int *)(param_1 + 0x290) != 0) &&
         (1.0 < SQRT(*(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160) +
                     *(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                     *(float *)(param_1 + 0x15c) * *(float *)(param_1 + 0x15c)))) &&
        (0.0 < *(float *)(param_1 + 0x1ac))) && (*(int *)(param_1 + 0x1a8) == 0)) {
      pfStack_1c = (float *)(param_1 + 0x20);
      iVar1 = 0;
      iStack_20 = 0;
      for (iStack_18 = 0; iStack_18 < *(int *)(0x01E82168 + 0x14d164); iStack_18 = iStack_18 + 1)
      {
        iVar3 = FUN_0040c600(*(uint *)(iVar1 + 0x14d168 + 0x01E82168),_DAT_01cc4148);
        if (iVar3 != 0) {
          afStack_34[2] = *pfStack_1c - *(float *)(iVar3 + 0x20);
          afStack_34[3] = pfStack_1c[1] - *(float *)(iVar3 + 0x24);
          fStack_24 = pfStack_1c[2] - *(float *)(iVar3 + 0x28);
          fStack_38 = afStack_34[2];
          *(float *)((int)afStack_34 + (uint)bVar6 * 0xfffffff8) =
               afStack_34[(uint)bVar6 * 0xfffffffe + 3];
          afStack_34[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
               afStack_34[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
          if ((SQRT(afStack_34[1] * afStack_34[1] +
                    fStack_38 * fStack_38 + afStack_34[0] * afStack_34[0]) < (float)_DAT_005df6df)
             && (*(int *)(iVar3 + 0x2a0) == 1)) {
            return;
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (iStack_20 == 0) {
        *(uint *)(param_1 + 0x2a0) = 1;
        return;
      }
    }
  }
  return;
}
