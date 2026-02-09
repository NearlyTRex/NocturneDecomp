// Name: core_cow.cpp_CZombieCow_setup_FUN_004441b0
// Address: 004441b0
// Address Range: [[004441b0, 004442f0]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_setup_FUN_004441b0(CZombieCow *this_ptr)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_setup_FUN_004441b0(CZombieCow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  *(int *)this_ptr->unk = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->unk + 4) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->unk + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"neck01",1);
  *(int *)(this_ptr->unk + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lfrontleg01",1);
  *(int *)(this_ptr->unk + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rfrontleg01",1);
  *(int *)(this_ptr->unk + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rbackleg01",1);
  *(int *)(this_ptr->unk + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lbackleg01",1);
  *(int *)(this_ptr->unk + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->unk + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"utter01",1);
  *(int *)(this_ptr->unk + 0x28) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"back01",1);
  *(int *)(this_ptr->unk + 0x2c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"tail01",1);
  *(int *)(this_ptr->unk + 0x30) = iVar1;
  return;
}
