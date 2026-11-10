// Name: core_sentinel.cpp_CSentinel_setup_FUN_0054ba80
// Address: 0054ba80
// Address Range: [[0054ba80, 0054bc2f]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_0054ba80(CSentinel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_0054ba80(CSentinel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  _DAT_01e820fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  _DAT_01e82108 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01e8210c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01e82110 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01e82114 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01e82118 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01e8211c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01e82100 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01e82104 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01e82120 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01e82124 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01e82128 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01e820fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  _DAT_01e82110 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01e82114 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01e82120 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01e82128 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  this_ptr->hover_timer = 0.0;
  this_ptr->sfx_handle = 0;
  return;
}
