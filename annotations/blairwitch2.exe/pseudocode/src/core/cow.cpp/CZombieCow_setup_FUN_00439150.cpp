// Name: core_cow.cpp_CZombieCow_setup_FUN_00439150
// Address: 00439150
// Address Range: [[00439150, 00439290]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_setup_FUN_00439150(CZombieCow *this_ptr)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_setup_FUN_00439150(CZombieCow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  this_ptr->bone_spine = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_head = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"neck01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lfrontleg01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rfrontleg01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rbackleg01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lbackleg01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"utter01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"back01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"tail01",1);
  this_ptr->part_indices[9] = iVar1;
  return;
}
