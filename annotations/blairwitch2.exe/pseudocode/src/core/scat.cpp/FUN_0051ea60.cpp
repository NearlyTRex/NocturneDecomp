// Name: core_scat.cpp_FUN_0051ea60
// Address: 0051ea60
// Address Range: [[0051ea60, 0051ec1c]]
// Convention: unknown
// Signature: void core_scat_cpp_FUN_0051ea60(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_scat_cpp_FUN_0051ea60(CHero *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  _DAT_01e62068 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_01e6206c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01e62070 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01e62074 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01e62078 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01e6207c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01e62080 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01e62084 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_01e62088 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_01e6208c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_01e62090 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_01e62094 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_01e62098 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  _DAT_01e6209c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_01e620a0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_01e620a4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_01e620ac = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  _DAT_01e620a8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x25640) = 0;
  *(int *)(param_1 + 0x27c0) = iVar1;
  return;
}
