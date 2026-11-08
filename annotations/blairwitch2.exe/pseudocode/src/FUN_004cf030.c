// Name: FUN_004cf030
// Address: 004cf030
// Address Range: [[004cf030, 004cf1f0]]
// Convention: unknown
// Signature: bool FUN_004cf030(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004cf030(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1015];
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  uint local_2c;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  local_20 = 4.0;
  local_18 = 0;
  for (local_14 = 0; local_14 < *(int *)(0x01E661B8 + 0x14d164); local_14 = local_14 + 1) {
    iVar1 = FUN_0040c8f0(*(uint *)(0x01E661B8 + local_18 + 0x14d168),_DAT_01b4d36c);
    if ((((iVar1 != 0) &&
         (ABS(*(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20)) <= (float)_DAT_005d9c7c)) &&
        (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_005d9c7c)) &&
       ((ABS(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28)) <= (float)_DAT_005d9c7c &&
        (*(int *)(iVar1 + 0x43c) == 0)))) {
      FUN_00408de0(param_1,iVar1 + 0xb18);
      local_44 = local_50;
      (&stack0xffffffc0)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (0.0 < local_3c) {
        FUN_005838f0(&stack0xffffffbc);
        local_38 = local_2c;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
        *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if ((ABS(local_34) <= _DAT_005d9c84) && (ABS(local_40) <= (float)_DAT_005d9c8c)) {
          local_40 = 0.0;
          local_1c = SQRT(local_3c * local_3c + local_44 * local_44);
          if (local_1c < local_20) {
            iVar2 = FUN_00460630(iVar1,param_1,param_2);
            if (iVar2 != 0) {
              local_20 = local_1c;
              *(uint *)(param_1 + 0x255f0) = 3;
              *(uint *)(param_1 + 0x25600) = 0;
              *(int *)(param_1 + 0x255f4) = iVar1;
              *(int *)(param_1 + 0x255f8) = iVar1;
              *(int *)(param_1 + 0x255fc) = iVar2;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return *(int *)(param_1 + 0x255f0) == 3;
}
