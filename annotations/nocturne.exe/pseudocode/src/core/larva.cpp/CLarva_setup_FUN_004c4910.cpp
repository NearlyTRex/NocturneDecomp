// Name: core_larva.cpp_CLarva_setup_FUN_004c4910
// Address: 004c4910
// Address Range: [[004c4910, 004c4966]]
// Convention: unknown
// Signature: void core_larva_cpp_CLarva_setup_FUN_004c4910(CEnemy *param_1)

#include "nocturne.h"

void core_larva_cpp_CLarva_setup_FUN_004c4910(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CEnemy *pCVar1;
  float fVar2;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  pCVar1 = param_1 + 1;
  (pCVar1->base).base.actor_name[0] = '\0';
  (pCVar1->base).base.actor_name[1] = '\0';
  (pCVar1->base).base.actor_name[2] = '\0';
  (pCVar1->base).base.actor_name[3] = '\0';
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,30.0);
  param_1->attack_cooldown = fVar2;
  return;
}
