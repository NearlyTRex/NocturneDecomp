// Name: core_cow.cpp_FUN_00444fd0
// Address: 00444fd0
// Address Range: [[00444fd0, 00445110]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00444fd0(CEnemy *param_1)

#include "nocturne.h"

void core_cow_cpp_FUN_00444fd0(CEnemy *param_1)

{
  byte *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  CDeformableModel *this_ptr_01;
  
  this_ptr = &param_1->field_0x158;
  core_skeleton_cpp_FUN_0054e6b0((CDeformableModelInstance *)this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Spine2",1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = core_skeleton_cpp_FUN_00548090(this_ptr_00,"Bip01 Head",1);
  *(int *)&param_1[1].field_0x4 = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00489110(param_1);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr);
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"head01",1);
  *(int *)&param_1[1].field_0xc = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"neck01",1);
  *(int *)&param_1[1].field_0x10 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lfrontleg01",1);
  *(int *)&param_1[1].field_0x14 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rfrontleg01",1);
  *(int *)&param_1[1].field_0x18 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"rbackleg01",1);
  *(int *)&param_1[1].field_0x1c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"lbackleg01",1);
  *(int *)&param_1[1].field_0x20 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"torso01",1);
  *(int *)&param_1[1].field_0x24 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"utter01",1);
  *(int *)&param_1[1].field_0x28 = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"back01",1);
  *(int *)&param_1[1].field_0x2c = iVar1;
  iVar1 = core_skeleton_cpp_FUN_0054a310(this_ptr_01,"tail01",1);
  *(int *)&param_1[1].field_0x30 = iVar1;
  return;
}
