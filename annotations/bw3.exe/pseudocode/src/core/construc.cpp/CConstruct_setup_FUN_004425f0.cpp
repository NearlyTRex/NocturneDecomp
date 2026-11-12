// Name: core_construc.cpp_CConstruct_setup_FUN_004425f0
// Address: 004425f0
// Address Range: [[004425f0, 004429d2]]
// Convention: __cdecl
// Signature: void __cdecl core_construc_cpp_CConstruct_setup_FUN_004425f0(CConstruct *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004428a4) */
/* WARNING: Removing unreachable block (ram,0x0044296f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_construc_cpp_CConstruct_setup_FUN_004425f0(CConstruct *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  uint uVar1;
  int iVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar3;
  float10 fVar4;
  
  iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,"COMBATMODEHARD");
  if (iVar2 == 0) {
    this_ptr->difficulty_speed_scale = 0.75;
  }
  else {
    this_ptr->difficulty_speed_scale = 1.0;
  }
  core_enemy_cpp_CEnemy_setup_FUN_00489110(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0054e6b0(this_ptr_00);
  fVar4 = (float10)(this_ptr->base).base.hit_points;
  round();
  this_ptr->initial_hit_points = (int)ROUND(fVar4);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  DAT_007f8e64 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Head",1);
  DAT_007f8e68 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Dummy05",1)
  ;
  _DAT_007f8e7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Forearm",1);
  _DAT_007f8e80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_007f8e84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_007f8e88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_007f8e8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_007f8e90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  DAT_007f8e6c = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 L Hand",1);
  _DAT_007f8e70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  DAT_007f8e74 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 R Finger0",1);
  _DAT_007f8e78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger0",1);
  DAT_007f8e94 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090
                           (this_ptr_01,"Bip01 Spine",1);
  _DAT_007f8e98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b9506,1);
  this_ptr->part_indices[0] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"torso",1);
  this_ptr->part_indices[1] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lforearm",1);
  this_ptr->part_indices[2] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b951a,1);
  this_ptr->part_indices[3] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rforearm",1);
  this_ptr->part_indices[4] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,&DAT_005b9528,1);
  this_ptr->part_indices[5] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"waist",1);
  this_ptr->part_indices[6] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lthigh",1);
  this_ptr->part_indices[8] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"lshin",1);
  this_ptr->part_indices[9] = iVar2;
  iVar2 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rthigh",1);
  this_ptr->part_indices[10] = iVar2;
  iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0054a310
                    (this_ptr_02,"rshin",1);
  this_ptr->sfx_handles[0] = 0;
  iVar2 = (this_ptr->base).base.been_damaged;
  this_ptr->part_indices[0xb] = iVar3;
  if (iVar2 == 0) {
    uVar1 = this_ptr->construct_variant;
    if (uVar1 == 0) {
      (this_ptr->base).attack_damage = 10.0;
      (this_ptr->base).pain_threshold = 10.0;
      (this_ptr->base).base.hit_points = 45.0;
      fVar4 = (float10)(this_ptr->base).base.hit_points;
      round();
      this_ptr->initial_hit_points = (int)ROUND(fVar4);
      return;
    }
    if (1 < uVar1) {
      if (uVar1 == 2) {
        (this_ptr->base).attack_damage = 20.0;
        (this_ptr->base).pain_threshold = 10.0;
        (this_ptr->base).base.hit_points = 65.0;
        this_ptr->trail_texture_type = 2;
        fVar4 = (float10)(this_ptr->base).base.hit_points;
        round();
        this_ptr->initial_hit_points = (int)ROUND(fVar4);
        return;
      }
      fVar4 = (float10)(this_ptr->base).base.hit_points;
      round();
      this_ptr->initial_hit_points = (int)ROUND(fVar4);
      return;
    }
    (this_ptr->base).attack_damage = 15.0;
    (this_ptr->base).pain_threshold = 10.0;
    this_ptr->trail_texture_type = 3;
    (this_ptr->base).base.hit_points = 55.0;
    fVar4 = (float10)(this_ptr->base).base.hit_points;
    round();
    this_ptr->initial_hit_points = (int)ROUND(fVar4);
    return;
  }
  uVar1 = this_ptr->construct_variant;
  if (uVar1 == 0) {
    this_ptr->initial_hit_points = 0x2d;
    return;
  }
  if (1 < uVar1) {
    if (uVar1 == 2) {
      this_ptr->initial_hit_points = 0x41;
      return;
    }
    return;
  }
  this_ptr->initial_hit_points = 0x37;
  return;
}
