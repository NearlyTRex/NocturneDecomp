// Name: core_batman.cpp_CBatman_setup_FUN_004134a0
// Address: 004134a0
// Address Range: [[004134a0, 00413771]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_setup_FUN_004134a0(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_setup_FUN_004134a0(CBatman *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004796b0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  DAT_00764608 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Head",1);
  _DAT_00764614 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_00764618 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_0076461c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_00764620 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_00764624 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_00764628 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_0076460c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  DAT_00764610 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_0076462c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_00764630 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  DAT_00764634 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine2",1);
  DAT_00764608 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Head",1);
  _DAT_0076461c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_00764620 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  DAT_0076462c = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_00764634 = core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0
                           (this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"tail01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[10] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[0xb] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"lfoot01",1);
  this_ptr->part_indices[0xc] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                    (this_ptr_02,"rfoot01",1);
  this_ptr->part_indices[0xd] = iVar1;
  return;
}
