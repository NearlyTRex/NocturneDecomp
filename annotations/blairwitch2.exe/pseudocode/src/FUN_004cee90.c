// Name: FUN_004cee90
// Address: 004cee90
// Address Range: [[004cee90, 004cf029]]
// Convention: unknown
// Signature: bool FUN_004cee90(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004cee90(int param_1)

{
  byte bVar1;
  float afStackY_1070 [1016];
  uint local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_34;
  float local_30;
  float local_28;
  float local_24;
  float *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar1 = 0;
  local_64 = 0;
  local_5c = 0x3fc00000;
  local_60 = 0;
  FUN_00408d70(param_1,&stack0xffffff9c);
  local_28 = 5.0;
  local_1c = 0;
  local_20 = (float *)(param_1 + 0x20);
  for (local_18 = 0; local_18 < *(int *)(0x01E661B8 + 0x14f0a8); local_18 = local_18 + 1) {
    local_14 = *(int *)(0x01E661B8 + local_1c + 0x14f0ac);
    if ((*(char *)(local_14 + 0x2708) != '\0') && (param_1 != local_14)) {
      local_70 = *(float *)(local_14 + 0x20) - *local_20;
      local_6c = *(float *)(local_14 + 0x24) - local_20[1];
      local_68 = *(float *)(local_14 + 0x28) - local_20[2];
      local_7c = local_70;
      (&stack0xffffff88)[(uint)bVar1 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8);
      *(uint *)((int)&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      if (ABS(local_78) <= (float)_DAT_005d9c6c) {
        local_78 = 0.0;
        local_24 = SQRT(local_74 * local_74 + local_7c * local_7c);
        if (local_24 < local_28) {
          FUN_00408d30(param_1,&stack0xffffff84);
          local_4c = local_58;
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4);
          *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
          FUN_005838f0(&stack0xffffffb4);
          local_34 = local_88;
          (&stack0xffffffd0)[(uint)bVar1 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff7c + (uint)bVar1 * -8);
          *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
               *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
          if (ABS(local_30) <= (float)_DAT_005d9c74) {
            *(uint *)(param_1 + 0x25600) = 0;
            *(int *)(param_1 + 0x255f4) = local_14;
            *(int *)(param_1 + 0x255f8) = local_14;
            *(uint *)(param_1 + 0x255f0) = 2;
            local_28 = local_24;
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return *(int *)(param_1 + 0x255f0) == 2;
}
