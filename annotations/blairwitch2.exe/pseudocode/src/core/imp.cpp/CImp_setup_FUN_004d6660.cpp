// Name: core_imp.cpp_CImp_setup_FUN_004d6660
// Address: 004d6660
// Address Range: [[004d6660, 004d6957]]
// Convention: __cdecl
// Signature: void __cdecl core_imp_cpp_CImp_setup_FUN_004d6660(CImp *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_imp_cpp_CImp_setup_FUN_004d6660(CImp *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  byte uVar1;
  ushort uVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar3;
  float fVar4;
  
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  _DAT_01cee138 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01cee144 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01cee148 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01cee14c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cee150 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cee154 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01cee158 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01cee13c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01cee140 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01cee15c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01cee160 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01cee164 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01cee138 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  _DAT_01cee14c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01cee150 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01cee15c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_01cee164 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"r4arm01",1);
  this_ptr->part_indices[3] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rthigh01",1);
  this_ptr->part_indices[4] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rshin01",1);
  this_ptr->part_indices[5] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lthigh01",1);
  this_ptr->part_indices[6] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"lshin01",1);
  this_ptr->part_indices[7] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"ass01",1);
  this_ptr->part_indices[8] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[9] = iVar3;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"head01",1);
  this_ptr->sfx_handles[0] = 0;
  this_ptr->sfx_handles[1] = 0;
  this_ptr->part_indices[10] = iVar3;
  uVar1 = DAT_01cee13c_1;
  uVar2 = uRam01cee13e;
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)DAT_01cee13c;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar1;
  *(ushort *)&(this_ptr->base).base.field_0x261a = uVar2;
  *(int *)&(this_ptr->base).base.field_0x261c = this_ptr->part_indices[1];
  *(int *)&(this_ptr->base).base.field_0x2690 = _DAT_01cee140;
  *(int *)&(this_ptr->base).base.field_0x2694 = this_ptr->part_indices[3];
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(10.0,20.0);
  this_ptr->laugh_timer = fVar4;
  return;
}
