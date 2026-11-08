// Name: FUN_004cfb00
// Address: 004cfb00
// Address Range: [[004cfb00, 004cfc75]]
// Convention: unknown
// Signature: undefined4 FUN_004cfb00(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004cfb00(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1012];
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_2c;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar3 = 0;
  local_20 = *(int *)(param_1 + 0x24978 + *(int *)(param_1 + 0x247e4) * 4);
  if (local_20 != 0) {
    local_18 = 0;
    for (local_1c = 0; local_1c < *(int *)(0x01E661B8 + 0x14d164); local_1c = local_1c + 1) {
      iVar1 = FUN_0040c8f0(*(uint *)(0x01E661B8 + local_18 + 0x14d168),_DAT_01510e14);
      if ((iVar1 != 0) && (iVar2 = FUN_004473f0(iVar1,local_20), iVar2 != 0)) {
        FUN_00408de0(param_1,iVar1 + 0x20);
        local_44 = local_2c;
        (&stack0xffffffc0)[(uint)bVar3 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if (((1.0 <= (double)local_40) &&
            ((((double)local_40 <= _DAT_005d9d34 && ((float)_DAT_005d9d3c <= local_3c)) &&
             ((double)local_3c <= _DAT_005d9d44)))) && (ABS(local_44) <= (float)_DAT_005d9d44)) {
          FUN_005838f0(&stack0xffffffbc);
          *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
          *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if (ABS(local_34) <= (float)_DAT_005d9d4c) {
            *(uint *)(param_1 + 0x25600) = 0;
            *(uint *)(param_1 + 0x255f0) = 5;
            *(int *)(param_1 + 0x255f4) = local_20;
            *(int *)(param_1 + 0x255f8) = local_20;
            return 1;
          }
        }
      }
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
