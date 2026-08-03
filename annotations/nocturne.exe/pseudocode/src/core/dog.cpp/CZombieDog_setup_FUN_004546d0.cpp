// Name: core_dog.cpp_CZombieDog_setup_FUN_004546d0
// Address: 004546d0
// Address Range: [[004546d0, 00454727]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_setup_FUN_004546d0(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_setup_FUN_004546d0(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[1] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  return;
}
