// Name: core_imp.cpp_FUN_004d6770
// Address: 004d6770
// Address Range: [[004d6770, 004d6a67]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004d6770(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_imp_cpp_FUN_004d6770(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  uint uVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01d5bc0c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d5bc18 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d5bc1c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d5bc20 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d5bc28 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d5bc2c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d5bc10 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d5bc14 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d5bc30 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d5bc34 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d5bc38 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d5bc0c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_01d5bc20 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d5bc30 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d5bc38 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"ass01",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"head01",1);
  *(uint *)(param_1 + 1) = 0;
  *(uint *)&param_1[1].field_0x4 = 0;
  *(int *)&param_1[1].field_0x34 = iVar1;
  *(int *)&param_1->field_0x25a8 = _DAT_01d5bc10;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0x10;
  *(int *)&param_1->field_0x2620 = _DAT_01d5bc14;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0x18;
  uVar2 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
  *(uint *)&param_1[1].field_0x8 = uVar2;
  return;
}
