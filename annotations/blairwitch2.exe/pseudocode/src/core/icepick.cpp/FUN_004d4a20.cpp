// Name: core_icepick.cpp_FUN_004d4a20
// Address: 004d4a20
// Address Range: [[004d4a20, 004d4c34]]
// Convention: unknown
// Signature: void core_icepick_cpp_FUN_004d4a20(CHero *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_icepick_cpp_FUN_004d4a20(CHero *param_1)

{
  CHero *pCVar1;
  int iVar2;
  CSkeleton *this_ptr;
  
  core_hero_cpp_FUN_004ce4a0(param_1);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)(param_1 + 0x2b4));
  _DAT_01cee0b4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 head",1);
  _DAT_01cee0b8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Clavicle",1);
  _DAT_01cee0bc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Clavicle",1);
  _DAT_01cee0c0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L UpperArm",1);
  _DAT_01cee0c4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R UpperArm",1);
  _DAT_01cee0c8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L ForeArm",1);
  _DAT_01cee0cc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R ForeArm",1);
  _DAT_01cee0d0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Foot",1);
  _DAT_01cee0d4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Foot",1);
  _DAT_01cee0d8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Thigh",1);
  _DAT_01cee0dc = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Thigh",1);
  _DAT_01cee0e0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Calf",1);
  _DAT_01cee0e4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Calf",1);
  _DAT_01cee0e8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 L Hand",1);
  _DAT_01cee0ec = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 R Hand",1);
  _DAT_01cee0f0 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine2",1);
  _DAT_01cee0f4 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine1",1);
  _DAT_01cee0f8 = core_skeleton_cpp_FUN_00540e80(this_ptr,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x261c) = 0;
  *(uint *)(param_1 + 0x2694) = 0;
  *(uint *)(param_1 + 0x25640) = 0;
  *(int *)(param_1 + 0x2618) = _DAT_01cee0e8;
  *(int *)(param_1 + 0x2690) = _DAT_01cee0ec;
  iVar2 = _DAT_01cedef4;
  *(uint *)(param_1 + 0x25664) = 0;
  pCVar1 = *(CHero **)(iVar2 * 4 + 0x1cedee4);
  if (param_1 == pCVar1) {
    *(uint *)(pCVar1 + 0x3434) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x2564c) = 0;
  *(uint *)(param_1 + 0x25648) = 0;
  *(uint *)(param_1 + 0x2566c) = 0;
  return;
}
