// Name: core_carved.cpp_FUN_00425ab0
// Address: 00425ab0
// Address Range: [[00425ab0, 00425d3d]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00425ab0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00425ab0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Forearm",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0x38 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0x3c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0x40 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0x44 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0x48 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0x4c = iVar1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0x50 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x54 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x58 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"r4arm01",0);
  *(int *)&param_1[1].field_0x5c = iVar1;
  if (iVar1 < 0) {
    *(uint *)&param_1[1].field_0x5c = 0x3b;
  }
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"waist01",0);
  *(int *)&param_1[1].field_0x60 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x64 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"head01",1);
  *(uint *)&param_1->field_0x2384 = 0;
  *(int *)&param_1[1].field_0x68 = iVar1;
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x28;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0x54;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x2c;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0x5c;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  if ((-1 < *(int *)&param_1[1].field_0x60) && (*(float *)&param_1->field_0x3280 < 0.0)) {
    *(float *)&param_1->field_0x3280 = *(float *)&param_1->field_0x2490 + (float)_DAT_005b7ab7;
  }
  *(uint *)&param_1[1].field_0x20 = 0;
  *(uint *)&param_1[1].field_0x74 = 0;
  *(uint *)&param_1[1].field_0x78 = 0;
  iVar1 = *(int *)&param_1->field_0x3268;
  *(uint *)&param_1[1].field_0x70 = 0;
  if (iVar1 != 0) {
    return;
  }
  *(uint *)&param_1->field_0xce5c = 0x41200000;
  *(uint *)&param_1->field_0xce60 = 0x40a00000;
  *(uint *)&param_1->field_0x2538 = 0x41a00000;
  return;
}
