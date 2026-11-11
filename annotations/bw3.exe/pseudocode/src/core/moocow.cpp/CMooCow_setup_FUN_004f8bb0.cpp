// Name: core_moocow.cpp_CMooCow_setup_FUN_004f8bb0
// Address: 004f8bb0
// Address Range: [[004f8bb0, 004f8c98]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_setup_FUN_004f8bb0(CMooCow *this_ptr)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_setup_FUN_004f8bb0(CMooCow *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &(this_ptr->base).model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  this_ptr->bone_spine = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_head = iVar1;
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0(&this_ptr->base);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005c918f,1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lforearm",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rforearm",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso",1);
  this_ptr->part_indices[5] = iVar1;
  return;
}
