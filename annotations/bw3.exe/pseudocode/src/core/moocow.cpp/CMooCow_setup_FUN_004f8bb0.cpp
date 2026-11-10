// Name: core_moocow.cpp_CMooCow_setup_FUN_004f8bb0
// Address: 004f8bb0
// Address Range: [[004f8bb0, 004f8c98]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_setup_FUN_004f8bb0(CMooCow *this_ptr)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_setup_FUN_004f8bb0(CMooCow *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xcdcc = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xcdd0 = iVar1;
  core_charactr_cpp_CCharacter_setup_FUN_0042b0e0((CCharacter *)this_ptr);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005c918f,1);
  *(int *)&this_ptr->field_0xcdd8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lforearm",1);
  *(int *)&this_ptr->field_0xcddc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rforearm",1);
  *(int *)&this_ptr->field_0xcde0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin",1);
  *(int *)&this_ptr->field_0xcde4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin",1);
  *(int *)&this_ptr->field_0xcde8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso",1);
  *(int *)&this_ptr->field_0xcdec = iVar1;
  return;
}
