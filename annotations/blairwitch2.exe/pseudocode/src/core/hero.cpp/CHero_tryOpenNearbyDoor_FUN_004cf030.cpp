// Name: core_hero.cpp_CHero_tryOpenNearbyDoor_FUN_004cf030
// Address: 004cf030
// Address Range: [[004cf030, 004cf1f0]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(CHero *this_ptr,int ignore_lock)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_CHero_tryOpenNearbyDoor_FUN_004cf030(CHero *this_ptr,int ignore_lock)

{
  CDoor *this_ptr_00;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1015];
  CVector3f local_50;
  float local_44;
  float local_40 [5];
  uint local_2c;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  local_20 = 4.0;
  local_18 = 0;
  for (local_14 = 0; local_14 < g_CDemonSetPtr->actor_count; local_14 = local_14 + 1) {
    this_ptr_00 = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                                      g_CDoorClassInfo.name_hash);
    if ((((this_ptr_00 != (CDoor *)0x0) &&
         (ABS((this_ptr_00->base).location.position.x - (this_ptr->base).base.location.position.x)
          <= (float)_DAT_005d9c7c)) &&
        (ABS((this_ptr_00->base).location.position.y - (this_ptr->base).base.location.position.y) <=
         (float)_DAT_005d9c7c)) &&
       ((ABS((this_ptr_00->base).location.position.z - (this_ptr->base).base.location.position.z) <=
         (float)_DAT_005d9c7c && (this_ptr_00->door_state == DOOR_STATE_CLOSED)))) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                ((CDemonActor *)this_ptr,&this_ptr_00->open_position,&local_50);
      local_44 = local_50.x;
      local_40[(uint)bVar2 * -2] = *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4);
      local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (0.0 < local_40[1]) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_44);
        local_40[2] = (float)local_2c;
        local_40[(uint)bVar2 * -2 + 3] = local_40[(uint)bVar2 * -2 + 6];
        local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
             local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
        if ((ABS(local_40[3]) <= _DAT_005d9c84) && (ABS(local_40[0]) <= (float)_DAT_005d9c8c)) {
          local_40[0] = 0.0;
          local_1c = SQRT(local_40[1] * local_40[1] + local_44 * local_44);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00460630
                              (this_ptr_00,(CDemonActor *)this_ptr,ignore_lock);
            if (iVar1 != 0) {
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
