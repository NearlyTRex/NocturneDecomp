// Name: core_mobster.cpp_CMobster_setup_FUN_00525340
// Address: 00525340
// Address Range: [[00525340, 0052564f]]
// Convention: __cdecl
// Signature: void __cdecl core_mobster_cpp_CMobster_setup_FUN_00525340(CMobster *this_ptr)

#include "nocturne.h"

void __cdecl core_mobster_cpp_CMobster_setup_FUN_00525340(CMobster *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonActor *pCVar1;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_02f37ed4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_02f37ed8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02f37ee4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_02f37ee8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_02f37ecc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_02f37ed0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_02f37ef0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1");
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  INT_02f37ec8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_02f37edc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02f37ee0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02f37eec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_02f37ef4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->unk2 + 0x10) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->unk2 + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->unk2 + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->unk2 + 0x1c) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->unk2 + 0x20) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->unk2 + 0x24) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->unk2 + 0x28) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->unk2 + 0x2c) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"waist01",1);
  *(int *)(this_ptr->unk2 + 0x30) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->unk2 + 0x34) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->unk2 + 0x38) = iVar2;
  (this_ptr->base).base.carry_hands[0].bone_index = INT_02f37ecc;
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = *(int *)(this_ptr->unk2 + 0x14);
  (this_ptr->base).base.carry_hands[1].bone_index = INT_02f37ed0;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = *(int *)(this_ptr->unk2 + 0x1c);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->unk2[0x3c] = '\0';
  this_ptr->unk2[0x3d] = '\0';
  this_ptr->unk2[0x3e] = '\0';
  this_ptr->unk2[0x3f] = '\0';
  pCVar1 = this_ptr->our_post;
  this_ptr->unk2[0x40] = '\0';
  this_ptr->unk2[0x41] = '\0';
  this_ptr->unk2[0x42] = '\0';
  this_ptr->unk2[0x43] = '\0';
  if (pCVar1 != (CDemonActor *)0x0) {
    this_ptr->unk1[4] = '\x01';
    this_ptr->unk1[5] = '\0';
    this_ptr->unk1[6] = '\0';
    this_ptr->unk1[7] = '\0';
  }
  this_ptr->unk2[4] = '\0';
  this_ptr->unk2[5] = '\0';
  this_ptr->unk2[6] = '\0';
  this_ptr->unk2[7] = '\0';
  this_ptr->unk2[8] = '\0';
  this_ptr->unk2[9] = '\0';
  this_ptr->unk2[10] = '\0';
  this_ptr->unk2[0xb] = '\0';
  this_ptr->unk2[0xc] = '\0';
  this_ptr->unk2[0xd] = '\0';
  this_ptr->unk2[0xe] = '\0';
  this_ptr->unk2[0xf] = '\0';
  this_ptr->unk2[0] = '\0';
  this_ptr->unk2[1] = '\0';
  this_ptr->unk2[2] = '\0';
  this_ptr->unk2[3] = '\0';
  return;
}
