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
  *(int *)&this_ptr->field_0xd054 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xd058 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  iVar1 = *(int *)&(this_ptr->base).base.field_0x3268;
  (this_ptr->base).attack_cooldown = 0.0;
  if (iVar1 == 0) {
    switch(*(uint *)&this_ptr->field_0xd060) {
    case 0:
    case 1:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x40a00000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41200000;
      (this_ptr->base).base.hit_points = 20.0;
      break;
    case 2:
    case 3:
      *(uint *)&(this_ptr->base).field_0xce5c = 0x41200000;
      *(uint *)&(this_ptr->base).field_0xce60 = 0x41200000;
      (this_ptr->base).base.hit_points = 30.0;
      return;
    }
  }
  return;
}
