// Name: core_turret.cpp_CTurret_getInteractionInfo_FUN_0054a800
// Address: 0054a800
// Address Range: [[0054a800, 0054a868]]
// Convention: unknown
// Signature: void core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CDemonActor *param_1,SInteractionInfo *param_2)

#include "nocturne.h"

void core_turret_cpp_CTurret_getInteractionInfo_FUN_0054a800(CDemonActor *param_1,SInteractionInfo *param_2)

{
  float fVar1;
  CDemonActor *pCVar2;
  float fVar3;
  
  core_actor_cpp_CDemonActor_getInteractionInfo_FUN_0040b1b0(param_1,param_2);
  if (param_1[6].lifecycle_state == ACTOR_NOT_CREATED) {
    return;
  }
  param_2->can_interact = 1;
  pCVar2 = (CDemonActor *)param_1[6].create_prob;
  param_2->yaw_max = 6.2831855;
  param_2->yaw_min = -6.2831855;
  param_2->interacting_actor = pCVar2;
  fVar3 = -0.5235988f;
  param_2->pitch_max = 1.22173f - (param_1->orient).vec.x;
  fVar1 = (param_1->orient).vec.x;
  param_2->approach_offset = -4.0;
  param_2->pitch_min = fVar3 - fVar1;
  param_2->distance_max = 0.0;
  return;
}
