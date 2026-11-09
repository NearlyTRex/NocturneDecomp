// Name: core_colonel.cpp_FUN_00435680
// Address: 00435680
// Address Range: [[00435680, 00435811]]
// Convention: unknown
// Signature: void core_colonel_cpp_FUN_00435680(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_colonel_cpp_FUN_00435680(CHero *param_1)

{
  CSkeleton *this_ptr;
  
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  DAT_007c150c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_007c1510 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_007c1514 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_007c1518 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_007c151c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_007c1520 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_007c1524 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_007c1528 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_007c152c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_007c1530 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_007c1534 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_007c1538 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_007c153c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  _DAT_007c1540 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_007c1544 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_007c1548 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_007c154c = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25640) = 0;
  return;
}
