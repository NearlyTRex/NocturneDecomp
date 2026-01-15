// Name: core_batcreat.cpp_CBatCreature_FUN_00415150
// Address: 00415150
// Address Range: [[00415150, 00415449]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_00415150(CBatCreature * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415150(CBatCreature *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_0082274c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_00822758 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_0082275c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_00822760 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_00822764 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_00822768 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_0082276c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_00822750 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  DAT_00822754 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  _DAT_00822770 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_00822774 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  _DAT_00822778 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  DAT_0082274c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_00822760 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_00822764 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_00822770 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_00822778 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"ass01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"tail01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x28) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x2c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x30) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x34) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lwing",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x38) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rwing",1);
  this_ptr->field1_0xbeb4[0x40] = '\0';
  this_ptr->field1_0xbeb4[0x41] = '\0';
  this_ptr->field1_0xbeb4[0x42] = '\0';
  this_ptr->field1_0xbeb4[0x43] = '\0';
  this_ptr->field1_0xbeb4[0x44] = '\0';
  this_ptr->field1_0xbeb4[0x45] = '\0';
  this_ptr->field1_0xbeb4[0x46] = '\0';
  this_ptr->field1_0xbeb4[0x47] = '\0';
  this_ptr->field1_0xbeb4[0x48] = '\0';
  this_ptr->field1_0xbeb4[0x49] = '\0';
  this_ptr->field1_0xbeb4[0x4a] = '\0';
  this_ptr->field1_0xbeb4[0x4b] = '\0';
  this_ptr->field1_0xbeb4[0x4c] = '\0';
  this_ptr->field1_0xbeb4[0x4d] = '\0';
  this_ptr->field1_0xbeb4[0x4e] = '\0';
  this_ptr->field1_0xbeb4[0x4f] = '\0';
  *(int *)(this_ptr->field1_0xbeb4 + 0x3c) = iVar1;
  return;
}
