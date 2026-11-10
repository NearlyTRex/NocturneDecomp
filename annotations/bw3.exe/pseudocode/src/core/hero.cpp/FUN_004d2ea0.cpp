// Name: core_hero.cpp_FUN_004d2ea0
// Address: 004d2ea0
// Address Range: [[004d2ea0, 004d3039]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004d2ea0(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_FUN_004d2ea0(CHero *this_ptr)

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
  CHero *local_20;
  int local_1c;
  int local_18;
  CHero *local_14;
  
  bVar1 = 0;
  local_64 = 0;
  local_5c = 0x3fc00000;
  local_60 = 0;
  core_actor_cpp_FUN_00408b80(this_ptr,&stack0xffffff9c);
  local_28 = 5.0;
  local_1c = 0;
  local_20 = this_ptr + 0x20;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->character_count; local_18 = local_18 + 1) {
    local_14 = *(CHero **)((int)g_CDemonSetPtr->characters + local_1c);
    if ((local_14[0x2698] != (CHero)0x0) && (this_ptr != local_14)) {
      local_70 = *(float *)(local_14 + 0x20) - *(float *)local_20;
      local_6c = *(float *)(local_14 + 0x24) - *(float *)(local_20 + 4);
      local_68 = *(float *)(local_14 + 0x28) - *(float *)(local_20 + 8);
      local_7c = *(float *)(local_14 + 0x20) - *(float *)local_20;
      (&stack0xffffff88)[(uint)bVar1 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8);
      *(uint *)((int)&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
           *(uint *)((int)&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
      if (ABS(local_78) <= (float)_DAT_005c4d05) {
        local_78 = 0.0;
        local_24 = SQRT(local_74 * local_74 + local_7c * local_7c);
        if (local_24 < local_28) {
          core_actor_cpp_FUN_00408b40(this_ptr,&stack0xffffff84);
          local_4c = local_58;
          *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffffac + (uint)bVar1 * 0xfffffffe * 4);
          *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffb4);
          local_34 = local_88;
          (&stack0xffffffd0)[(uint)bVar1 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff7c + (uint)bVar1 * -8);
          *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
               *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
          if (ABS(local_30) <= (float)_DAT_005c4d0d) {
            *(uint *)(this_ptr + 0x20b7c) = 0;
            *(CHero **)(this_ptr + 0x20b6c) = local_14;
            *(CHero **)(this_ptr + 0x20b70) = local_14;
            *(uint *)(this_ptr + 0x20b68) = 2;
            local_28 = local_24;
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return (uint)(*(int *)(this_ptr + 0x20b68) == 2);
}
