// Name: core_stranger.cpp_CStranger_setup_FUN_00585670
// Address: 00585670
// Address Range: [[00585670, 005859bb]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setup_FUN_00585670(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_setup_FUN_00585670(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  CDeformableModel *this_ptr_02;
  byte bVar2;
  float afStackY_1028 [1015];
  char *pcVar3;
  int iVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar2 = 0;
  core_hero_cpp_CHero_setup_FUN_004eaa10(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  _DAT_02c83600 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 head",1);
  _DAT_02c83604 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_02c83608 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_02c8360c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_02c83610 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_02c83614 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_02c83618 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_02c8361c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_02c83620 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_02c83624 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_02c83628 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_02c8362c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_02c83630 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_02c83634 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_02c83638 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_02c8363c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Neck",1);
  _DAT_02c83640 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_02c83644 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_02c83648 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  _DAT_02c8364c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_02c83634;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_02c83638;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_02c83650 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_02c83654 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
            (this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_FUN_00569040(this_ptr_00,_DAT_02c83638);
  fStack_40 = fStack_1c;
  (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&this_ptr->ref_r_hand_bone_pos != (CVector3f *)&stack0xffffffc0) {
    (this_ptr->ref_r_hand_bone_pos).x = fStack_40;
    (this_ptr->ref_r_hand_bone_pos).y = fStack_3c;
    (this_ptr->ref_r_hand_bone_pos).z = fStack_38;
  }
  core_skeleton_cpp_FUN_00569040(&(this_ptr->base).base.model,_DAT_02c83610);
  fStack_28 = fStack_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&this_ptr->ref_r_upperarm_bone_pos != (CVector3f *)&stack0xffffffd8) {
    (this_ptr->ref_r_upperarm_bone_pos).x = fStack_28;
    (this_ptr->ref_r_upperarm_bone_pos).y = fStack_24;
    (this_ptr->ref_r_upperarm_bone_pos).z = fStack_20;
  }
  core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_00588ad0(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&this_ptr->model,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          (&(this_ptr->base).base.model);
  _DAT_02c83658 =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780(this_ptr_02,&DAT_005f6706,1);
  return;
}
