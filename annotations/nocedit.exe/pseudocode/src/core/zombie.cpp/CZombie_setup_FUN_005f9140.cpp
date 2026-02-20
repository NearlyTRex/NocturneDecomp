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
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  this_ptr->bone_head = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  this_ptr->bone_l_forearm = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  this_ptr->bone_r_forearm = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm")
  ;
  this_ptr->bone_l_upperarm = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm")
  ;
  this_ptr->bone_r_upperarm = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  this_ptr->bone_l_foot = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  this_ptr->bone_r_foot = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  this_ptr->bone_l_hand = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  this_ptr->bone_r_hand = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  this_ptr->bone_spine = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  this_ptr->bone_spine2 = iVar1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  this_ptr->part_l_arm = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  this_ptr->part_l_forearm = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  this_ptr->part_r_arm = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",0);
  this_ptr->part_r_forearm = iVar1;
  if (iVar1 < 0) {
    this_ptr->part_r_forearm = 0x1d;
  }
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"waist01",0);
  this_ptr->part_waist = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  this_ptr->part_torso = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  this_ptr->part_head = iVar1;
  (this_ptr->base).base.model.part_data.visibility_flags[0x1d] = 0;
  iVar1 = stricmp
                    ((this_ptr->base).base.model.model_name,"newzomb1.dfm");
  if (iVar1 == 0) {
    iVar1 = this_ptr->part_l_arm;
    this_ptr->part_l_arm = this_ptr->part_r_arm;
    this_ptr->part_r_arm = iVar1;
    iVar1 = this_ptr->part_l_forearm;
    this_ptr->part_l_forearm = this_ptr->part_r_forearm;
    this_ptr->part_r_forearm = iVar1;
  }
  (this_ptr->base).base.carry_hands[0].bone_index = this_ptr->bone_l_hand;
  (this_ptr->base).base.carry_hands[0].secondary_bone_index = this_ptr->part_l_forearm;
  (this_ptr->base).base.carry_hands[1].bone_index = this_ptr->bone_r_hand;
  (this_ptr->base).base.carry_hands[1].secondary_bone_index = this_ptr->part_r_forearm;
  core_enemy_cpp_CEnemy_setup_FUN_004a9650(&this_ptr->base);
  (this_ptr->base).base.base.is_transparent = (uint)(this_ptr->is_miner_zombie != 0);
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr->rise_delay = fVar2;
  if ((-1 < this_ptr->part_waist) && ((this_ptr->base).base.collision_cylinder_top < 0.0)) {
    (this_ptr->base).base.collision_cylinder_top =
         (this_ptr->base).base.model.bounding_box.max.y + (float)-0.75;
  }
  str1 = (this_ptr->base).base.model.model_name;
  this_ptr->bleedout_timer = 0.0;
  this_ptr->is_female = 0;
  iVar1 = stricmp(str1,"newzchik.dfm");
  if (((iVar1 == 0) ||
      (iVar1 = stricmp(str1,"zombho1.dfm"), iVar1 == 0)) ||
     (iVar1 = stricmp(str1,"zombho2.dfm"), iVar1 == 0)) {
    this_ptr->is_female = 1;
  }
  this_ptr->alert_sfx_handle = 0;
  this_ptr->pain_sfx_handle = 0;
  return;
}
