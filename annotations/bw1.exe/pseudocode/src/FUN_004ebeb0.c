// Name: FUN_004ebeb0
// Address: 004ebeb0
// Address Range: [[004ebeb0, 004ec01e]]
// Convention: unknown
// Signature: undefined4 FUN_004ebeb0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ebeb0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1012];
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  local_20 = *(int *)(param_1 + 0x1fe24);
  if (local_20 != 0) {
    local_18 = 0;
    for (local_1c = 0; local_1c < *(int *)(0x01E82168 + 0x14d164); local_1c = local_1c + 1) {
      iVar1 = FUN_0040c600(*(uint *)(0x01E82168 + local_18 + 0x14d168),_DAT_0152c398);
      if ((iVar1 != 0) && (iVar2 = FUN_0045d550(iVar1,local_20), iVar2 != 0)) {
        FUN_00408bb0(param_1,iVar1 + 0x20);
        local_38 = local_2c;
        (&stack0xffffffcc)[(uint)bVar3 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if (((1.0 <= (double)local_34) &&
            ((((double)local_34 <= _DAT_005e48fd && ((float)_DAT_005e4905 <= local_30)) &&
             ((double)local_30 <= _DAT_005e490d)))) && (ABS(local_38) <= (float)_DAT_005e490d)) {
          FUN_005a7520(&stack0xffffffc8);
          *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
          *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (ABS(local_40) <= (float)_DAT_005e4915) {
            *(uint *)(param_1 + 0x1ff70) = 0;
            *(uint *)(param_1 + 0x1ff60) = 5;
            *(int *)(param_1 + 0x1ff64) = local_20;
            *(int *)(param_1 + 0x1ff68) = local_20;
            return 1;
          }
        }
      }
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
