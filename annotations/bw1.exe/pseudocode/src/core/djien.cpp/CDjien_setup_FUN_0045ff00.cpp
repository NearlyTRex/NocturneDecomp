// Name: core_djien.cpp_CDjien_setup_FUN_0045ff00
// Address: 0045ff00
// Address Range: [[0045ff00, 00460224]]
// Convention: __cdecl
// Signature: void __cdecl core_djien_cpp_CDjien_setup_FUN_0045ff00(CDjien *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_djien_cpp_CDjien_setup_FUN_0045ff00(CDjien *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  int iVar1;
  CDjien *pCVar2;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  float10 fVar4;
  CDjien *pCVar3;
  
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_00569b20(&(this_ptr->base).base.model);
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    this_ptr->difficulty_speed_scale = 0.75;
  }
  else {
    this_ptr->difficulty_speed_scale = 1.0;
  }
  pCVar2 = this_ptr;
  do {
    pCVar3 = (CDjien *)((pCVar2->base).base.base.actor_name + 4);
    pCVar2->sack_damage[0] = 0.0;
    pCVar2 = pCVar3;
  } while (pCVar3 != (CDjien *)((this_ptr->base).base.base.actor_name + 0x18));
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  this_ptr->bone_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Head",1);
  this_ptr->bone_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 Ponytail12",1);
  this_ptr->bone_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0
                    (this_ptr_01,"Bip01 Ponytail22",1);
  this_ptr->bone_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy22",1);
  this_ptr->bone_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy23",1);
  this_ptr->bone_indices[5] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack01",1);
  this_ptr->bone_indices[6] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack02",1);
  this_ptr->bone_indices[7] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack03",1);
  this_ptr->bone_indices[8] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack04",1);
  this_ptr->bone_indices[9] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack05",1);
  this_ptr->bone_indices[10] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Sack06",1);
  this_ptr->bone_indices[0xb] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy4",1);
  this_ptr->bone_indices[0xc] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy24",1);
  this_ptr->bone_indices[0xd] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy25",1);
  this_ptr->bone_indices[0xe] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy26",1);
  this_ptr->bone_indices[0xf] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy27",1);
  this_ptr->bone_indices[0x10] = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Dummy28",1);
  this_ptr->bone_indices[0x11] = iVar1;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack01",1);
  this_ptr->sack_part_indices[0] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack02",1);
  this_ptr->sack_part_indices[1] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack03",1);
  this_ptr->sack_part_indices[2] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack04",1);
  this_ptr->sack_part_indices[3] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack05",1);
  this_ptr->sack_part_indices[4] = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                    (this_ptr_02,"sack06",1);
  this_ptr->sack_part_indices[5] = iVar1;
  if (*(int *)(0x01D2C900 + 0x1008) == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,"PuzzleModeHard");
    if (iVar1 == 0) {
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->sack_part_indices[3]] = 0;
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->sack_part_indices[4]] = 0;
      (this_ptr->base).base.model.part_data.visibility_flags[this_ptr->sack_part_indices[5]] = 0;
      this_ptr->num_sacks_to_blow = 3;
    }
    else {
      this_ptr->num_sacks_to_blow = 6;
    }
  }
  fVar4 = (float10)(this_ptr->base).base.hit_points;
  round();
  this_ptr->state_timer = 0.0;
  _DAT_00612270 = (int)ROUND(fVar4);
  core_enemy_cpp_CEnemy_setup_FUN_004a0510(&this_ptr->base);
  return;
}
