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
                           (this_ptr_01,"Bip01 Head");
  INT_02d83308 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_02d8330c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_02d83310 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02d83314 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02d83318 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_02d8331c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_02d83300 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_02d83304 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_02d83320 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_02d83324 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r high arm01",1);
  *(int *)this_ptr->unk3 = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r lo arm01",1);
  *(int *)(this_ptr->unk3 + 4) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l high arm01",1);
  *(int *)(this_ptr->unk3 + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l lo arm01",1);
  *(int *)(this_ptr->unk3 + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r thigh01",1);
  *(int *)(this_ptr->unk3 + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r shin01",1);
  *(int *)(this_ptr->unk3 + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l thigh01",1);
  *(int *)(this_ptr->unk3 + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l shin01",1);
  *(int *)(this_ptr->unk3 + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lo torso01",1);
  *(int *)(this_ptr->unk3 + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"high torso01",1);
  *(int *)(this_ptr->unk3 + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->unk3 + 0x28) = iVar1;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr->unk3[0x38] = '\0';
  this_ptr->unk3[0x39] = '\0';
  this_ptr->unk3[0x3a] = '\0';
  this_ptr->unk3[0x3b] = '\0';
  this_ptr->unk3[0x3c] = '\0';
  this_ptr->unk3[0x3d] = '\0';
  this_ptr->unk3[0x3e] = '\0';
  this_ptr->unk3[0x3f] = '\0';
  this_ptr->unk3[0x40] = '\0';
  this_ptr->unk3[0x41] = '\0';
  this_ptr->unk3[0x42] = '\0';
  this_ptr->unk3[0x43] = '\0';
  this_ptr->unk3[0x44] = '\0';
  this_ptr->unk3[0x45] = '\0';
  this_ptr->unk3[0x46] = '\0';
  this_ptr->unk3[0x47] = '\0';
  this_ptr->unk3[0x48] = '\0';
  this_ptr->unk3[0x49] = '\0';
  this_ptr->unk3[0x4a] = '\0';
  this_ptr->unk3[0x4b] = '\0';
  this_ptr->unk3[0x2c] = '\0';
  this_ptr->unk3[0x2d] = '\0';
  this_ptr->unk3[0x2e] = '\0';
  this_ptr->unk3[0x2f] = '\0';
  this_ptr->unk3[0x30] = '\0';
  this_ptr->unk3[0x31] = '\0';
  this_ptr->unk3[0x32] = '\0';
  this_ptr->unk3[0x33] = '\0';
  this_ptr->unk3[0x34] = '\0';
  this_ptr->unk3[0x35] = '\0';
  this_ptr->unk3[0x36] = '\0';
  this_ptr->unk3[0x37] = '\0';
  return;
}
