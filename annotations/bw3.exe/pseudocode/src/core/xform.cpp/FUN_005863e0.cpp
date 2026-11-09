// Name: core_xform.cpp_FUN_005863e0
// Address: 005863e0
// Address Range: [[005863e0, 005864a5]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005863e0(CEnemy *param_1)

#include "nocturne.h"

void core_xform_cpp_FUN_005863e0(CEnemy *param_1)

{
  CSkeleton *this_ptr;
  int iVar1;
  
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)&param_1->field_0x158);
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                       ((CDeformableModelInstance *)&param_1->field_0x158);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine1",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Pelvis",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine1",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  return;
}
