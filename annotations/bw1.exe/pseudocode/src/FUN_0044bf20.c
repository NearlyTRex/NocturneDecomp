// Name: FUN_0044bf20
// Address: 0044bf20
// Address Range: [[0044bf20, 0044c21d]]
// Convention: unknown
// Signature: int FUN_0044bf20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044bf20(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint auStack_70 [6];
  uint auStack_58 [6];
  uint auStack_40 [6];
  uint auStack_28 [6];
  int iStack_10;
  
  bVar9 = 0;
  FUN_004087b0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar7 = auStack_70;
  puVar8 = auStack_58;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  iStack_10 = FUN_004207b0(auStack_58);
  uVar2 = DAT_00612560;
  if (iStack_10 == 0) goto LAB_0044c20a;
  *(uint *)(param_1 + 0x65b30) = 1;
  iVar3 = FUN_00483e60(uVar2);
  if (((iVar3 != 0) && (*(int *)(param_1 + 0x180) != 0)) && (*(int *)(param_1 + 0x65b34) == 0)) {
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1);
    puVar7 = auStack_40;
    puVar8 = auStack_28;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    FUN_00421670(auStack_28);
    FUN_004087f0(param_1);
    return 1;
  }
  FUN_00483de0(DAT_00612560,*(uint *)(param_1 + 0x17c));
  iVar3 = 0;
  FUN_00484f00(DAT_00612560,param_1 + 0x164);
  pfVar5 = (float *)(param_1 + 0x208);
  piVar4 = (int *)(param_1 + 0x1c734);
  if (0 < *(int *)(param_1 + 0x204)) {
    do {
      *piVar4 = (int)ROUND(*pfVar5 * _DAT_005fe490);
      piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_005fe490);
      piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_005fe490);
      iVar3 = iVar3 + 1;
      pfVar5 = pfVar5 + 0x1d;
      piVar4 = piVar4 + 3;
    } while (iVar3 < *(int *)(param_1 + 0x204));
  }
  FUN_00553140(0x01E82168,*(uint *)(param_1 + 0x204),(int *)(param_1 + 0x1c734));
  FUN_00483d80(DAT_00612560,1);
  bVar1 = 0 < _DAT_01c51d34;
  if (*(int *)(param_1 + 0x180) == 0) {
    bVar1 = true;
LAB_0044c074:
    iVar3 = param_1 + 0x1f614;
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x204),
                 *(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2,iVar3,
                 param_1 + 0x1c734,4,0);
    if (*(int *)(param_1 + 0x17c) < 0xfde9) {
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2;
          iVar6 = iVar6 + 1) {
        FUN_00483120(DAT_00612560,iVar3);
        iVar3 = iVar3 + 0x48;
      }
    }
    else {
      FUN_005551f0(0x01E82168,iVar3,*(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2,
                   0xffffffff);
    }
  }
  else if (_DAT_01c51d34 < 0) goto LAB_0044c074;
  if (bVar1) {
    iVar3 = param_1 + 0x42894;
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0x204),
                 *(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2,iVar3,
                 param_1 + 0x1c734,4,0);
    if (*(int *)(param_1 + 0x17c) < 0xfde9) {
      for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2;
          iVar6 = iVar6 + 1) {
        FUN_00483120(DAT_00612560,iVar3);
        iVar3 = iVar3 + 0x48;
      }
    }
    else {
      FUN_005551f0(0x01E82168,iVar3,*(int *)(param_1 + 0x1c72c) * *(int *)(param_1 + 0x1c730) * 2,
                   0xffffffff);
    }
  }
  FUN_00483d80(DAT_00612560,0);
LAB_0044c20a:
  FUN_004087f0(param_1);
  return iStack_10;
}
