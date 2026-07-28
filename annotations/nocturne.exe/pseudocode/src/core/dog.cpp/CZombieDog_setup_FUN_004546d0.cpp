// Name: core_dog.cpp_CZombieDog_setup_FUN_004546d0
// Address: 004546d0
// Address Range: [[004546d0, 00454727]]
// Convention: unknown
// Signature: void core_dog_cpp_CZombieDog_setup_FUN_004546d0(CEnemy *param_1)

#include "nocturne.h"

void core_dog_cpp_CZombieDog_setup_FUN_004546d0(CEnemy *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  *(int *)param_1[1].base.base.actor_name = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Head",1);
  *(int *)(param_1[1].base.base.actor_name + 4) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(param_1);
  return;
}
