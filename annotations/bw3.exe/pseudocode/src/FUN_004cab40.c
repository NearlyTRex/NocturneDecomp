// Name: FUN_004cab40
// Address: 004cab40
// Address Range: [[004cab40, 004cacf8]]
// Convention: unknown
// Signature: void FUN_004cab40(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cab40(int param_1,int param_2)

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
  if (*(int *)(param_1 + 0x3a0) == 0) {
    if (((param_2 != 0) && (*(int *)(param_1 + 0x1b0) != 0)) && (*(int *)(param_1 + 0x218) != 0)) {
      FUN_004ca940(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)(param_1 + 0xb6c) != 0)) {
    *(uint *)(param_1 + 0xb6c) = 0;
    FUN_004087f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar6 = auStack_24;
    puVar8 = auStack_3c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    FUN_0041daf0(auStack_3c);
    if (*(int *)(param_1 + 0x1b0) == 0) {
      iVar2 = param_1 + 0x164;
    }
    else {
      iVar2 = param_1 + 0x3a4;
    }
    FUN_0046e5e0(DAT_005f2afc,iVar2);
    pfVar3 = (float *)(param_1 + 0x3bc);
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 0x4e8);
    if (0 < *(int *)(param_1 + 0xb64)) {
      do {
        *piVar4 = (int)ROUND(*pfVar3 * _DAT_005e0bc0);
        piVar4[1] = (int)ROUND(pfVar3[1] * _DAT_005e0bc0);
        piVar4[2] = (int)ROUND(pfVar3[2] * _DAT_005e0bc0);
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
        piVar4 = piVar4 + 3;
      } while (iVar2 < *(int *)(param_1 + 0xb64));
    }
    iVar2 = 0;
    FUN_00538ad0(0x01ED78C8,*(uint *)(param_1 + 0xb64),(int *)(param_1 + 0x4e8));
    if (0 < *(int *)(param_1 + 0xb68)) {
      iVar7 = param_1 + 0x6dc;
      iVar5 = param_1;
      do {
        *(uint *)(iVar5 + 0x6e4) = 0;
        uVar1 = DAT_005f2afc;
        *(uint *)(iVar5 + 0x6e8) = 0;
        iVar2 = iVar2 + 1;
        *(uint *)(iVar5 + 0x6ec) = 0;
        *(uint *)(iVar5 + 0x6f0) = 0;
        iVar5 = iVar5 + 0x48;
        FUN_0046b8f0(uVar1,iVar7,0xc1);
        iVar7 = iVar7 + 0x48;
      } while (iVar2 < *(int *)(param_1 + 0xb68));
    }
    FUN_00408830(param_1);
  }
  return;
}
