// Name: FUN_004e1be0
// Address: 004e1be0
// Address Range: [[004e1be0, 004e1da4]]
// Convention: unknown
// Signature: undefined4 FUN_004e1be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e1be0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  uint auStack_40 [6];
  uint auStack_28 [6];
  uint uStack_10;
  
  bVar11 = 0;
  if ((((*(int *)(param_1 + 0x370) == 0) && (*(int *)(param_1 + 0x17c) != 0)) &&
      (*(int *)(param_1 + 0x180) == 0)) && (iVar4 = FUN_00483e60(DAT_00612560), iVar4 == 0)) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar8 = auStack_28;
    puVar10 = auStack_40;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    uStack_10 = FUN_004207b0(auStack_40);
    iVar4 = 0;
    FUN_00484f00(DAT_00612560,param_1 + 0x164);
    pfVar5 = (float *)(param_1 + 0x38c);
    piVar1 = (int *)(param_1 + 0x4b8);
    piVar6 = piVar1;
    if (0 < *(int *)(param_1 + 0xb34)) {
      do {
        *piVar6 = (int)ROUND(*pfVar5 * _DAT_00601450);
        piVar6[1] = (int)ROUND(pfVar5[1] * _DAT_00601450);
        piVar6[2] = (int)ROUND(pfVar5[2] * _DAT_00601450);
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
        piVar6 = piVar6 + 3;
      } while (iVar4 < *(int *)(param_1 + 0xb34));
    }
    FUN_00553140(0x01E82168,*(uint *)(param_1 + 0xb34),piVar1);
    lVar2 = (longlong)(0xffff - _DAT_01c51cac) * (longlong)*(int *)(param_1 + 0x17c);
    FUN_00483de0(DAT_00612560,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    iVar4 = param_1 + 0x6ac;
    FUN_00553440(0x01E82168,*(uint *)(param_1 + 0xb34),*(uint *)(param_1 + 0xb38),
                 iVar4,piVar1,4,0);
    iVar9 = 0;
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 0xb38)) {
      do {
        uVar3 = DAT_00612560;
        *(uint *)(iVar7 + 0x6b4) = 0;
        *(uint *)(iVar7 + 0x6b8) = 0;
        iVar9 = iVar9 + 1;
        *(uint *)(iVar7 + 0x6bc) = 0;
        *(uint *)(iVar7 + 0x6c0) = 0;
        FUN_00483120(uVar3,iVar4);
        iVar4 = iVar4 + 0x48;
        iVar7 = iVar7 + 0x48;
      } while (iVar9 < *(int *)(param_1 + 0xb38));
    }
    FUN_004087f0(param_1);
    return uStack_10;
  }
  return 0;
}
