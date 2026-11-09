// Name: core_gargoyle.cpp_FUN_004c4ee0
// Address: 004c4ee0
// Address Range: [[004c4ee0, 004c5199]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_FUN_004c4ee0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_FUN_004c4ee0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01d22ca4 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d22cb0 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d22cb4 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d22cb8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d22cbc = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d22cc0 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d22cc4 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d22ca8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d22cac = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d22cc8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d22ccc = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d22cd0 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d22ca4 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d22cb8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d22cbc = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d22cc8 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d22cd0 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"larm01",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"ass01",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"tail01",1);
  *(uint *)&param_1[1].field_0x40 = 0;
  *(uint *)&param_1[1].field_0x44 = 0;
  *(int *)&param_1[1].field_0x2c = iVar1;
  return;
}
