// Name: core_zombie.cpp_CZombie_setup_FUN_00595c00
// Address: 00595c00
// Address Range: [[00595c00, 00595f22]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_setup_FUN_00595c00(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_zombie_cpp_CZombie_setup_FUN_00595c00(CZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int *piVar1;
  byte *str1;
  byte uVar2;
  ushort uVar3;
  CSkeleton *this_ptr_01;
  int iVar4;
  CDeformableModel *this_ptr_02;
  float fVar5;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00547480(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[0] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 L ForeArm",1);
  this_ptr->bone_indices[3] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 R ForeArm",1);
  this_ptr->bone_indices[4] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 L UpperArm",1);
  this_ptr->bone_indices[5] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_01,"Bip01 R UpperArm",1);
  this_ptr->bone_indices[6] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_indices[7] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  this_ptr->bone_indices[8] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  this_ptr->bone_indices[1] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->bone_indices[2] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  this_ptr->bone_indices[9] = iVar4;
  iVar4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  this_ptr->bone_indices[10] = iVar4;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr_00);
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"r4arm01",0);
  this_ptr->part_indices[3] = iVar4;
  if (iVar4 < 0) {
    this_ptr->part_indices[3] = 0x1d;
  }
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"waist01",0);
  this_ptr->part_indices[4] = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[5] = iVar4;
  iVar4 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[6] = iVar4;
  *(uint *)&(this_ptr->base).base.model.field_0x21b4 = 0;
  iVar4 = _stricmp
                    (&(this_ptr->base).base.model.field_0x2260,"newzomb1.dfm");
  if (iVar4 == 0) {
    iVar4 = this_ptr->part_indices[0];
    this_ptr->part_indices[0] = this_ptr->part_indices[2];
    this_ptr->part_indices[2] = iVar4;
    iVar4 = this_ptr->part_indices[1];
    this_ptr->part_indices[1] = this_ptr->part_indices[3];
    this_ptr->part_indices[3] = iVar4;
  }
  piVar1 = this_ptr->bone_indices + 1;
  uVar2 = *(byte *)((int)piVar1 + 1);
  uVar3 = *(ushort *)((int)piVar1 + 2);
  (this_ptr->base).base.carry_hands[0] = (SCarryHand)*(byte *)piVar1;
  (this_ptr->base).base.carry_hands[1] = (SCarryHand)uVar2;
  *(ushort *)&(this_ptr->base).base.field_0x261a = uVar3;
  *(int *)&(this_ptr->base).base.field_0x261c = this_ptr->part_indices[1];
  *(int *)&(this_ptr->base).base.field_0x2690 = this_ptr->bone_indices[2];
  *(int *)&(this_ptr->base).base.field_0x2694 = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_00487eb0(&this_ptr->base);
  *(uint *)&(this_ptr->base).base.base.field_0xfc = (uint)(this_ptr->is_miner_zombie != 0);
  fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  iVar4 = this_ptr->part_indices[4];
  this_ptr->rise_delay = fVar5;
  if ((-1 < iVar4) && (*(float *)&(this_ptr->base).base.field_0x3444 < 0.0)) {
    *(float *)&(this_ptr->base).base.field_0x3444 =
         *(float *)&(this_ptr->base).base.model.field_0x2248 + (float)_DAT_005eef62;
  }
  str1 = &(this_ptr->base).base.model.field_0x2260;
  this_ptr->bleedout_timer = 0.0;
  this_ptr->is_female = 0;
  iVar4 = _stricmp(str1,"newzchik.dfm");
  if (((iVar4 == 0) ||
      (iVar4 = _stricmp(str1,"zombho1.dfm"), iVar4 == 0)) ||
     (iVar4 = _stricmp(str1,"zombho2.dfm"), iVar4 == 0)) {
    this_ptr->is_female = 1;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  return;
}
