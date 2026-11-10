// Name: core_hero.cpp_FUN_004d3040
// Address: 004d3040
// Address Range: [[004d3040, 004d320d]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004d3040(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004d3040(CDemonActor *param_1)

{
  CDoor *this_ptr;
  int iVar1;
  byte bVar2;
  float afStackY_1038 [1015];
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_34;
  uint local_2c;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  local_20 = 4.0;
  local_18 = 0;
  for (local_14 = 0; local_14 < g_CDemonSetPtr->actor_count; local_14 = local_14 + 1) {
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040c840
                                  (*(uint *)((int)g_CDemonSetPtr->actors + local_18),
                                   g_CDoorClassInfo.name_hash);
    if ((((this_ptr != (CDoor *)0x0) &&
         (ABS((this_ptr->base).location.position.x - (param_1->location).position.x) <=
          (float)_DAT_005c4d15)) &&
        (ABS((this_ptr->base).location.position.y - (param_1->location).position.y) <=
         (float)_DAT_005c4d15)) &&
       ((ABS((this_ptr->base).location.position.z - (param_1->location).position.z) <=
         (float)_DAT_005c4d15 && (this_ptr->door_state == DOOR_STATE_CLOSED)))) {
      core_actor_cpp_FUN_00408bf0(param_1,&this_ptr->open_position);
      local_44 = local_50;
      (&stack0xffffffc0)[(uint)bVar2 * 0xfffffffe] =
           (float)*(uint *)(&stack0xffffffb4 + (uint)bVar2 * -8);
      *(uint *)((int)&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
           *(uint *)(&stack0xffffffb8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      if (0.0 < local_3c) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffbc);
        local_38 = local_2c;
        *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffd8 + (uint)bVar2 * -8);
        *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
             *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        if ((ABS(local_34) <= _DAT_005c4d1d) && (ABS(local_40) <= (float)_DAT_005c4d25)) {
          local_40 = 0.0;
          local_1c = SQRT(local_3c * local_3c + local_44 * local_44);
          if (local_1c < local_20) {
            iVar1 = core_door_cpp_CDoor_getMoveType_FUN_00465380(this_ptr,param_1);
            if ((iVar1 != 0) && (this_ptr->allowed_sides != DOOR_OPEN_SIDES_NEITHER)) {
              local_20 = local_1c;
              param_1[0x185].create_event[0x38] = '\x03';
              param_1[0x185].create_event[0x39] = '\0';
              param_1[0x185].create_event[0x3a] = '\0';
              param_1[0x185].create_event[0x3b] = '\0';
              param_1[0x185].create_event[0x4c] = '\0';
              param_1[0x185].create_event[0x4d] = '\0';
              param_1[0x185].create_event[0x4e] = '\0';
              param_1[0x185].create_event[0x4f] = '\0';
              *(CDoor **)(param_1[0x185].create_event + 0x3c) = this_ptr;
              *(CDoor **)(param_1[0x185].create_event + 0x40) = this_ptr;
              *(int *)(param_1[0x185].create_event + 0x44) = iVar1;
            }
          }
        }
      }
    }
    local_18 = local_18 + 4;
  }
  return *(int *)(param_1[0x185].create_event + 0x38) == 3;
}
