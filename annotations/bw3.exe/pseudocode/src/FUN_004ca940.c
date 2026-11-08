// Name: FUN_004ca940
// Address: 004ca940
// Address Range: [[004ca940, 004cab3a]]
// Convention: unknown
// Signature: void FUN_004ca940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca940(int param_1)

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
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = FUN_0041daf0(local_48);
  if (iVar2 == 0) {
    FUN_00408830(param_1);
    return;
  }
  iVar2 = FUN_0046d540(DAT_005f2afc);
  if (iVar2 == 0) {
    FUN_0046e5e0(DAT_005f2afc,param_1 + 0x3a4);
  }
  else {
    FUN_0046d520(DAT_005f2afc,0);
    FUN_0046e5e0(DAT_005f2afc,param_1 + 0x3a4);
    FUN_0046d520(DAT_005f2afc,1);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb64)) {
    pfVar7 = (float *)(param_1 + 0x3bc);
    iVar4 = 0;
    do {
      iStack_18 = (int)ROUND(*pfVar7 * _DAT_005e0bc0);
      iStack_14 = (int)ROUND(pfVar7[1] * _DAT_005e0bc0);
      iStack_10 = (int)ROUND(pfVar7[2] * _DAT_005e0bc0);
      FUN_005632a3(*DAT_005f2afc + iVar4,&iStack_18);
      piVar1 = DAT_005f2afc;
      *(uint *)(*DAT_005f2afc + 0x20 + iVar4) = 0xffff;
      *(uint *)(iVar4 + 0x24 + *piVar1) = 0xffff;
      *(uint *)(iVar4 + 0x28 + *piVar1) = 0xffff;
      iVar2 = iVar2 + 1;
      pfVar7 = pfVar7 + 3;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 0xb64));
  }
  FUN_0046d4c0(DAT_005f2afc,*(uint *)(param_1 + 0x1ac));
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xb68)) {
    iVar4 = param_1 + 0x6dc;
    iVar5 = param_1;
    do {
      *(uint *)(iVar5 + 0x6e4) = 0;
      *(uint *)(iVar5 + 0x6e8) = 0;
      piVar1 = DAT_005f2afc;
      *(uint *)(iVar5 + 0x6ec) = 0;
      *(uint *)(iVar5 + 0x6f0) = 0;
      FUN_0046bf90(piVar1,iVar4);
      iVar5 = iVar5 + 0x48;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar2 < *(int *)(param_1 + 0xb68));
  }
  FUN_00408830(param_1);
  return;
}
