// Name: core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004d3040
// Address: 004d3040
// Address Range: [[004d3040, 004d320d]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004d3040(CHero *this_ptr,int ignore_lock)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004d3040(CHero *this_ptr,int ignore_lock)

{
  CDoor *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1015];
  CVector3f local_50;
  CVector3f local_44;
  float local_38;
  float local_34 [2];
  CVector3f local_2c;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  local_20 = 4.0;
  local_18 = 0;
  for (local_14 = 0; local_14 < g_CDemonSetPtr->actor_count; local_14 = local_14 + 1) {
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                                      g_CDoorClassInfo.name_hash);
    if ((((this_ptr_00 != (CDoor *)0x0) &&
         (ABS((this_ptr_00->base).location.position.x - (this_ptr->base).base.location.position.x)
          <= (float)10)) &&
        (ABS((this_ptr_00->base).location.position.y - (this_ptr->base).base.location.position.y) <=
         (float)10)) &&
       ((ABS((this_ptr_00->base).location.position.z - (this_ptr->base).base.location.position.z) <=
         (float)10 && (this_ptr_00->door_state == DOOR_STATE_CLOSED)))) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,&this_ptr_00->open_position,&local_50);
      local_44.x = local_50.x;
      *(uint *)((int)&local_44 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_50 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (0.0 < local_44.z) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_44,&local_2c);
        local_38 = local_2c.x;
        local_34[(uint)bVar2 * -2] = *(float *)((int)&local_2c + (uint)bVar2 * -8 + 4);
        local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(float *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        if ((ABS(local_34[0]) <= 1.047198f) && (ABS(local_44.y) <= (float)5))
        {
          local_44.y = 0.0;
          local_1c = SQRT(local_44.z * local_44.z + local_44.x * local_44.x);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00465380
                              (this_ptr_00,(CDemonActor *)this_ptr,ignore_lock);
            if ((iVar1 != 0) && (this_ptr_00->allowed_sides != DOOR_OPEN_SIDES_NEITHER)) {
              local_20 = local_1c;
              this_ptr->hero_action = 3;
              this_ptr->hero_action_range = 0.0;
              this_ptr->hero_action_actor = (CDemonActor *)this_ptr_00;
              this_ptr->hero_action_target = (CDemonActor *)this_ptr_00;
              this_ptr->hero_action_data = iVar1;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return (uint)(this_ptr->hero_action == 3);
}
