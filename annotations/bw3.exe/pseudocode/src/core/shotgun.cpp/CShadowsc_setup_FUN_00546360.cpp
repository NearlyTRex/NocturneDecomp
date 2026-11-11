// Name: core_shotgun.cpp_CShadowsc_setup_FUN_00546360
// Address: 00546360
// Address Range: [[00546360, 005463e3]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_setup_FUN_00546360(CShadowsc *this_ptr)

#include "nocturne.h"

void __cdecl core_shotgun_cpp_CShadowsc_setup_FUN_00546360(CShadowsc *this_ptr)

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
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 R Finger0",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                    (this_ptr_01,"Bip01 L Finger0",1);
  this_ptr->bone_indices[3] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  return;
}
