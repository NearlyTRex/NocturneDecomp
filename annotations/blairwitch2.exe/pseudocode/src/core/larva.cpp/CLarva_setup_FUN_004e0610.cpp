// Name: core_larva.cpp_CLarva_setup_FUN_004e0610
// Address: 004e0610
// Address Range: [[004e0610, 004e0666]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_setup_FUN_004e0610(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_setup_FUN_004e0610(CLarva *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  this_ptr->dead = 0;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,30.0);
  (this_ptr->base).attack_cooldown = fVar1;
  return;
}
