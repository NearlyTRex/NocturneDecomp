// Name: FUN_005474b0
// Address: 005474b0
// Address Range: [[005474b0, 0054761a]]
// Convention: unknown
// Signature: void FUN_005474b0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005474b0(int param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  byte bVar6;
  float afStackY_1018 [1016];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  bVar6 = 0;
  *(uint *)(param_1 + 0x22b0) = param_2;
  iVar1 = FUN_00547890(param_1);
  FUN_005037d0(param_1,iVar1);
  local_18 = *(int *)(iVar1 + 0x1d1f8);
  iVar4 = *(int *)(param_1 + 0x22b0);
  local_30 = *(float *)(iVar4 + 0x1744) * *(float *)(param_1 + 0x54);
  local_2c = *(float *)(iVar4 + 0x1748) * *(float *)(param_1 + 0x54);
  local_28 = *(float *)(iVar4 + 0x174c) * *(float *)(param_1 + 0x54);
  local_24 = local_30;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffd8 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  if ((float *)(param_1 + 0x508) != &stack0xffffffdc) {
    *(float *)(param_1 + 0x508) = local_24;
    *(uint *)(param_1 + 0x50c) = local_20;
    *(uint *)(param_1 + 0x510) = local_1c;
  }
  iVar4 = 0;
  if (0 < local_18) {
    pfVar5 = (float *)(param_1 + 0x54);
    local_14 = param_1;
    pfVar3 = (float *)(param_1 + 0x58);
    do {
      pfVar2 = (float *)FUN_00541620(*(uint *)(param_1 + 0x22b0),iVar4);
      if (pfVar3 != pfVar2) {
        *pfVar3 = *pfVar2;
        pfVar3[1] = pfVar2[1];
        pfVar3[2] = pfVar2[2];
      }
      *(uint *)(local_14 + 0x514) = *(uint *)(param_1 + 0x54);
      if (*(int *)(iVar1 + 0x1d21c) < 0) {
        *pfVar3 = *pfVar5 * *pfVar3;
        pfVar3[1] = *pfVar5 * pfVar3[1];
        pfVar3[2] = *pfVar5 * pfVar3[2];
      }
      iVar1 = iVar1 + 0x24;
      pfVar3 = pfVar3 + 3;
      local_14 = local_14 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_18);
  }
  FUN_00544db0(param_1);
  FUN_00547620(param_1);
  FUN_00544ee0(param_1);
  return;
}
