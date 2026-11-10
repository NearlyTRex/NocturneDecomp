// Name: core_imp.cpp_CImp_setup_FUN_004d6770
// Address: 004d6770
// Address Range: [[004d6770, 004d6a67]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_setup_FUN_004d6770(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_setup_FUN_004d6770(CImp *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  byte uVar1;
  ushort uVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar3;
  float fVar4;
  
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  _DAT_01d5bc0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  _DAT_01d5bc18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01d5bc1c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01d5bc20 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d5bc28 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01d5bc2c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01d5bc10 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01d5bc14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01d5bc30 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d5bc34 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01d5bc38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01d5bc0c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Head",1);
  _DAT_01d5bc20 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01d5bc30 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01d5bc38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[8] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"head01",1);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->part_indices[10] = iVar3;
  uVar1 = DAT_01d5bc10_1;
  uVar2 = uRam01d5bc12;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)DAT_01d5bc10;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar1;
  *(ushort *)&(this_ptr->base).base.field_0x25aa = uVar2;
  *(int *)&(this_ptr->base).base.field_0x25ac = this_ptr->part_indices[1];
  *(int *)&(this_ptr->base).base.field_0x2620 = _DAT_01d5bc14;
  *(int *)&(this_ptr->base).base.field_0x2624 = this_ptr->part_indices[3];
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
  this_ptr->laugh_timer = fVar4;
  return;
}
