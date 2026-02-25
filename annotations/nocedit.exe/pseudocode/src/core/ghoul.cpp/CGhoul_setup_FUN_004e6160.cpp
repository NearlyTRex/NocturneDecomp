// Name: core_ghoul.cpp_CGhoul_setup_FUN_004e6160
// Address: 004e6160
// Address Range: [[004e6160, 004e63c1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004e6160(CGhoul *this_ptr)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004e6160(CGhoul *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02d832fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head",1);
  INT_02d83308 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm",1);
  INT_02d8330c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm",1);
  INT_02d83310 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm",1);
  INT_02d83314 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm",1);
  INT_02d83318 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot",1);
  INT_02d8331c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot",1);
  INT_02d83300 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand",1);
  INT_02d83304 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand",1);
  INT_02d83320 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine",1);
  INT_02d83324 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r high arm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r lo arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l high arm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l lo arm01",1);
  this_ptr->part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r thigh01",1);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r shin01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l thigh01",1);
  this_ptr->part_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l shin01",1);
  this_ptr->part_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lo torso01",1);
  this_ptr->part_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"high torso01",1);
  this_ptr->part_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[10] = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->stun_timer = 0.0;
  this_ptr->dark_waypoint = (CDemonActor *)0x0;
  this_ptr->heal_timer = 0.0;
  this_ptr->is_berserk = 0;
  this_ptr->stuck_timer = 0.0;
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[2] = 0;
  return;
}
