// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00
// Address: 004cfb00
// Address Range: [[004cfb00, 004cfc75]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero *this_ptr)

{
  CActorDestination *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1012];
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_2c;
  CDemonActor *local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_20 = *(CDemonActor **)(this_ptr + *(int *)(this_ptr + 0x247e4) * 4 + 0x24978);
  if (local_20 != (CDemonActor *)0x0) {
    local_18 = 0;
    for (local_1c = 0; local_1c < *(int *)&g_CDemonSetPtr->field_0x14d164; local_1c = local_1c + 1)
    {
      this_ptr_00 = (CActorDestination *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_18),
                               g_CActorDestinationClassInfo.name_hash);
      if ((this_ptr_00 != (CActorDestination *)0x0) &&
         (iVar1 = core_dest_cpp_FUN_004473f0(this_ptr_00,local_20), iVar1 != 0)) {
        core_actor_cpp_FUN_00408de0(this_ptr,&this_ptr_00->field_0x20);
        local_44 = local_2c;
        (&stack0xffffffc0)[(uint)bVar2 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        if (((1.0 <= (double)local_40) &&
            ((((double)local_40 <= _DAT_005d9d34 && ((float)_DAT_005d9d3c <= local_3c)) &&
             ((double)local_3c <= _DAT_005d9d44)))) && (ABS(local_44) <= (float)_DAT_005d9d44)) {
          core_vecdir_cpp_FUN_005838f0(&stack0xffffffbc);
          *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          if (ABS(local_34) <= (float)_DAT_005d9d4c) {
            *(uint *)(this_ptr + 0x25600) = 0;
            *(uint *)(this_ptr + 0x255f0) = 5;
            *(CDemonActor **)(this_ptr + 0x255f4) = local_20;
            *(CDemonActor **)(this_ptr + 0x255f8) = local_20;
            return 1;
          }
        }
      }
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
