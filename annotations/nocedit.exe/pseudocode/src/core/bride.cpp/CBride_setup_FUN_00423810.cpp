// Name: core_bride.cpp_CBride_setup_FUN_00423810
// Address: 00423810
// Address Range: [[00423810, 00423a04]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_setup_FUN_00423810(CBride *this_ptr)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_setup_FUN_00423810(CBride *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  float fVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_00822cdc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_00822ce8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_00822cec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_00822cf8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_00822cfc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_00822ce0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_00822ce4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_00822cf0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_00822cf4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_00822d00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_00822d04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshoulderpiece",1);
  *(int *)(this_ptr->unk + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4armpiece",1);
  *(int *)(this_ptr->unk + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshoulderpiece",1);
  *(int *)(this_ptr->unk + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4armpiece",1);
  *(int *)(this_ptr->unk + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshinpiece",1);
  *(int *)(this_ptr->unk + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshinpiece",1);
  *(int *)(this_ptr->unk + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torsopiece",1);
  *(int *)(this_ptr->unk + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lowerbodypiece",1);
  *(int *)(this_ptr->unk + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"headpiece",1);
  *(int *)(this_ptr->unk + 0x28) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(2.0,20.0);
  this_ptr->unk[0x30] = '\0';
  this_ptr->unk[0x31] = '\0';
  this_ptr->unk[0x32] = '\0';
  this_ptr->unk[0x33] = '\0';
  this_ptr->unk[0x34] = '\0';
  this_ptr->unk[0x35] = '\0';
  this_ptr->unk[0x36] = '\0';
  this_ptr->unk[0x37] = '\0';
  *(float *)(this_ptr->unk + 0x2c) = fVar2;
  return;
}
