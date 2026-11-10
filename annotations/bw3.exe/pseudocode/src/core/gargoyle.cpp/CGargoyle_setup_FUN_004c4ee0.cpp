// Name: core_gargoyle.cpp_CGargoyle_setup_FUN_004c4ee0
// Address: 004c4ee0
// Address Range: [[004c4ee0, 004c5199]]
// Convention: __cdecl
// Signature: void __cdecl core_gargoyle_cpp_CGargoyle_setup_FUN_004c4ee0(CGargoyle *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gargoyle_cpp_CGargoyle_setup_FUN_004c4ee0(CGargoyle *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  _DAT_01d22ca4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  _DAT_01d22cb0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01d22cb4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01d22cb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d22cbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d22cc0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01d22cc4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01d22ca8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01d22cac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01d22cc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d22ccc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01d22cd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01d22ca4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  _DAT_01d22cb8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d22cbc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d22cc8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d22cd0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[10] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"tail01",1);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->part_indices[0xb] = iVar1;
  return;
}
