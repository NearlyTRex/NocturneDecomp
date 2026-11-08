// Name: FUN_004eb3e0
// Address: 004eb3e0
// Address Range: [[004eb3e0, 004eb5ad]]
// Convention: unknown
// Signature: bool FUN_004eb3e0(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004eb3e0(int param_1,uint param_2)

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
  for (local_14 = 0; local_14 < *(int *)(0x01E82168 + 0x14d164); local_14 = local_14 + 1) {
    iVar1 = FUN_0040c600(*(uint *)(0x01E82168 + local_18 + 0x14d168),_DAT_01b68928);
    if ((((iVar1 != 0) &&
         (ABS(*(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20)) <= (float)_DAT_005e4845)) &&
        (ABS(*(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24)) <= (float)_DAT_005e4845)) &&
       ((ABS(*(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28)) <= (float)_DAT_005e4845 &&
        (*(int *)(iVar1 + 0x2e0) == 0)))) {
      FUN_00408bb0(param_1,iVar1 + 0x9bc);
      local_44 = local_50;
      (&stack0xffffffc0)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (0.0 < local_3c) {
        FUN_005a7520(&stack0xffffffbc);
        local_38 = local_2c;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar3 * -8);
        *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if ((ABS(local_34) <= _DAT_005e484d) && (ABS(local_40) <= (float)_DAT_005e4855)) {
          local_40 = 0.0;
          local_1c = SQRT(local_3c * local_3c + local_44 * local_44);
          if (local_1c < local_20) {
            iVar2 = FUN_00478b40(iVar1,param_1,param_2);
            if ((iVar2 != 0) && (*(int *)(iVar1 + 0x9d8) != 0)) {
              local_20 = local_1c;
              *(uint *)(param_1 + 0x1ff60) = 3;
              *(uint *)(param_1 + 0x1ff70) = 0;
              *(int *)(param_1 + 0x1ff64) = iVar1;
              *(int *)(param_1 + 0x1ff68) = iVar1;
              *(int *)(param_1 + 0x1ff6c) = iVar2;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return *(int *)(param_1 + 0x1ff60) == 3;
}
