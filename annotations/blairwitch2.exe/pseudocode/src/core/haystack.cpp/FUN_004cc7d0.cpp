// Name: core_haystack.cpp_FUN_004cc7d0
// Address: 004cc7d0
// Address Range: [[004cc7d0, 004cc961]]
// Convention: unknown
// Signature: void core_haystack_cpp_FUN_004cc7d0(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_haystack_cpp_FUN_004cc7d0(CHero *param_1)

{
  CSkeleton *this_ptr;
  
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  _DAT_01cede20 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_01cede24 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01cede28 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01cede2c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01cede30 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01cede34 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01cede38 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01cede3c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_01cede40 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_01cede44 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_01cede48 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_01cede4c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_01cede50 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  _DAT_01cede54 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_01cede58 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_01cede5c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_01cede60 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25640) = 0;
  return;
}
