// Name: core_dog.cpp_CZombieDog_setup_FUN_00462790
// Address: 00462790
// Address Range: [[00462790, 0046284c]]
// Convention: __cdecl
// Signature: void __cdecl core_dog_cpp_CZombieDog_setup_FUN_00462790(CZombieDog *this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_setup_FUN_00462790(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[1] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  iVar1 = (this_ptr->base).base.been_damaged;
  (this_ptr->base).attack_cooldown = 0.0;
  if (iVar1 == 0) {
    switch(this_ptr->dog_variant) {
    case 0:
    case 1:
      (this_ptr->base).attack_damage = 5.0;
      (this_ptr->base).pain_threshold = 10.0;
      (this_ptr->base).base.hit_points = 20.0;
      break;
    case 2:
    case 3:
      (this_ptr->base).attack_damage = 10.0;
      (this_ptr->base).pain_threshold = 10.0;
      (this_ptr->base).base.hit_points = 30.0;
      return;
    }
  }
  return;
}
