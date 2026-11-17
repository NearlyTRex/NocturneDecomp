// Name: core_hero.cpp_CHero_findItemUseTarget_FUN_004d3b20
// Address: 004d3b20
// Address Range: [[004d3b20, 004d3c8e]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004d3b20(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_findItemUseTarget_FUN_004d3b20(CHero *this_ptr)

{
  CActorDestination *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1012];
  CVector3f local_50;
  float local_44;
  float local_40 [2];
  CVector3f local_38;
  CVector3f local_2c;
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
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                               g_CActorDestinationClassInfo.name_hash);
      if ((this_ptr_00 != (CActorDestination *)0x0) &&
         (iVar1 = core_dest_cpp_CActorDestination_acceptsActor_FUN_004594a0(this_ptr_00,local_20),
         iVar1 != 0)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  ((CDemonActor *)this_ptr,&(this_ptr_00->base).location.position,&local_2c);
        local_38.x = local_2c.x;
        *(uint *)((int)&local_38 + (uint)bVar2 * -8 + 4) =
             *(uint *)((int)&local_2c + (uint)bVar2 * -8 + 4);
        *(uint *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
             *(uint *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        if (((1.0 <= (double)local_38.y) &&
            ((((double)local_38.y <= 6 && ((float)0.5 <= local_38.z))
             && ((double)local_38.z <= 3)))) &&
           (ABS(local_38.x) <= (float)3)) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_38,&local_50);
          local_44 = local_50.x;
          local_40[(uint)bVar2 * -2] = *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4);
          local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
               *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
          if (ABS(local_40[0]) <= (float)60) {
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
