// Name: FUN_004164b0
// Address: 004164b0
// Address Range: [[004164b0, 0041660b]]
// Convention: unknown
// Signature: void FUN_004164b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004164b0(int param_1,float param_2)

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
  if (*(int *)(param_1 + 0x8a8) != 0) {
    fVar1 = *(float *)(param_1 + 0x10dc) - param_2;
    *(float *)(param_1 + 0x10dc) = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x8a8) = 0;
      *(uint *)(param_1 + 0x10dc) = 0;
      return;
    }
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x8a8)) {
      local_20 = param_1 + 0x8ac;
      local_18 = (uint *)(param_1 + 0x8d8);
      do {
        iVar2 = local_1c * 0x40c + local_20;
        FUN_00408d70(param_1,iVar2);
        local_38 = local_44;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        *local_18 = local_38;
        local_18[1] = local_34;
        local_18[2] = local_30;
        local_48 = 1.0;
        if (*(float *)(param_1 + 0x10dc) < (float)_DAT_005cbf52) {
          local_48 = *(float *)(param_1 + 0x10dc) * (float)_DAT_005cbf4a;
        }
        local_24 = local_48 * (float)_DAT_005cbf3a;
        fVar1 = (float)_DAT_005cbf42;
        *(float *)(iVar2 + 0x2c0) = local_24;
        *(float *)(iVar2 + 0x2c4) = local_48 * fVar1;
        *(float *)(iVar2 + 0x2c8) = local_24;
        FUN_0049f2e0(iVar2 + 0xc,param_2);
        local_18 = local_18 + 0x103;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0x8a8));
    }
  }
  return;
}
