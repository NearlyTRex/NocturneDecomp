// Name: core_ghoul.cpp_FUN_004c1710
// Address: 004c1710
// Address Range: [[004c1710, 004c1971]]
// Convention: unknown
// Signature: void core_ghoul_cpp_FUN_004c1710(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_ghoul_cpp_FUN_004c1710(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_01cb821c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"@Bip01 Head" + 1,1);
  _DAT_01cb8228 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01cb822c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01cb8230 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01cb8234 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01cb8238 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01cb823c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01cb8220 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01cb8224 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01cb8240 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01cb8244 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r high arm01",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r lo arm01",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l high arm01",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l lo arm01",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r thigh01",1);
  *(int *)&param_1[1].field_0x34 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r shin01",1);
  *(int *)&param_1[1].field_0x38 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l thigh01",1);
  *(int *)&param_1[1].field_0x3c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l shin01",1);
  *(int *)&param_1[1].field_0x40 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lo torso01",1);
  *(int *)&param_1[1].field_0x44 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"high torso01",1);
  *(int *)&param_1[1].field_0x48 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0x4c = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1[1].field_0x5c = 0;
  *(uint *)&param_1[1].field_0x60 = 0;
  *(uint *)&param_1[1].field_0x64 = 0;
  *(uint *)&param_1[1].field_0x68 = 0;
  *(uint *)&param_1[1].field_0x6c = 0;
  *(uint *)&param_1[1].field_0x50 = 0;
  *(uint *)&param_1[1].field_0x54 = 0;
  *(uint *)&param_1[1].field_0x58 = 0;
  return;
}
