// Name: FUN_00419940
// Address: 00419940
// Address Range: [[00419940, 00419a9b]]
// Convention: unknown
// Signature: void FUN_00419940(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419940(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float afStackY_102c [1013];
  float local_48;
  uint local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  
  bVar3 = 0;
  if (*(int *)(param_1 + 0x74c) != 0) {
    fVar1 = *(float *)(param_1 + 0xccc) - param_2;
    *(float *)(param_1 + 0xccc) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x74c) = 0;
      *(uint *)(param_1 + 0xccc) = 0;
      return;
    }
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x74c)) {
      local_20 = param_1 + 0x750;
      local_18 = (uint *)(param_1 + 0x77c);
      do {
        iVar2 = local_1c * 0x2b0 + local_20;
        FUN_00408b40(param_1,iVar2);
        local_38 = local_44;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        *local_18 = local_38;
        local_18[1] = local_34;
        local_18[2] = local_30;
        local_48 = 1.0;
        if (*(float *)(param_1 + 0xccc) < (float)_DAT_005d44c9) {
          local_48 = *(float *)(param_1 + 0xccc) * (float)_DAT_005d44c1;
        }
        local_24 = local_48 * (float)_DAT_005d44b1;
        fVar1 = (float)_DAT_005d44b9;
        *(float *)(iVar2 + 0x164) = local_24;
        *(float *)(iVar2 + 0x168) = local_48 * fVar1;
        *(float *)(iVar2 + 0x16c) = local_24;
        FUN_004b7b90(iVar2 + 0xc,param_2);
        local_18 = local_18 + 0xac;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x74c));
    }
  }
  return;
}
