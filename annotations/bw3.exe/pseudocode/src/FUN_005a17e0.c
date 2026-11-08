// Name: FUN_005a17e0
// Address: 005a17e0
// Address Range: [[005a17e0, 005a196d]]
// Convention: unknown
// Signature: undefined4 FUN_005a17e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005a17e0(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint auStack_40 [6];
  uint auStack_28 [6];
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x33fa8) != 0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0x33fc8)) {
    if (*(int *)(param_1 + 0x33fc4) == 0) {
      fVar9 = ((float10)*(float *)(param_1 + 0x33fc8) / (float10)*(float *)(param_1 + 0x206c4)) *
              (float10)_DAT_005da636;
    }
    else {
      fVar9 = ((float10)1 -
              (float10)*(float *)(param_1 + 0x33fc8) / (float10)*(float *)(param_1 + 0x206c4)) *
              (float10)_DAT_005da63e;
    }
    FUN_005a3120();
    *(int *)(param_1 + 0x33fcc) = (int)ROUND(fVar9);
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x2f08)) {
      fVar1 = (float)_DAT_005da646;
      fVar2 = (float)_DAT_005da64e;
      iVar4 = param_1;
      do {
        iVar5 = iVar5 + 1;
        *(float *)(*(int *)(iVar4 + 0x309c) + 0x37b18) =
             ((float)*(int *)(param_1 + 0x33fcc) + fVar2) * fVar1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < *(int *)(param_1 + 0x2f08));
    }
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar6 = auStack_40;
  puVar7 = auStack_28;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  iVar5 = FUN_0041daf0(auStack_28);
  uVar3 = DAT_005f2afc;
  if (iVar5 != 0) {
    *(uint *)(param_1 + 0x27bc) = 1;
    FUN_0046d4c0(uVar3,*(uint *)(param_1 + 0x33fcc));
    FUN_0046d4b0(DAT_005f2afc,0);
    FUN_0046e120(DAT_005f2afc,1);
    FUN_0054e3a0(param_1 + 0x158,0xffffffff,0x2e7,1,0);
    FUN_0046e4e0(DAT_005f2afc);
    if (_DAT_01d8e40c != 0) {
      FUN_004fcdc0(param_1 + 0x158,param_1);
    }
  }
  FUN_00408830(param_1);
  return 1;
}
