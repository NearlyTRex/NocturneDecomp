// Name: core_batman.cpp_CBatman_setup_FUN_00412be0
// Address: 00412be0
// Address Range: [[00412be0, 00412eb1]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_setup_FUN_00412be0(CBatman *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_setup_FUN_00412be0(CBatman *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  DAT_007bc7b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Head",1);
  _DAT_007bc7c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_007bc7c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007bc7cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007bc7d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007bc7d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_007bc7bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  DAT_007bc7c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007bc7dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007bc7e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  DAT_007bc7e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine2",1);
  DAT_007bc7b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Head",1);
  _DAT_007bc7cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007bc7dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine",1);
  DAT_007bc7e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                           (this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"tail01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[10] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[0xb] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lfoot01",1);
  this_ptr->part_indices[0xc] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rfoot01",1);
  this_ptr->part_indices[0xd] = iVar1;
  return;
}
