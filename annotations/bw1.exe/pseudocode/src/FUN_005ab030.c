// Name: FUN_005ab030
// Address: 005ab030
// Address Range: [[005ab030, 005ab275]]
// Convention: unknown
// Signature: int FUN_005ab030(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ab030(int param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  byte bVar10;
  uint auStack_38 [6];
  uint auStack_20 [6];
  int iStack_8;
  
  bVar10 = 0;
  iVar3 = FUN_00483e60(DAT_00612560);
  if (iVar3 == 0) {
    FUN_004087b0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar6 = auStack_20;
    puVar8 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iStack_8 = FUN_004207b0(auStack_38);
    if (iStack_8 != 0) {
      FUN_00483de0(DAT_00612560,*(uint *)(param_1 + 0x164));
      FUN_00483dd0(DAT_00612560,0);
      iVar3 = 0;
      FUN_00484f00(DAT_00612560,*(int *)(param_1 + 0x2b228) * 0x18 + 0x625e74);
      if (0 < *(int *)(param_1 + 0x298)) {
        piVar4 = (int *)0x2c94468;
        pfVar5 = (float *)(param_1 + 0x29c);
        do {
          *piVar4 = (int)ROUND(*pfVar5 * _DAT_00607bf0);
          piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_00607bf0);
          piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_00607bf0);
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)(param_1 + 0x298));
      }
      iVar3 = 0;
      FUN_00553140(0x01E82168,*(uint *)(param_1 + 0x298),0x2c94468);
      if (0 < *(int *)(param_1 + 0x298)) {
        iVar7 = param_1 + 0x2a8;
        iVar9 = 0;
        do {
          FUN_00552d40(0x01E82168,iVar7,&DAT_02c8af28,iVar3);
          iVar1 = *DAT_00612560;
          lVar2 = (longlong)(*(int *)(param_1 + 0x28c) << 8) *
                  (longlong)*(int *)(iVar1 + 0x20 + iVar9);
          *(uint *)(iVar1 + 0x20 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(*(int *)(param_1 + 0x290) << 8) *
                  (longlong)*(int *)(iVar1 + 0x24 + iVar9);
          *(uint *)(iVar1 + 0x24 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          piVar4 = (int *)(iVar1 + 0x28 + iVar9);
          iVar9 = iVar9 + 0x30;
          lVar2 = (longlong)(*(int *)(param_1 + 0x294) << 8) * (longlong)*piVar4;
          *(uint *)(iVar1 + -8 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x20;
        } while (iVar3 < *(int *)(param_1 + 0x298));
      }
      iVar3 = param_1 + 0x7fa8;
      if (*(int *)(param_1 + 0x164) < 0xfde9) {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x2b234)) {
          do {
            iVar7 = iVar7 + 1;
            FUN_00482210(DAT_00612560,iVar3,0x267);
            iVar3 = iVar3 + 0x48;
          } while (iVar7 < *(int *)(param_1 + 0x2b234));
        }
      }
      else {
        FUN_005551f0(0x01E82168,iVar3,*(uint *)(param_1 + 0x2b234),0xffffffff);
      }
      FUN_00483d80(DAT_00612560,0);
    }
    FUN_004087f0(param_1);
    return iStack_8;
  }
  return 0;
}
