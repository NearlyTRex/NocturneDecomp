// Name: core_hero.cpp_FUN_004eb660
// Address: 004eb660
// Address Range: [[004eb660, 004eb7e4]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004eb660(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_FUN_004eb660(CHero *this_ptr)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1040 [1014];
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CHero *local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  local_24 = 1e+30;
  local_28 = this_ptr + 0x20;
  local_14 = 0;
  for (local_18 = 0; local_18 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_18 = local_18 + 1) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_14),
                       g_CLeverClassInfo.name_hash);
    if (iVar1 != 0) {
      core_actor_cpp_FUN_00408bb0(this_ptr,iVar1 + 0x20);
      local_40 = local_34;
      (&stack0xffffffc4)[(uint)bVar3 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if ((((ABS(local_3c) <= (float)_DAT_005e485d) && (0.0 <= (double)local_38)) &&
          ((double)local_38 <= _DAT_005e4865)) && (ABS(local_40) <= (float)_DAT_005e4865)) {
        core_vecdir_cpp_FUN_005a7520(&stack0xffffffc0);
        *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffac + (uint)bVar3 * -8);
        *(uint *)(&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        local_20 = ABS(local_48);
        if ((int)local_20 < 0x3f860a93) {
          iVar2 = core_lever_cpp_FUN_004ff970(iVar1,local_28);
          if ((iVar2 != 0) && (local_1c = -local_20, local_1c <= local_24)) {
            *(uint *)(this_ptr + 0x1ff60) = 7;
            *(uint *)(this_ptr + 0x1ff70) = 0;
            *(int *)(this_ptr + 0x1ff64) = iVar1;
            *(int *)(this_ptr + 0x1ff68) = iVar1;
            local_24 = local_1c;
          }
        }
      }
    }
    local_14 = local_14 + 4;
  }
  return (uint)(*(int *)(this_ptr + 0x1ff60) == 7);
}
