// Name: FUN_004c5840
// Address: 004c5840
// Address Range: [[004c5840, 004c59f8]]
// Convention: unknown
// Signature: void FUN_004c5840(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5840(int param_1,int param_2)

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
  if (*(int *)(param_1 + 0x4cc) == 0) {
    if (((param_2 != 0) && (*(int *)(param_1 + 0x2dc) != 0)) && (*(int *)(param_1 + 0x344) != 0)) {
      FUN_004c5640(param_1);
      return;
    }
  }
  else if ((param_2 != 0) || (*(int *)(param_1 + 0xc98) != 0)) {
    *(uint *)(param_1 + 0xc98) = 0;
    FUN_004089d0(param_1);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
    puVar6 = auStack_24;
    puVar8 = auStack_3c;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
      puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
    }
    FUN_0041a840(auStack_3c);
    if (*(int *)(param_1 + 0x2dc) == 0) {
      iVar2 = param_1 + 0x2c0;
    }
    else {
      iVar2 = param_1 + 0x4d0;
    }
    FUN_0046ca00(DAT_0060b280,iVar2);
    pfVar3 = (float *)(param_1 + 0x4e8);
    iVar2 = 0;
    piVar4 = (int *)(param_1 + 0x614);
    if (0 < *(int *)(param_1 + 0xc90)) {
      do {
        *piVar4 = (int)ROUND(*pfVar3 * _DAT_005f7a60);
        piVar4[1] = (int)ROUND(pfVar3[1] * _DAT_005f7a60);
        piVar4[2] = (int)ROUND(pfVar3[2] * _DAT_005f7a60);
        iVar2 = iVar2 + 1;
        pfVar3 = pfVar3 + 3;
        piVar4 = piVar4 + 3;
      } while (iVar2 < *(int *)(param_1 + 0xc90));
    }
    iVar2 = 0;
    FUN_00531e90(0x01E661B8,*(uint *)(param_1 + 0xc90),(int *)(param_1 + 0x614));
    if (0 < *(int *)(param_1 + 0xc94)) {
      iVar7 = param_1 + 0x808;
      iVar5 = param_1;
      do {
        *(uint *)(iVar5 + 0x810) = 0;
        uVar1 = DAT_0060b280;
        *(uint *)(iVar5 + 0x814) = 0;
        iVar2 = iVar2 + 1;
        *(uint *)(iVar5 + 0x818) = 0;
        *(uint *)(iVar5 + 0x81c) = 0;
        iVar5 = iVar5 + 0x48;
        FUN_00469d00(uVar1,iVar7,0xc1);
        iVar7 = iVar7 + 0x48;
      } while (iVar2 < *(int *)(param_1 + 0xc94));
    }
    FUN_00408a10(param_1);
  }
  return;
}
