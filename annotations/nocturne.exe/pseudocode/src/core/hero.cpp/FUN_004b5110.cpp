// Name: core_hero.cpp_FUN_004b5110
// Address: 004b5110
// Address Range: [[004b5110, 004b5260]]
// Convention: unknown
// Signature: int core_hero_cpp_FUN_004b5110(CDemonActor *param_1)

#include "nocturne.h"

int core_hero_cpp_FUN_004b5110(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDoor *this_ptr;
  CVector3f *pCVar5;
  int iVar6;
  int iVar7;
  CVector3f local_24;
  int local_18;
  int local_14;
  
  iVar7 = 0;
  local_14 = 0;
  param_1[0x181].create_event[0x3c] = '\0';
  param_1[0x181].create_event[0x3d] = '\0';
  param_1[0x181].create_event[0x3e] = '\0';
  param_1[0x181].create_event[0x3f] = '\0';
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar7) {
      return 0;
    }
    this_ptr = (CDoor *)core_actor_cpp_castToClassHash_FUN_0040d890
                                  (*(CDemonActor **)(0x01E57284 + local_14 + 0x14cd70),
                                   g_CDoorActorType_01af4e9c.name_hash);
    if ((this_ptr != (CDoor *)0x0) && (this_ptr->door_state == DOOR_STATE_CLOSED)) {
      fVar3 = (param_1->location).position.x - (this_ptr->open_position).x;
      fVar1 = (param_1->location).position.y;
      fVar2 = (this_ptr->open_position).y;
      fVar4 = (param_1->location).position.z - (this_ptr->open_position).z;
      pCVar5 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                         (param_1,&local_24,&(this_ptr->base).location.position);
      if ((0.0 < pCVar5->z) &&
         ((ABS(fVar1 - fVar2) <= (float)5 &&
          (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < (float)4)))) {
        iVar6 = core_event_cpp_CRuleList_evaluateAndRun_FUN_00481890(&this_ptr->open_rule);
        if (iVar6 != 0) {
          return 1;
        }
        local_18 = core_door_cpp_CDoor_getMoveType_FUN_004564b0(this_ptr,param_1);
        if (local_18 != 0) {
          if (local_18 == 1) {
            core_door_cpp_CDoor_onOpened_FUN_00455270(this_ptr);
            return local_18;
          }
          *(CDoor **)(param_1[0x181].create_event + 0x3c) = this_ptr;
          return local_18;
        }
      }
    }
    local_14 = local_14 + 4;
    iVar7 = iVar7 + 1;
  } while( true );
}
