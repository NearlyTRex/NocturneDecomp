// Name: core_hero.cpp_FUN_004eb3e0
// Address: 004eb3e0
// Address Range: [[004eb3e0, 004eb5ad]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004eb3e0(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004eb3e0(CDemonActor *param_1)

{
  CDoor *this_ptr;
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
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c600
                                  (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                                   g_CDoorClassInfo.name_hash);
    if ((((this_ptr != (CDoor *)0x0) &&
         (ABS((this_ptr->base).location.position.x - (param_1->location).position.x) <=
          (float)_DAT_005e4845)) &&
        (ABS((this_ptr->base).location.position.y - (param_1->location).position.y) <=
         (float)_DAT_005e4845)) &&
       ((ABS((this_ptr->base).location.position.z - (param_1->location).position.z) <=
         (float)_DAT_005e4845 && (this_ptr->door_state == DOOR_STATE_CLOSED)))) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                (param_1,&this_ptr->open_position,&local_50);
      local_44 = local_50.x;
      local_40[(uint)bVar2 * -2] = *(float *)((int)&local_50 + (uint)bVar2 * -8 + 4);
      local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(float *)((int)&local_50 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      if (0.0 < local_40[1]) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_44);
        local_40[2] = (float)local_2c;
        local_40[(uint)bVar2 * -2 + 3] = local_40[(uint)bVar2 * -2 + 6];
        local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
             local_40[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
        if ((ABS(local_40[3]) <= _DAT_005e484d) && (ABS(local_40[0]) <= (float)_DAT_005e4855)) {
          local_40[0] = 0.0;
          local_1c = SQRT(local_40[1] * local_40[1] + local_44 * local_44);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00478b40(this_ptr,param_1);
            if ((iVar1 != 0) && (this_ptr->allowed_sides != DOOR_OPEN_SIDES_NEITHER)) {
              local_20 = local_1c;
              param_1[0x17c].create_event[0x48] = '\x03';
              param_1[0x17c].create_event[0x49] = '\0';
              param_1[0x17c].create_event[0x4a] = '\0';
              param_1[0x17c].create_event[0x4b] = '\0';
              param_1[0x17c].create_event[0x58] = '\0';
              param_1[0x17c].create_event[0x59] = '\0';
              param_1[0x17c].create_event[0x5a] = '\0';
              param_1[0x17c].create_event[0x5b] = '\0';
              *(CDoor **)(param_1[0x17c].create_event + 0x4c) = this_ptr;
              *(CDoor **)(param_1[0x17c].create_event + 0x50) = this_ptr;
              *(int *)(param_1[0x17c].create_event + 0x54) = iVar1;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return *(int *)(param_1[0x17c].create_event + 0x48) == 3;
}
