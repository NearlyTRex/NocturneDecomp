// Name: core_bride.cpp_CBride_setup_FUN_00423940
// Address: 00423940
// Address Range: [[00423940, 00423b69]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_setup_FUN_00423940(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bride_cpp_CBride_setup_FUN_00423940(CBride *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  float fVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(this_ptr_00);
  this_ptr->dismember_death_timer = 0.0;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  DAT_007c5388 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007c5394 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  DAT_007c5398 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007c53a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007c53a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  DAT_007c538c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 L Hand",1);
  DAT_007c5390 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 R Hand",1);
  DAT_007c539c = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  DAT_007c53a0 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  DAT_007c53ac = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007c53b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lshoulderpiece",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"l4armpiece",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rshoulderpiece",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"r4armpiece",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lshinpiece",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"rshinpiece",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"torsopiece",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"lowerbodypiece",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"headpiece",1);
  this_ptr->part_indices[8] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(2.0,20.0);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->action_timer = fVar2;
  return;
}
