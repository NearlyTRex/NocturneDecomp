// Name: FUN_004ca770
// Address: 004ca770
// Address Range: [[004ca770, 004ca934]]
// Convention: unknown
// Signature: undefined4 FUN_004ca770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ca770(int param_1)

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
  if ((((*(int *)(param_1 + 0x3a0) == 0) && (*(int *)(param_1 + 0x1ac) != 0)) &&
      (*(int *)(param_1 + 0x1b0) == 0)) && (iVar4 = FUN_0046d540(DAT_005f2afc), iVar4 == 0)) {
    FUN_004087f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar8 = auStack_28;
    puVar10 = auStack_40;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    uStack_10 = FUN_0041daf0(auStack_40);
    iVar4 = 0;
    FUN_0046e5e0(DAT_005f2afc,param_1 + 0x164);
    pfVar5 = (float *)(param_1 + 0x3bc);
    piVar1 = (int *)(param_1 + 0x4e8);
    piVar6 = piVar1;
    if (0 < *(int *)(param_1 + 0xb64)) {
      do {
        *piVar6 = (int)ROUND(*pfVar5 * _DAT_005e0bc0);
        piVar6[1] = (int)ROUND(pfVar5[1] * _DAT_005e0bc0);
        piVar6[2] = (int)ROUND(pfVar5[2] * _DAT_005e0bc0);
        iVar4 = iVar4 + 1;
        pfVar5 = pfVar5 + 3;
        piVar6 = piVar6 + 3;
      } while (iVar4 < *(int *)(param_1 + 0xb64));
    }
    FUN_00538ad0(0x01ED78C8,*(uint *)(param_1 + 0xb64),piVar1);
    lVar2 = (longlong)(0xffff - _DAT_01c6e24c) * (longlong)*(int *)(param_1 + 0x1ac);
    FUN_0046d4c0(DAT_005f2afc,(uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    iVar4 = param_1 + 0x6dc;
    FUN_00538dd0(0x01ED78C8,*(uint *)(param_1 + 0xb64),*(uint *)(param_1 + 0xb68),
                 iVar4,piVar1,4,0);
    iVar9 = 0;
    iVar7 = param_1;
    if (0 < *(int *)(param_1 + 0xb68)) {
      do {
        uVar3 = DAT_005f2afc;
        *(uint *)(iVar7 + 0x6e4) = 0;
        *(uint *)(iVar7 + 0x6e8) = 0;
        iVar9 = iVar9 + 1;
        *(uint *)(iVar7 + 0x6ec) = 0;
        *(uint *)(iVar7 + 0x6f0) = 0;
        FUN_0046c800(uVar3,iVar4);
        iVar4 = iVar4 + 0x48;
        iVar7 = iVar7 + 0x48;
      } while (iVar9 < *(int *)(param_1 + 0xb68));
    }
    FUN_00408830(param_1);
    return uStack_10;
  }
  return 0;
}
