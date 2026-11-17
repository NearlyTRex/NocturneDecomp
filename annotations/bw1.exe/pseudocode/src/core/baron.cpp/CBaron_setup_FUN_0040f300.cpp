// Name: core_baron.cpp_CBaron_setup_FUN_0040f300
// Address: 0040f300
// Address Range: [[0040f300, 0040f4b4]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_setup_FUN_0040f300(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_setup_FUN_0040f300(CBaron *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_hero_cpp_CHero_setup_FUN_004eaa10(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          (&(this_ptr->base).base.model);
  g_BaronIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 head",1);
  g_BaronIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Clavicle",1);
  g_BaronIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Clavicle",1);
  g_BaronIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L UpperArm",1);
  g_BaronIndices[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R UpperArm",1);
  g_BaronIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L ForeArm",1);
  g_BaronIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R ForeArm",1);
  g_BaronIndices[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Foot",1);
  g_BaronIndices[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Foot",1);
  g_BaronIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Thigh",1);
  g_BaronIndices[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Thigh",1);
  g_BaronIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Calf",1);
  g_BaronIndices[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Calf",1);
  g_BaronIndices[0xd] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 L Hand",1);
  g_BaronIndices[0xe] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 R Hand",1);
  g_BaronIndices[0xf] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine2",1);
  g_BaronIndices[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine",1);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_00,"Bip01 Spine1",1);
  this_ptr->target_actor = (CDemonActor *)0x0;
  (this_ptr->base).base.gesture_branch_root = iVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&g_CKeyFramedModelInstanceInstance);
  return;
}
