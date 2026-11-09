// Name: core_zombprie.cpp_FUN_0058d5e0
// Address: 0058d5e0
// Address Range: [[0058d5e0, 0058d937]]
// Convention: unknown
// Signature: void core_zombprie_cpp_FUN_0058d5e0(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombprie_cpp_FUN_0058d5e0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  CDeformableModel *this_ptr_01;
  int iVar1;
  SMotion *pSVar2;
  
  if (*(int *)&param_1->field_0x3268 == 0) {
    *(uint *)&param_1->field_0xce5c = 0x41200000;
    *(uint *)&param_1->field_0xce60 = 0x41700000;
    *(uint *)&param_1->field_0x2538 = 0x42fa0000;
  }
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  _DAT_02d24970 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d2497c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02d24980 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02d24984 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d2498c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02d24990 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02d24974 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02d24978 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02d24994 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d24998 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine1",1);
  _DAT_02d2499c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02d24970 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  _DAT_02d24984 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02d24988 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02d24994 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  _DAT_02d2499c = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"larm01",1);
  *(int *)&param_1[1].field_0x8c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"l4arm01",1);
  *(int *)&param_1[1].field_0x90 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rarm01",1);
  *(int *)&param_1[1].field_0x94 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"r4arm01",1);
  *(int *)&param_1[1].field_0x98 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rthigh01",1);
  *(int *)&param_1[1].field_0x9c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rshin01",1);
  *(int *)&param_1[1].field_0xa0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lthigh01",1);
  *(int *)&param_1[1].field_0xa4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lshin01",1);
  *(int *)&param_1[1].field_0xa8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"waist01",1);
  *(int *)&param_1[1].field_0xac = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0xb0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0xb4 = iVar1;
  *(int *)&param_1->field_0x25a8 = _DAT_02d24974;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0x90;
  *(int *)&param_1->field_0x2620 = _DAT_02d24978;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0x98;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1[1].field_0xb8 = 0;
  *(uint *)&param_1[1].field_0xbc = 0;
  if (*(int *)&param_1[1].field_0x14 != 0) {
    *(uint *)&param_1->field_0xd050 = 1;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  if (*(int *)(pSVar2 + 0x24) == 5) {
    *(uint *)&param_1->field_0x2540 = 0;
  }
  else {
    *(uint *)&param_1->field_0x2540 = 2;
  }
  *(uint *)&param_1[1].field_0x84 = 0;
  *(uint *)&param_1[1].field_0x88 = 0;
  *(uint *)&param_1[1].field_0x80 = 0;
  return;
}
