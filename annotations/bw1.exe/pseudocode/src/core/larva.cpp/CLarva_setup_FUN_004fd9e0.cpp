// Name: core_larva.cpp_CLarva_setup_FUN_004fd9e0
// Address: 004fd9e0
// Address Range: [[004fd9e0, 004fda36]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_setup_FUN_004fd9e0(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_setup_FUN_004fd9e0(CLarva *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  this_ptr->dead = 0;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,30.0);
  (this_ptr->base).attack_cooldown = fVar1;
  return;
}
