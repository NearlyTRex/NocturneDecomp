// Name: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240
// Address: 004eb240
// Address Range: [[004eb240, 004eb3d9]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240(CHero *this_ptr)

{
  byte bVar1;
  float afStackY_1070 [1016];
  CVector3f local_88;
  CVector3f local_7c;
  float local_70;
  float local_6c [2];
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30 [4];
  CLocation *local_20;
  int local_1c;
  int local_18;
  CHero *local_14;
  
  bVar1 = 0;
  local_64.x = 0.0;
  local_64.z = 1.5;
  local_64.y = 0.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            ((CDemonActor *)this_ptr,&local_64,&local_40);
  local_30[2] = 5.0;
  local_1c = 0;
  local_20 = &(this_ptr->base).base.location;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->character_count; local_18 = local_18 + 1) {
    local_14 = *(CHero **)((int)g_CDemonSetPtr->characters + local_1c);
    if (((local_14->base).talk_to_me_event[0] != '\0') && (this_ptr != local_14)) {
      local_70 = (local_14->base).base.location.position.x - (local_20->position).x;
      local_6c[0] = (local_14->base).base.location.position.y - (local_20->position).y;
      local_6c[1] = (local_14->base).base.location.position.z - (local_20->position).z;
      local_7c.x = local_70;
      *(float *)((int)&local_7c + (uint)bVar1 * -8 + 4) = local_6c[(uint)bVar1 * -2];
      *(float *)((int)&local_7c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
           local_6c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
      if (ABS(local_7c.y) <= (float)4) {
        local_7c.y = 0.0;
        local_30[3] = SQRT(local_7c.z * local_7c.z + local_7c.x * local_7c.x);
        if (local_30[3] < local_30[2]) {
          core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408b00
                    ((CDemonActor *)this_ptr,&local_7c,&local_58);
          local_4c.x = local_58.x;
          *(uint *)((int)&local_4c + (uint)bVar1 * -8 + 4) =
               *(uint *)((int)&local_58 + (uint)bVar1 * -8 + 4);
          *(uint *)((int)&local_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
               *(uint *)((int)&local_58 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_4c,&local_88);
          local_34 = local_88.x;
          local_30[(uint)bVar1 * -2] = *(float *)((int)&local_88 + (uint)bVar1 * -8 + 4);
          local_30[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
               *(float *)((int)&local_88 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
          if (ABS(local_30[0]) <= (float)0.34906585038888899) {
            this_ptr->hero_action_range = 0.0;
            this_ptr->hero_action_actor = (CDemonActor *)local_14;
            this_ptr->hero_action_target = (CDemonActor *)local_14;
            this_ptr->hero_action = 2;
            local_30[2] = local_30[3];
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return (uint)(this_ptr->hero_action == 2);
}
