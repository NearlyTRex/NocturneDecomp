// Name: core_sentinel.cpp_CSentinel_setup_FUN_00567e20
// Address: 00567e20
// Address Range: [[00567e20, 00567fcf]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_00567e20(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_setup_FUN_00567e20(CSentinel *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  g_SentinelIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head",1);
  g_SentinelIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm",1);
  g_SentinelIndices[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm",1);
  g_SentinelIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm",1);
  g_SentinelIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm",1);
  g_SentinelIndices[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot",1);
  g_SentinelIndices[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot",1);
  g_SentinelIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand",1);
  g_SentinelIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand",1);
  g_SentinelIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine",1);
  g_SentinelIndices[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1",1);
  g_SentinelIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2",1);
  g_SentinelIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head",1);
  g_SentinelIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm",1);
  g_SentinelIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm",1);
  g_SentinelIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine",1);
  g_SentinelIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2",1);
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  this_ptr->hover_timer = 0.0;
  this_ptr->sfx_handle = 0;
  return;
}
