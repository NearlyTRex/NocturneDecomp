// Name: core_scat.cpp_FUN_00540b90
// Address: 00540b90
// Address Range: [[00540b90, 00540d4c]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_00540b90(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_00540b90(CHero *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_hero_cpp_FUN_004eaa10(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  _DAT_01e7e014 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 head",1);
  _DAT_01e7e018 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01e7e01c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01e7e020 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01e7e024 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01e7e028 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01e7e02c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01e7e030 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  _DAT_01e7e034 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  _DAT_01e7e038 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Thigh",1);
  _DAT_01e7e03c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Thigh",1);
  _DAT_01e7e040 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Calf",1);
  _DAT_01e7e044 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Calf",1);
  _DAT_01e7e048 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  _DAT_01e7e04c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  _DAT_01e7e050 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  _DAT_01e7e058 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  _DAT_01e7e054 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x1ffac) = 0;
  *(int *)(param_1 + 0x2750) = iVar1;
  return;
}
