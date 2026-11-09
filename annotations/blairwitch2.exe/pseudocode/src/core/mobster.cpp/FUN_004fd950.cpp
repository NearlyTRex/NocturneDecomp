// Name: core_mobster.cpp_FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fdc5f]]
// Convention: unknown
// Signature: void core_mobster_cpp_FUN_004fd950(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mobster_cpp_FUN_004fd950(CEnemy *param_1)

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
  _DAT_01d1c710 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01d1c71c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_01d1c720 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_01d1c724 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d1c728 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d1c72c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Foot",1);
  _DAT_01d1c730 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Foot",1);
  _DAT_01d1c714 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L Hand",1);
  _DAT_01d1c718 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R Hand",1);
  _DAT_01d1c734 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d1c738 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine1",1);
  _DAT_01d1c73c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  _DAT_01d1c710 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Head",1);
  _DAT_01d1c724 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_01d1c728 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_01d1c734 = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine",1);
  _DAT_01d1c73c = core_skeleton_cpp_FUN_00540e80(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0xa4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0xa8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0xac = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0xb0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0xb4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0xb8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0xbc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0xc0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"waist01",1);
  *(int *)&param_1[1].field_0xc4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0xc8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00543100(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0xcc = iVar1;
  *(int *)&param_1->field_0x2618 = _DAT_01d1c714;
  *(uint *)&param_1->field_0x261c = *(uint *)&param_1[1].field_0xa8;
  *(int *)&param_1->field_0x2690 = _DAT_01d1c718;
  *(uint *)&param_1->field_0x2694 = *(uint *)&param_1[1].field_0xb0;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(param_1);
  *(uint *)&param_1[1].field_0xd0 = 0;
  *(uint *)&param_1[1].field_0xd4 = 0;
  if (*(int *)&param_1[1].field_0x20 != 0) {
    *(uint *)&param_1->field_0x10af4 = 1;
  }
  *(uint *)&param_1[1].field_0x98 = 0;
  *(uint *)&param_1[1].field_0x9c = 0;
  *(uint *)&param_1[1].field_0xa0 = 0;
  *(uint *)&param_1[1].field_0x94 = 0;
  return;
}
