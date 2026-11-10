// Name: core_moocow.cpp_CMooCow_setup_FUN_00521370
// Address: 00521370
// Address Range: [[00521370, 00521458]]
// Convention: __cdecl
// Signature: void __cdecl core_moocow_cpp_CMooCow_setup_FUN_00521370(CMooCow *this_ptr)

#include "nocturne.h"

void __cdecl core_moocow_cpp_CMooCow_setup_FUN_00521370(CMooCow *this_ptr)

{
  byte *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20
            ((CDeformableModelInstance *)this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  *(int *)&this_ptr->field_0xc1d0 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  *(int *)&this_ptr->field_0xc1d4 = iVar1;
  core_charactr_cpp_CCharacter_setup_FUN_0042c510((CCharacter *)this_ptr);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          ((CDeformableModelInstance *)this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,&DAT_005ea355,1);
  *(int *)&this_ptr->field_0xc1dc = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lforearm",1);
  *(int *)&this_ptr->field_0xc1e0 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rforearm",1);
  *(int *)&this_ptr->field_0xc1e4 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lshin",1);
  *(int *)&this_ptr->field_0xc1e8 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rshin",1);
  *(int *)&this_ptr->field_0xc1ec = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"torso",1);
  *(int *)&this_ptr->field_0xc1f0 = iVar1;
  return;
}
