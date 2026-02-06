// Name: core_zombie.cpp_CZombie_setup_FUN_005f9140
// Address: 005f9140
// Address Range: [[005f9140, 005f93b1]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_setup_FUN_005f9140(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_zombie_cpp_CZombie_setup_FUN_005f9140(CZombie *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  char *str1;
  uint uVar1;
  CSkeleton *this_ptr_01;
  int iVar2;
  CDeformableModel *this_ptr_02;
  float fVar3;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  *(int *)(this_ptr->unk4 + 4) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  *(int *)(this_ptr->unk4 + 0x10) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  *(int *)(this_ptr->unk4 + 0x14) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm")
  ;
  *(int *)(this_ptr->unk4 + 0x18) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm")
  ;
  *(int *)(this_ptr->unk4 + 0x1c) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  *(int *)(this_ptr->unk4 + 0x20) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  *(int *)(this_ptr->unk4 + 0x24) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  *(int *)(this_ptr->unk4 + 8) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  *(int *)(this_ptr->unk4 + 0xc) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  *(int *)(this_ptr->unk4 + 0x28) = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  *(int *)(this_ptr->unk4 + 0x2c) = iVar2;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->unk4 + 0x30) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->unk4 + 0x34) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->unk4 + 0x38) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",0);
  *(int *)(this_ptr->unk4 + 0x3c) = iVar2;
  if (iVar2 < 0) {
    this_ptr->unk4[0x3c] = '\x1d';
    this_ptr->unk4[0x3d] = '\0';
    this_ptr->unk4[0x3e] = '\0';
    this_ptr->unk4[0x3f] = '\0';
  }
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"waist01",0);
  *(int *)(this_ptr->unk4 + 0x40) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->unk4 + 0x44) = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->unk4 + 0x48) = iVar2;
  (this_ptr->base).base.model.part_visibility_flags[0x1d] = 0;
  iVar2 = stricmp
                    ((this_ptr->base).base.model.model_name,"newzomb1.dfm");
  if (iVar2 == 0) {
    uVar1 = *(uint *)(this_ptr->unk4 + 0x30);
    *(uint *)(this_ptr->unk4 + 0x30) = *(uint *)(this_ptr->unk4 + 0x38);
    *(uint *)(this_ptr->unk4 + 0x38) = uVar1;
    uVar1 = *(uint *)(this_ptr->unk4 + 0x34);
    *(uint *)(this_ptr->unk4 + 0x34) = *(uint *)(this_ptr->unk4 + 0x3c);
    *(uint *)(this_ptr->unk4 + 0x3c) = uVar1;
  }
  (this_ptr->base).base.carry_hands[0].bone_index = *(int *)(this_ptr->unk4 + 8);
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = *(int *)(this_ptr->unk4 + 0x34);
  (this_ptr->base).base.carry_hands[1].bone_index = *(int *)(this_ptr->unk4 + 0xc);
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = *(int *)(this_ptr->unk4 + 0x3c);
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = (uint)(this_ptr->is_miner_zombie != 0);
  fVar3 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  *(float *)(this_ptr->unk4 + 0x5c) = fVar3;
  if ((-1 < *(int *)(this_ptr->unk4 + 0x40)) && ((this_ptr->base).base.collision_cylinder_top < 0.0)
     ) {
    (this_ptr->base).base.collision_cylinder_top =
         (this_ptr->base).base.model.bounding_box.max.y + (float)-0.75;
  }
  str1 = (this_ptr->base).base.model.model_name;
  this_ptr->unk4[0x50] = '\0';
  this_ptr->unk4[0x51] = '\0';
  this_ptr->unk4[0x52] = '\0';
  this_ptr->unk4[0x53] = '\0';
  this_ptr->unk4[0] = '\0';
  this_ptr->unk4[1] = '\0';
  this_ptr->unk4[2] = '\0';
  this_ptr->unk4[3] = '\0';
  iVar2 = stricmp(str1,"newzchik.dfm");
  if (((iVar2 == 0) ||
      (iVar2 = stricmp(str1,"zombho1.dfm"), iVar2 == 0)) ||
     (iVar2 = stricmp(str1,"zombho2.dfm"), iVar2 == 0)) {
    this_ptr->unk4[0] = '\x01';
    this_ptr->unk4[1] = '\0';
    this_ptr->unk4[2] = '\0';
    this_ptr->unk4[3] = '\0';
  }
  this_ptr->unk4[0x58] = '\0';
  this_ptr->unk4[0x59] = '\0';
  this_ptr->unk4[0x5a] = '\0';
  this_ptr->unk4[0x5b] = '\0';
  this_ptr->unk4[0x54] = '\0';
  this_ptr->unk4[0x55] = '\0';
  this_ptr->unk4[0x56] = '\0';
  this_ptr->unk4[0x57] = '\0';
  return;
}
