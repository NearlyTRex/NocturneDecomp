// Name: core_baron.cpp_FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f934]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_0040f780(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_baron_cpp_FUN_0040f780(CHero *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  DAT_007bc498 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_007bc49c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_007bc4a0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_007bc4a4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_007bc4a8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_007bc4ac = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_007bc4b0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_007bc4b4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_007bc4b8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_007bc4bc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_007bc4c0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_007bc4c4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_007bc4c8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  DAT_007bc4cc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  DAT_007bc4d0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_007bc4d4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_007bc4d8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  iVar1 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x25718) = 0;
  *(int *)(param_1 + 0x27c0) = iVar1;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)&DAT_007bc51c);
  return;
}
