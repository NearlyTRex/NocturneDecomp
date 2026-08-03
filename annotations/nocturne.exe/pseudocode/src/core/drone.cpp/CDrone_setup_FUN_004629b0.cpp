// Name: core_drone.cpp_CDrone_setup_FUN_004629b0
// Address: 004629b0
// Address Range: [[004629b0, 00462a2f]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_setup_FUN_004629b0(CDrone *this_ptr)

#include "nocturne.h"

void __cdecl core_drone_cpp_CDrone_setup_FUN_004629b0(CDrone *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  this_ptr->dead = 0;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bipn04",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bipn09",1);
  this_ptr->bone_indices[1] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  return;
}
