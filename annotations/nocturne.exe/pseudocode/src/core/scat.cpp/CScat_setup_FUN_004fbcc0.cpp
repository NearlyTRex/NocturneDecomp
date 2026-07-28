// Name: core_scat.cpp_CScat_setup_FUN_004fbcc0
// Address: 004fbcc0
// Address Range: [[004fbcc0, 004fbe7c]]
// Convention: unknown
// Signature: void core_scat_cpp_CScat_setup_FUN_004fbcc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_CScat_setup_FUN_004fbcc0(int param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_hero_cpp_FUN_004b48d0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                       ((CDeformableModelInstance *)(param_1 + 0x150));
  _DAT_01e53388 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 head",1);
  _DAT_01e5338c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01e53390 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01e53394 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01e53398 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01e5339c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01e533a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01e533a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Foot",1);
  _DAT_01e533a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Foot",1);
  _DAT_01e533ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Thigh",1);
  _DAT_01e533b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Thigh",1);
  _DAT_01e533b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Calf",1);
  _DAT_01e533b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Calf",1);
  _DAT_01e533bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 L Hand",1);
  _DAT_01e533c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 R Hand",1);
  _DAT_01e533c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine2",1);
  _DAT_01e533cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine",1);
  _DAT_01e533c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine1",1);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x1fa3c) = 0;
  *(int *)(param_1 + 0x25bc) = iVar1;
  return;
}
