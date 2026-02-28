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
  CSkeleton *this_ptr_01;
  int iVar1;
  CDeformableModel *this_ptr_02;
  float fVar2;
  
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 L ForeArm",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 R ForeArm",1);
  this_ptr->bone_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 L UpperArm",1);
  this_ptr->bone_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                    (this_ptr_01,"Bip01 R UpperArm",1);
  this_ptr->bone_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot",1);
  this_ptr->bone_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot",1);
  this_ptr->bone_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine",1);
  this_ptr->bone_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2",1);
  this_ptr->bone_indices[10] = iVar1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  this_ptr->part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",0);
  this_ptr->part_indices[3] = iVar1;
  if (iVar1 < 0) {
    this_ptr->part_indices[3] = 0x1d;
  }
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"waist01",0);
  this_ptr->part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  this_ptr->part_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  this_ptr->part_indices[6] = iVar1;
  (this_ptr->base).base.model.part_data.visibility_flags[0x1d] = 0;
  iVar1 = _stricmp
                    ((this_ptr->base).base.model.model_name,"newzomb1.dfm");
  if (iVar1 == 0) {
    iVar1 = this_ptr->part_indices[0];
    this_ptr->part_indices[0] = this_ptr->part_indices[2];
    this_ptr->part_indices[2] = iVar1;
    iVar1 = this_ptr->part_indices[1];
    this_ptr->part_indices[1] = this_ptr->part_indices[3];
    this_ptr->part_indices[3] = iVar1;
  }
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_indices[1];
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = this_ptr->part_indices[1];
  (this_ptr->base).base.carry_hands[1].bone_index = this_ptr->bone_indices[2];
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = this_ptr->part_indices[3];
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = (uint)(this_ptr->is_miner_zombie != 0);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  iVar1 = this_ptr->part_indices[4];
  this_ptr->rise_delay = fVar2;
  if ((-1 < iVar1) && ((this_ptr->base).base.collision_cylinder_top < 0.0)) {
    (this_ptr->base).base.collision_cylinder_top =
         (this_ptr->base).base.model.bounding_box.max.y + (float)-0.75;
  }
  str1 = (this_ptr->base).base.model.model_name;
  this_ptr->bleedout_timer = 0.0;
  this_ptr->is_female = 0;
  iVar1 = _stricmp(str1,"newzchik.dfm");
  if (((iVar1 == 0) ||
      (iVar1 = _stricmp(str1,"zombho1.dfm"), iVar1 == 0)) ||
     (iVar1 = _stricmp(str1,"zombho2.dfm"), iVar1 == 0)) {
    this_ptr->is_female = 1;
  }
  this_ptr->sfx_handles[1] = 0;
  this_ptr->sfx_handles[0] = 0;
  return;
}
