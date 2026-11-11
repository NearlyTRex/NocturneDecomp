// Name: core_hero.cpp_FUN_004d3b20
// Address: 004d3b20
// Address Range: [[004d3b20, 004d3c8e]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004d3b20(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_FUN_004d3b20(CHero *this_ptr)

{
  CActorDestination *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1012];
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  CDemonActor *local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_20 = (this_ptr->inventory).selected_item;
  if (local_20 != (CDemonActor *)0x0) {
    local_18 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      this_ptr_00 = (CActorDestination *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)((int)g_CDemonSetPtr->actors + local_18),
                               g_CActorDestinationClassInfo.name_hash);
      if ((this_ptr_00 != (CActorDestination *)0x0) &&
         (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0(this_ptr_00,local_20),
         iVar1 != 0)) {
        core_actor_cpp_FUN_00408bf0(this_ptr,&(this_ptr_00->base).location);
        local_38 = local_2c;
        (&stack0xffffffcc)[(uint)bVar2 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
        *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        if (((1.0 <= (double)local_34) &&
            ((((double)local_34 <= _DAT_005c4dcd && ((float)_DAT_005c4dd5 <= local_30)) &&
             ((double)local_30 <= _DAT_005c4ddd)))) && (ABS(local_38) <= (float)_DAT_005c4ddd)) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffc8);
          *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
          *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
               *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
          if (ABS(local_40) <= (float)_DAT_005c4de5) {
            this_ptr->hero_action_range = 0.0;
            this_ptr->hero_action = 6;
            this_ptr->hero_action_actor = local_20;
            this_ptr->hero_action_target = local_20;
            return 1;
          }
        }
      }
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
