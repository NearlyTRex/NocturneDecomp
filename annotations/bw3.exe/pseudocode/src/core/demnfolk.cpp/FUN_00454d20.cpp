// Name: core_demnfolk.cpp_FUN_00454d20
// Address: 00454d20
// Address Range: [[00454d20, 00454fbc]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00454d20(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00454d20(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  uint uVar2;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x94 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L ForeArm",1);
  *(int *)&param_1[1].field_0xa0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R ForeArm",1);
  *(int *)&param_1[1].field_0xa4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L UpperArm",1);
  *(int *)&param_1[1].field_0xa8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R UpperArm",1);
  *(int *)&param_1[1].field_0xac = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Foot",1);
  *(int *)&param_1[1].field_0xb0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Foot",1);
  *(int *)&param_1[1].field_0xb4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 L Hand",1);
  *(int *)&param_1[1].field_0x98 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 R Hand",1);
  *(int *)&param_1[1].field_0x9c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine",1);
  *(int *)&param_1[1].field_0xb8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)&param_1[1].field_0xbc = iVar1;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005ba475,1);
  *(int *)&param_1[1].field_0xc0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"l4arm",1);
  *(int *)&param_1[1].field_0xc4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005ba480,1);
  *(int *)&param_1[1].field_0xc8 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"r4arm",0);
  *(int *)&param_1[1].field_0xcc = iVar1;
  if (iVar1 < 0) {
    *(uint *)&param_1[1].field_0xcc = 0x3b;
  }
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"waist",0);
  *(int *)&param_1[1].field_0xd0 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso",1);
  *(int *)&param_1[1].field_0xd4 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,&DAT_005ba497,1);
  *(uint *)&param_1->field_0x2384 = 0;
  *(int *)&param_1[1].field_0xd8 = iVar1;
  *(uint *)&param_1->field_0x25a8 = *(uint *)&param_1[1].field_0x98;
  *(uint *)&param_1->field_0x25ac = *(uint *)&param_1[1].field_0xc4;
  *(uint *)&param_1->field_0x2620 = *(uint *)&param_1[1].field_0x9c;
  *(uint *)&param_1->field_0x2624 = *(uint *)&param_1[1].field_0xcc;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  *(uint *)&param_1->field_0xfc = (uint)(*(int *)&param_1[1].field_0x84 != 0);
  uVar2 = core_actor_cpp_FUN_0040ce40(0,0x3f800000);
  *(uint *)&param_1[1].field_0xec = uVar2;
  if ((-1 < *(int *)&param_1[1].field_0xd0) && (*(float *)&param_1->field_0x3280 < 0.0)) {
    *(float *)&param_1->field_0x3280 = *(float *)&param_1->field_0x2490 + (float)_DAT_005ba4a2;
  }
  *(uint *)&param_1[1].field_0x90 = 0;
  *(uint *)&param_1[1].field_0xe4 = 0;
  *(uint *)&param_1[1].field_0xe8 = 0;
  *(uint *)&param_1[1].field_0xe0 = 0;
  return;
}
