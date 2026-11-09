// Name: core_batman.cpp_FUN_00412be0
// Address: 00412be0
// Address Range: [[00412be0, 00412eb1]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00412be0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_batman_cpp_FUN_00412be0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  this_ptr = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480
            ((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)this_ptr);
  DAT_007bc7b8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_007bc7c4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_007bc7c8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_007bc7cc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_007bc7d4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_007bc7d8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_007bc7bc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  DAT_007bc7c0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  DAT_007bc7dc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_007bc7e0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  DAT_007bc7e4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  DAT_007bc7b8 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_007bc7cc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  DAT_007bc7dc = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  DAT_007bc7e4 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0x64 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x68 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0x6c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x70 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x74 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0x78 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"ass01",1);
  *(int *)&param_1[1].field_0x7c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"tail01",1);
  *(int *)&param_1[1].field_0x80 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0x84 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0x88 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0x8c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0x90 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lfoot01",1);
  *(int *)&param_1[1].field_0x94 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rfoot01",1);
  *(int *)&param_1[1].field_0x98 = iVar1;
  return;
}
