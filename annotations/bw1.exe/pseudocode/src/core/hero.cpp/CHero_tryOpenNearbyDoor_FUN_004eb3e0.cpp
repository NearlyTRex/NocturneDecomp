// Name: core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004eb3e0
// Address: 004eb3e0
// Address Range: [[004eb3e0, 004eb5ad]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004eb3e0(CHero *this_ptr,int ignore_lock)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004eb3e0(CHero *this_ptr,int ignore_lock)

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
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                                      g_CDoorClassInfo.name_hash);
    if ((((this_ptr_00 != (CDoor *)0x0) &&
         (ABS((this_ptr_00->base).location.position.x - (this_ptr->base).base.location.position.x)
          <= (float)_DAT_005e4845)) &&
        (ABS((this_ptr_00->base).location.position.y - (this_ptr->base).base.location.position.y) <=
         (float)_DAT_005e4845)) &&
       ((ABS((this_ptr_00->base).location.position.z - (this_ptr->base).base.location.position.z) <=
         (float)_DAT_005e4845 && (this_ptr_00->door_state == DOOR_STATE_CLOSED)))) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                ((CDemonActor *)this_ptr,&this_ptr_00->open_position,&local_50);
      local_44.x = local_50.x;
      *(uint *)((int)&local_44 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_50 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_44 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (0.0 < local_44.z) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_44,&local_2c);
        local_38 = local_2c.x;
        local_34[(uint)bVar2 * -2] = *(float *)((int)&local_2c + (uint)bVar2 * -8 + 4);
        local_34[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(float *)((int)&local_2c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
        if ((ABS(local_34[0]) <= _DAT_005e484d) && (ABS(local_44.y) <= (float)_DAT_005e4855)) {
          local_44.y = 0.0;
          local_1c = SQRT(local_44.z * local_44.z + local_44.x * local_44.x);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00478b40
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
