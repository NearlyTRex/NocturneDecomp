// Name: core_baron.cpp_FUN_0040f300
// Address: 0040f300
// Address Range: [[0040f300, 0040f4b4]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_0040f300(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_baron_cpp_FUN_0040f300(CHero *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_hero_cpp_FUN_004eaa10(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  DAT_007c3498 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 head",1)
  ;
  _DAT_007c349c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_007c34a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_007c34a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_007c34a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_007c34ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_007c34b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_007c34b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  _DAT_007c34b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  _DAT_007c34bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Thigh",1);
  _DAT_007c34c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Thigh",1);
  _DAT_007c34c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Calf",1);
  _DAT_007c34c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Calf",1);
  DAT_007c34cc = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr,"Bip01 L Hand",1);
  DAT_007c34d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr,"Bip01 R Hand",1);
  _DAT_007c34d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  _DAT_007c34d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x20084) = 0;
  *(int *)(param_1 + 0x2750) = iVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&DAT_007c351c);
  return;
}
