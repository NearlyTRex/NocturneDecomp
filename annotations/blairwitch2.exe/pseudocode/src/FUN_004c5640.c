// Name: FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c583a]]
// Convention: unknown
// Signature: void FUN_004c5640(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5640(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  uint local_48 [6];
  uint local_30 [6];
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar8 = 0;
  FUN_004089d0(param_1);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1,0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = FUN_0041a840(local_48);
  if (iVar2 == 0) {
    FUN_00408a10(param_1);
    return;
  }
  iVar2 = FUN_0046b960(DAT_0060b280);
  if (iVar2 == 0) {
    FUN_0046ca00(DAT_0060b280,param_1 + 0x4d0);
  }
  else {
    FUN_0046b940(DAT_0060b280,0);
    FUN_0046ca00(DAT_0060b280,param_1 + 0x4d0);
    FUN_0046b940(DAT_0060b280,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc90)) {
    pfVar7 = (float *)(param_1 + 0x4e8);
    iVar4 = 0;
    do {
      iStack_18 = (int)ROUND(*pfVar7 * _DAT_005f7a60);
      iStack_14 = (int)ROUND(pfVar7[1] * _DAT_005f7a60);
      iStack_10 = (int)ROUND(pfVar7[2] * _DAT_005f7a60);
      FUN_0055d723(*DAT_0060b280 + iVar4,&iStack_18);
      piVar1 = DAT_0060b280;
      *(uint *)(*DAT_0060b280 + 0x20 + iVar4) = 0xffff;
      *(uint *)(iVar4 + 0x24 + *piVar1) = 0xffff;
      *(uint *)(iVar4 + 0x28 + *piVar1) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar7 = pfVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0xc90));
  }
  FUN_0046b8e0(DAT_0060b280,*(uint *)(param_1 + 0x2d8));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc94)) {
    iVar4 = param_1 + 0x808;
    iVar5 = param_1;
    do {
      *(uint *)(iVar5 + 0x810) = 0;
      *(uint *)(iVar5 + 0x814) = 0;
      piVar1 = DAT_0060b280;
      *(uint *)(iVar5 + 0x818) = 0;
      *(uint *)(iVar5 + 0x81c) = 0;
      FUN_0046a3a0(piVar1,iVar4);
      iVar5 = iVar5 + 0x48;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar2 < *(int *)(param_1 + 0xc94));
  }
  FUN_00408a10(param_1);
  return;
}
