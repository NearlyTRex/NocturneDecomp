// Name: FUN_00587400
// Address: 00587400
// Address Range: [[00587400, 00587645]]
// Convention: unknown
// Signature: int FUN_00587400(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00587400(int param_1)

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
  iVar3 = FUN_0046b960(DAT_0060b280);
  if (iVar3 == 0) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar6 = auStack_20;
    puVar8 = auStack_38;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iStack_8 = FUN_0041a840(auStack_38);
    if (iStack_8 != 0) {
      FUN_0046b8e0(DAT_0060b280,*(uint *)(param_1 + 0x2c0));
      FUN_0046b8d0(DAT_0060b280,0);
      iVar3 = 0;
      FUN_0046ca00(DAT_0060b280,*(int *)(param_1 + 0x2b384) * 0x18 + 0x61e704);
      if (0 < *(int *)(param_1 + 0x3f4)) {
        piVar4 = (int *)0x265cc48;
        pfVar5 = (float *)(param_1 + 0x3f8);
        do {
          *piVar4 = (int)ROUND(*pfVar5 * _DAT_005fdca0);
          piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_005fdca0);
          piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_005fdca0);
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)(param_1 + 0x3f4));
      }
      iVar3 = 0;
      FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0x3f4),0x265cc48);
      if (0 < *(int *)(param_1 + 0x3f4)) {
        iVar7 = param_1 + 0x404;
        iVar9 = 0;
        do {
          FUN_00531a90(0x01E661B8,iVar7,&DAT_0265370c,iVar3);
          iVar1 = *DAT_0060b280;
          lVar2 = (longlong)(*(int *)(param_1 + 1000) << 8) *
                  (longlong)*(int *)(iVar1 + 0x20 + iVar9);
          *(uint *)(iVar1 + 0x20 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(*(int *)(param_1 + 0x3ec) << 8) *
                  (longlong)*(int *)(iVar1 + 0x24 + iVar9);
          *(uint *)(iVar1 + 0x24 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          piVar4 = (int *)(iVar1 + 0x28 + iVar9);
          iVar9 = iVar9 + 0x30;
          lVar2 = (longlong)(*(int *)(param_1 + 0x3f0) << 8) * (longlong)*piVar4;
          *(uint *)(iVar1 + -8 + iVar9) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar3 = iVar3 + 1;
          iVar7 = iVar7 + 0x20;
        } while (iVar3 < *(int *)(param_1 + 0x3f4));
      }
      iVar3 = param_1 + 0x8104;
      if (*(int *)(param_1 + 0x2c0) < 0xfde9) {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x2b390)) {
          do {
            iVar7 = iVar7 + 1;
            FUN_00469d00(DAT_0060b280,iVar3,0x267);
            iVar3 = iVar3 + 0x48;
          } while (iVar7 < *(int *)(param_1 + 0x2b390));
        }
      }
      else {
        FUN_00533f40(0x01E661B8,iVar3,*(uint *)(param_1 + 0x2b390),0xffffffff);
      }
      FUN_0046b880(DAT_0060b280,0);
    }
    FUN_00408a10(param_1);
    return iStack_8;
  }
  return 0;
}
