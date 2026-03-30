// Name: core_larva.cpp_CLarva_setup_FUN_00503020
// Address: 00503020
// Address Range: [[00503020, 0050305f]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_setup_FUN_00503020(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_setup_FUN_00503020(CLarva *this_ptr)

{
  float fVar1;
  CDeformableModelInstance *this_ptr_00;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  this_ptr->dead = 0;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,30.0);
  (this_ptr->base).attack_cooldown = fVar1;
  return;
}
