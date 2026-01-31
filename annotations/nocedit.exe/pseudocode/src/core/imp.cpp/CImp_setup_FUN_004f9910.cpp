// Name: core_imp.cpp_CImp_setup_FUN_004f9910
// Address: 004f9910
// Address Range: [[004f9910, 004f9bf0]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_setup_FUN_004f9910(CImp *this_ptr)

#include "nocturne.h"

void __cdecl core_imp_cpp_CImp_setup_FUN_004f9910(CImp *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  float fVar2;
  
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  INT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_02db8a00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  INT_02db8a04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  INT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02db8a10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  INT_02db8a14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  INT_02db89f8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  INT_02db89fc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  INT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_02db8a1c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1");
  INT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  INT_02db89f4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  INT_02db8a08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  INT_02db8a0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  INT_02db8a18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  INT_02db8a20 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->unk + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->unk + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->unk + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->unk + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->unk + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->unk + 0x28) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->unk + 0x2c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->unk + 0x30) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"ass01",1);
  *(int *)(this_ptr->unk + 0x34) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->unk + 0x38) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  this_ptr->unk[8] = '\0';
  this_ptr->unk[9] = '\0';
  this_ptr->unk[10] = '\0';
  this_ptr->unk[0xb] = '\0';
  this_ptr->unk[0xc] = '\0';
  this_ptr->unk[0xd] = '\0';
  this_ptr->unk[0xe] = '\0';
  this_ptr->unk[0xf] = '\0';
  *(int *)(this_ptr->unk + 0x3c) = iVar1;
  *(int *)(this_ptr->base).base.carry_hands[0].unk1 = INT_02db89f8;
  *(uint *)((this_ptr->base).base.carry_hands[0].unk1 + 4) =
       *(uint *)(this_ptr->unk + 0x18);
  *(int *)(this_ptr->base).base.carry_hands[1].unk1 = INT_02db89fc;
  *(uint *)((this_ptr->base).base.carry_hands[1].unk1 + 4) =
       *(uint *)(this_ptr->unk + 0x20);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(10.0,20.0);
  *(float *)(this_ptr->unk + 0x10) = fVar2;
  return;
}
