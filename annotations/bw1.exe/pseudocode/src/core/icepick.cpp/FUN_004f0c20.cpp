// Name: core_icepick.cpp_FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f0e34]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004f0c20(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004f0c20(CHero *param_1)

{
  CHero *pCVar1;
  int iVar2;
  CSkeleton *this_ptr;
  
  core_hero_cpp_FUN_004eaa10(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)(param_1 + 0x158));
  _DAT_01d06c74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 head",1);
  _DAT_01d06c78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01d06c7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01d06c80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01d06c84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01d06c88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01d06c8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01d06c90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Foot",1);
  _DAT_01d06c94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Foot",1);
  _DAT_01d06c98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Thigh",1);
  _DAT_01d06c9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Thigh",1);
  _DAT_01d06ca0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Calf",1);
  _DAT_01d06ca4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Calf",1);
  _DAT_01d06ca8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 L Hand",1);
  _DAT_01d06cac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 R Hand",1);
  _DAT_01d06cb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine2",1);
  _DAT_01d06cb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine1",1);
  _DAT_01d06cb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25ac) = 0;
  *(uint *)(param_1 + 0x2624) = 0;
  *(uint *)(param_1 + 0x1ffac) = 0;
  *(int *)(param_1 + 0x25a8) = _DAT_01d06ca8;
  *(int *)(param_1 + 0x2620) = _DAT_01d06cac;
  iVar2 = _DAT_01d06ab4;
  *(uint *)(param_1 + 0x1ffd0) = 0;
  pCVar1 = *(CHero **)(iVar2 * 4 + 0x1d06aa4);
  if (param_1 == pCVar1) {
    *(uint *)(pCVar1 + 0x2ff0) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x1ffb8) = 0;
  *(uint *)(param_1 + 0x1ffb4) = 0;
  *(uint *)(param_1 + 0x1ffd8) = 0;
  return;
}
