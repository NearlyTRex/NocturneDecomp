// Name: FUN_004e1fb0
// Address: 004e1fb0
// Address Range: [[004e1fb0, 004e2168]]
// Convention: unknown
// Signature: void FUN_004e1fb0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1fb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar9 = 0;
  if (*(int *)(param_1 + 0x370) == 0) {
    if (((param_2 != 0) && (*(int *)(param_1 + 0x180) != 0)) && (*(int *)(param_1 + 0x1e8) != 0)) {
      FUN_004e1db0(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)(param_1 + 0xb3c) != 0)) {
    *(uint *)(param_1 + 0xb3c) = 0;
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar6 = auStack_24;
    puVar8 = auStack_3c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    FUN_004207b0(auStack_3c);
    if (*(int *)(param_1 + 0x180) == 0) {
      iVar2 = param_1 + 0x164;
    }
    else {
      iVar2 = param_1 + 0x374;
    }
    FUN_00484f00(DAT_00612560,iVar2);
    pfVar3 = (float *)(param_1 + 0x38c);
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 0x4b8);
    if (0 < *(int *)(param_1 + 0xb34)) {
      do {
        *piVar4 = (int)ROUND(*pfVar3 * _DAT_00601450);
        piVar4[1] = (int)ROUND(pfVar3[1] * _DAT_00601450);
        piVar4[2] = (int)ROUND(pfVar3[2] * _DAT_00601450);
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
        piVar4 = piVar4 + 3;
      } while (iVar2 < *(int *)(param_1 + 0xb34));
    }
    iVar2 = 0;
    FUN_00553140(0x01E82168,*(uint *)(param_1 + 0xb34),(int *)(param_1 + 0x4b8));
    if (0 < *(int *)(param_1 + 0xb38)) {
      iVar7 = param_1 + 0x6ac;
      iVar5 = param_1;
      do {
        *(uint *)(iVar5 + 0x6b4) = 0;
        uVar1 = DAT_00612560;
        *(uint *)(iVar5 + 0x6b8) = 0;
        iVar2 = iVar2 + 1;
        *(uint *)(iVar5 + 0x6bc) = 0;
        *(uint *)(iVar5 + 0x6c0) = 0;
        iVar5 = iVar5 + 0x48;
        FUN_00482210(uVar1,iVar7,0xc1);
        iVar7 = iVar7 + 0x48;
      } while (iVar2 < *(int *)(param_1 + 0xb38));
    }
    FUN_004087f0(param_1);
  }
  return;
}
