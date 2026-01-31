// Name: core_batman.cpp_CBatman_setup_FUN_00416510
// Address: 00416510
// Address Range: [[00416510, 004167e1]]
// Convention: __cdecl
// Signature: void __cdecl core_batman_cpp_CBatman_setup_FUN_00416510(CBatman *this_ptr)

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_setup_FUN_00416510(CBatman *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_008227b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_008227c4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_008227c8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_008227cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_008227d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_008227d4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_008227d8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_008227bc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_008227c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_008227dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_008227e0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1");
  INT_008227e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  INT_008227b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_008227cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_008227d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_008227dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_008227e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->unk1 + 0x6c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->unk1 + 0x70) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->unk1 + 0x74) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->unk1 + 0x78) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->unk1 + 0x7c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->unk1 + 0x80) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"ass01",1);
  *(int *)(this_ptr->unk1 + 0x84) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"tail01",1);
  *(int *)(this_ptr->unk1 + 0x88) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->unk1 + 0x8c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->unk1 + 0x90) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->unk1 + 0x94) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->unk1 + 0x98) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lfoot01",1);
  *(int *)(this_ptr->unk1 + 0x9c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rfoot01",1);
  *(int *)(this_ptr->unk1 + 0xa0) = iVar1;
  return;
}
