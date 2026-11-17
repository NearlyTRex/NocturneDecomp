// Name: core_sentinel.cpp_CSentinel_setup_FUN_0052a790
// Address: 0052a790
// Address Range: [[0052a790, 0052a93f]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_0052a790(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_0052a790(CSentinel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  g_INT_ARRAY_01e6614c[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_01e6614c[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  g_INT_ARRAY_01e6614c[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  g_INT_ARRAY_01e6614c[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_01e6614c[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_01e6614c[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  g_INT_ARRAY_01e6614c[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  g_INT_ARRAY_01e6614c[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  g_INT_ARRAY_01e6614c[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  g_INT_ARRAY_01e6614c[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_01e6614c[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  g_INT_ARRAY_01e6614c[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  g_INT_ARRAY_01e6614c[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  g_INT_ARRAY_01e6614c[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  g_INT_ARRAY_01e6614c[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  g_INT_ARRAY_01e6614c[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  g_INT_ARRAY_01e6614c[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  this_ptr->hover_timer = 0.0;
  this_ptr->sfx_handle = 0;
  return;
}
