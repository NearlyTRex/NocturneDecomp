// Name: FUN_005787f0
// Address: 005787f0
// Address Range: [[005787f0, 00578a68]]
// Convention: unknown
// Signature: int FUN_005787f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005787f0(int param_1)

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
  iVar3 = FUN_0046d540(DAT_005f2afc);
  if (iVar3 == 0) {
    FUN_004087f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar6 = auStack_38;
    puVar8 = auStack_20;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
    }
    iStack_8 = FUN_0041daf0(auStack_20);
    if (iStack_8 != 0) {
      FUN_0046d4c0(DAT_005f2afc,*(uint *)(param_1 + 0x164));
      FUN_0046d4b0(DAT_005f2afc,0);
      if (*(int *)(param_1 + 0x298) == 0) {
        iVar3 = *(int *)(param_1 + 0x2b22c) * 0x18 + 0x606e84;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x2b22c) * 0x18 + 0x607004;
      }
      FUN_0046e5e0(DAT_005f2afc,iVar3);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x29c)) {
        piVar4 = (int *)0x2d06e08;
        pfVar5 = (float *)(param_1 + 0x2a0);
        do {
          *piVar4 = (int)ROUND(*pfVar5 * _DAT_005e5ec0);
          piVar4[1] = (int)ROUND(pfVar5[1] * _DAT_005e5ec0);
          piVar4[2] = (int)ROUND(pfVar5[2] * _DAT_005e5ec0);
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 8;
          piVar4 = piVar4 + 3;
        } while (iVar3 < *(int *)(param_1 + 0x29c));
      }
      iVar3 = 0;
      FUN_00538ad0(0x01ED78C8,*(uint *)(param_1 + 0x29c),0x2d06e08);
      if (0 < *(int *)(param_1 + 0x29c)) {
        iVar7 = param_1 + 0x2ac;
        iVar9 = 0;
        do {
          FUN_005386d0(0x01ED78C8,iVar7,&DAT_02cfd900,iVar3);
          iVar1 = *DAT_005f2afc;
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
        } while (iVar3 < *(int *)(param_1 + 0x29c));
      }
      iVar3 = param_1 + 0x7fac;
      if (*(int *)(param_1 + 0x164) < 0xfde9) {
        iVar7 = 0;
        if (0 < *(int *)(param_1 + 0x2b238)) {
          do {
            iVar7 = iVar7 + 1;
            FUN_0046b8f0(DAT_005f2afc,iVar3,0x267);
            iVar3 = iVar3 + 0x48;
          } while (iVar7 < *(int *)(param_1 + 0x2b238));
        }
      }
      else {
        FUN_0053ab80(0x01ED78C8,iVar3,*(uint *)(param_1 + 0x2b238),0xffffffff);
      }
      FUN_0046d460(DAT_005f2afc,0);
    }
    FUN_00408830(param_1);
    return iStack_8;
  }
  return 0;
}
