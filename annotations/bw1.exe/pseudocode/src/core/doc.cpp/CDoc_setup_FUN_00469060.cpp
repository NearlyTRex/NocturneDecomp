// Name: core_doc.cpp_CDoc_setup_FUN_00469060
// Address: 00469060
// Address Range: [[00469060, 004693a4]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_CDoc_setup_FUN_00469060(CDoc *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_CDoc_setup_FUN_00469060(CDoc *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  byte bVar2;
  float afStackY_1028 [1015];
  char *pcVar3;
  int iVar4;
  CVector3f CStack_40;
  CVector3f CStack_34;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  
  bVar2 = 0;
  core_hero_cpp_CHero_setup_FUN_004eaa10(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(this_ptr_00);
  _DAT_01b68814 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 head",1);
  _DAT_01b68818 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01b6881c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01b68820 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01b68824 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01b68828 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01b6882c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01b68830 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01b68834 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01b68838 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01b6883c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01b68840 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01b68844 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01b68848 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01b6884c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01b68850 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Neck",1);
  _DAT_01b68854 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01b68858 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01b6885c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Spine",1);
  _DAT_01b68860 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005634f0(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01b68848;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_01b6884c;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_01b68864 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  _DAT_01b68868 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
            (this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            (this_ptr_00,_DAT_01b6884c,&CStack_40);
  fStack_28 = CStack_40.x;
  afStack_24[(uint)bVar2 * -2] = *(float *)((int)&CStack_40 + (uint)bVar2 * -8 + 4);
  afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(float *)((int)&CStack_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&this_ptr->ref_r_hand_bone_pos != (CVector3f *)&fStack_28) {
    (this_ptr->ref_r_hand_bone_pos).x = fStack_28;
    (this_ptr->ref_r_hand_bone_pos).y = afStack_24[0];
    (this_ptr->ref_r_hand_bone_pos).z = afStack_24[1];
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            (&(this_ptr->base).base.model,_DAT_01b68824,&CStack_34);
  afStack_24[2] = CStack_34.x;
  afStack_24[(uint)bVar2 * -2 + 3] = *(float *)((int)&CStack_34 + (uint)bVar2 * -8 + 4);
  afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
       *(float *)((int)&CStack_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  if (&this_ptr->ref_r_upperarm_bone_pos != (CVector3f *)(afStack_24 + 2)) {
    (this_ptr->ref_r_upperarm_bone_pos).x = afStack_24[2];
    (this_ptr->ref_r_upperarm_bone_pos).y = afStack_24[3];
    (this_ptr->ref_r_upperarm_bone_pos).z = fStack_14;
  }
  core_doc_cpp_FUN_0046caa0(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  this_ptr->door_align_timer = 0.0;
  this_ptr->action_timer = 0.0;
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(&(this_ptr->base).base.model);
  this_ptr->quick_turn_active = 0;
  _DAT_01b6886c = 0;
  this_ptr->quick_turn_angle = 0.0;
  return;
}
