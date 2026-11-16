// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004cfb00
// Address: 004cfb00
// Address Range: [[004cfb00, 004cfc75]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004cfb00(CHero *this_ptr)

{
  CActorDestination *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1012];
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34 [2];
  CVector3f local_2c;
  CDemonActor *local_20;
  int local_1c;
  int local_18;
  
  bVar2 = 0;
  local_20 = this_ptr->inventories[0].selected_items[this_ptr->inventories[0].current_group];
  if (local_20 != (CDemonActor *)0x0) {
    local_18 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      this_ptr_00 = (CActorDestination *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                               g_CActorDestinationClassInfo.name_hash);
      if ((this_ptr_00 != (CActorDestination *)0x0) &&
         (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004473f0(this_ptr_00,local_20),
         iVar1 != 0)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,&(this_ptr_00->base).location.position,&local_2c);
        local_44.x = local_2c.x;
        *(uint *)((int)&local_44 + (uint)bVar2 * -8 + 4) =
             *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4);
        *(uint *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
             *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        if (((1.0 <= (double)local_44.y) &&
            ((((double)local_44.y <= _DAT_005d9d34 && ((float)_DAT_005d9d3c <= local_44.z)) &&
             ((double)local_44.z <= _DAT_005d9d44)))) && (ABS(local_44.x) <= (float)_DAT_005d9d44))
        {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_44,&local_50);
          local_38 = local_50.x;
          local_34[(uint)bVar2 * -2] = *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4);
          local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
               *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          if (ABS(local_34[0]) <= (float)_DAT_005d9d4c) {
            this_ptr->hero_action_range = 0.0;
            this_ptr->hero_action = 5;
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
