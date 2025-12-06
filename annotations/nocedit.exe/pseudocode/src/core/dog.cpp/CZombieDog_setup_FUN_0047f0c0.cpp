// Name: core_dog.cpp_CZombieDog_setup_FUN_0047f0c0
// Address: 0047f0c0
// Address Range: [[0047f0c0, 0047f117]]
// Convention: __cdecl
// Signature: void core_dog.cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog * this_ptr)

#include "nocturne.h"

void __cdecl core_dog_cpp_CZombieDog_setup_FUN_0047f0c0(CZombieDog *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  *(int *)(this_ptr->field1_0xbeb4 + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->field1_0xbeb4 + 0xc) = iVar1;
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  return;
}
