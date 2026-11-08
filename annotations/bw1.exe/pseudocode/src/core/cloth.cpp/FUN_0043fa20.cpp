// Name: FUN_0043fa20
// Address: 0043fa20
// Address Range: [[0043fa20, 0043fbcb]]
// Convention: unknown
// Signature: void FUN_0043fa20(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043fa20(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  uint auStackY_101c [988];
  byte local_a0 [48];
  uint local_70 [12];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint auStack_30 [5];
  int local_1c;
  int local_18;
  float local_14;
  
  bVar8 = 0;
  iVar1 = FUN_00569f30(param_3);
  iVar4 = param_1 + 0x37b50 + param_2 * 0xac;
  local_1c = iVar1;
  uVar2 = FUN_005634f0(iVar1,iVar4,1);
  *(uint *)(iVar4 + 0x44) = 0;
  local_18 = -1;
  *(uint *)(iVar4 + 0x40) = uVar2;
  iVar6 = 0;
  if (0 < *(int *)(iVar1 + 0x1de78)) {
    pfVar3 = (float *)(param_3 + 0x58);
    do {
      if ((*(int *)(iVar4 + 0x40) == *(int *)(iVar1 + 0x1de9c)) &&
         (local_14 = SQRT(pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]),
         *(float *)(iVar4 + 0x44) < local_14)) {
        *(float *)(iVar4 + 0x44) = local_14;
        local_18 = iVar6;
      }
      iVar1 = iVar1 + 0x24;
      iVar6 = iVar6 + 1;
      pfVar3 = pfVar3 + 3;
    } while (iVar6 < *(int *)(local_1c + 0x1de78));
  }
  if (local_18 < 0) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0x2bf;
    FUN_005030e0("Can't orient bone with no children!");
  }
  FUN_005a7520(local_18 * 0xc + param_3 + 0x58);
  puVar5 = auStack_30 + 2;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  auStack_30[2] = local_34;
  auStack_30[(uint)bVar8 * -2 + 3] = auStack_30[(uint)bVar8 * -2];
  auStack_30[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       auStack_30[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  FUN_005b5620(iVar4 + 0x48,&local_40,puVar5);
  FUN_005b5620(local_a0,iVar4 + 0x1c,iVar4 + 0x28);
  FUN_005b5200(iVar4 + 0x48,local_a0);
  puVar5 = local_70;
  puVar7 = (uint *)(iVar4 + 0x48);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  *(float *)(iVar4 + 0x38) = 1.0 / *(float *)(iVar4 + 0x14);
  *(float *)(iVar4 + 0x3c) = 1.0 / *(float *)(iVar4 + 0x18);
  if (*(float *)(iVar4 + 0x34) <= 0.0) {
    return;
  }
  *(uint *)(iVar4 + 0x44) = *(uint *)(iVar4 + 0x34);
  return;
}
