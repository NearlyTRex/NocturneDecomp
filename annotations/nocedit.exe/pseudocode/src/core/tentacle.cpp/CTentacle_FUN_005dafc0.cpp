// Name: core_tentacle.cpp_CTentacle_FUN_005dafc0
// Address: 005dafc0
// Address Range: [[005dafc0, 005db041]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_FUN_005dafc0(CTentacle * this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_FUN_005dafc0(CTentacle *this_ptr)

{
  CSkeleton *this_ptr_00;
  CDeformableModelInstance *this_ptr_01;
  
  this_ptr_01 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_01);
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_01);
  DAT_03f6cd08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp02");
  DAT_03f6cd0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp05");
  DAT_03f6cd10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp06");
  DAT_03f6cd14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"bipp09");
  return;
}
