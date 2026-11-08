// Name: FUN_00415570
// Address: 00415570
// Address Range: [[00415570, 004156cb]]
// Convention: unknown
// Signature: void FUN_00415570(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415570(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  float afStackY_102c [1013];
  float local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  float local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  
  bVar4 = 0;
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
        iVar3 = local_1c * 0x2b0 + local_20;
        FUN_00408b80(param_1,iVar3);
        uVar2 = local_38;
        *(uint *)((int)&stack0xffffffc0 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffcc + (uint)bVar4 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
             *(uint *)(&stack0xffffffd0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
        *local_18 = uVar2;
        local_18[1] = local_40;
        local_18[2] = local_3c;
        local_48 = 1.0;
        if (*(float *)(param_1 + 0xccc) < (float)_DAT_005b6c72) {
          local_48 = *(float *)(param_1 + 0xccc) * (float)_DAT_005b6c6a;
        }
        local_24 = local_48 * (float)_DAT_005b6c5a;
        fVar1 = (float)_DAT_005b6c62;
        *(float *)(iVar3 + 0x164) = local_24;
        *(float *)(iVar3 + 0x168) = local_48 * fVar1;
        *(float *)(iVar3 + 0x16c) = local_24;
        FUN_004a5b10(iVar3 + 0xc,param_2);
        local_18 = local_18 + 0xac;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x74c));
    }
  }
  return;
}
