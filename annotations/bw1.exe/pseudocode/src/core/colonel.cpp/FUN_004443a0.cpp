// Name: core_colonel.cpp_FUN_004443a0
// Address: 004443a0
// Address Range: [[004443a0, 00444531]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_004443a0(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_004443a0(CHero *param_1)

{
  CSkeleton *this_ptr;
  
  core_hero_cpp_FUN_004eaa10(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  DAT_007db570 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 head",1)
  ;
  _DAT_007db574 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_007db578 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_007db57c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_007db580 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_007db584 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_007db588 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_007db58c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  _DAT_007db590 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  _DAT_007db594 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Thigh",1);
  _DAT_007db598 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Thigh",1);
  _DAT_007db59c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Calf",1);
  _DAT_007db5a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Calf",1);
  _DAT_007db5a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  _DAT_007db5a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  _DAT_007db5ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  _DAT_007db5b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x1ffac) = 0;
  return;
}
