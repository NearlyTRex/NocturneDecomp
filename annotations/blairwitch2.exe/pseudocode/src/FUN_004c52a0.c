// Name: FUN_004c52a0
// Address: 004c52a0
// Address Range: [[004c52a0, 004c5464]]
// Convention: unknown
// Signature: undefined4 FUN_004c52a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004c52a0(int param_1)

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
  if ((((*(int *)(param_1 + 0x4cc) == 0) && (*(int *)(param_1 + 0xfc) == 0)) &&
      (64999 < *(int *)(param_1 + 0x2d8))) &&
     ((*(int *)(param_1 + 0x2dc) == 0 && (iVar4 = FUN_0046b960(DAT_0060b280), iVar4 == 0)))) {
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar8 = auStack_28;
    puVar10 = auStack_40;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    uStack_10 = FUN_0041a840(auStack_40);
    iVar4 = 0;
    FUN_0046ca00(DAT_0060b280,param_1 + 0x2c0);
    pfVar5 = (float *)(param_1 + 0x4e8);
    piVar1 = (int *)(param_1 + 0x614);
    piVar6 = piVar1;
    if (0 < *(int *)(param_1 + 0xc90)) {
      do {
        *piVar6 = (int)ROUND(*pfVar5 * _DAT_005f7a60);
        piVar6[1] = (int)ROUND(pfVar5[1] * _DAT_005f7a60);
        piVar6[2] = (int)ROUND(pfVar5[2] * _DAT_005f7a60);
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
        piVar6 = piVar6 + 3;
      } while (iVar4 < *(int *)(param_1 + 0xc90));
    }
    FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0xc90),piVar1);
    lVar2 = (longlong)(0xffff - _DAT_01c38aec) * (longlong)*(int *)(param_1 + 0x2d8);
    FUN_0046b8e0(DAT_0060b280,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    iVar4 = param_1 + 0x808;
    iVar9 = 0;
    FUN_00532190(0x01E661B8,*(uint *)(param_1 + 0xc90),*(uint *)(param_1 + 0xc94),
                 iVar4,piVar1,4,0);
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 0xc94)) {
      do {
        uVar3 = DAT_0060b280;
        *(uint *)(iVar7 + 0x810) = 0;
        *(uint *)(iVar7 + 0x814) = 0;
        iVar9 = iVar9 + 1;
        *(uint *)(iVar7 + 0x818) = 0;
        *(uint *)(iVar7 + 0x81c) = 0;
        FUN_0046ac20(uVar3,iVar4);
        iVar4 = iVar4 + 0x48;
        iVar7 = iVar7 + 0x48;
      } while (iVar9 < *(int *)(param_1 + 0xc94));
    }
    FUN_00408a10(param_1);
    return uStack_10;
  }
  return 0;
}
