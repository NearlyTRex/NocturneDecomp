// Name: core_prye.cpp_CPrye_setup_FUN_00518680
// Address: 00518680
// Address Range: [[00518680, 00518a70]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_CPrye_setup_FUN_00518680(CPrye *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_CPrye_setup_FUN_00518680(CPrye *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
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
  core_hero_cpp_FUN_004d26b0(this_ptr);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(this_ptr_00);
  _DAT_01ed36dc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 head",1);
  _DAT_01ed36e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_01ed36e4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_01ed36e8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_01ed36ec =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_01ed36f0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_01ed36f4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_01ed36f8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Foot",1);
  _DAT_01ed36fc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Foot",1);
  _DAT_01ed3700 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_01ed3704 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_01ed3708 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Calf",1);
  _DAT_01ed370c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Calf",1);
  _DAT_01ed3710 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Hand",1);
  _DAT_01ed3714 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Hand",1);
  _DAT_01ed3718 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Neck",1);
  _DAT_01ed371c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine2",1);
  _DAT_01ed3720 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine1",1);
  _DAT_01ed3724 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Spine",1);
  _DAT_01ed3728 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 Pelvis",1);
  _DAT_01ed372c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger1",1);
  _DAT_01ed3730 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 L Finger11",1);
  _DAT_01ed3734 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Finger1",1);
  _DAT_01ed3738 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_01,"Bip01 R Finger11",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_01ed3710;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_01ed3714;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
  _DAT_01ed373c = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
  _DAT_01ed3740 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
            (this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_FUN_0054dbd0(this_ptr_00,_DAT_01ed3714);
  fStack_28 = fStack_34;
  (&stack0xffffffdc)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&this_ptr->ref_r_hand_bone_pos != (CVector3f *)&stack0xffffffd8) {
    (this_ptr->ref_r_hand_bone_pos).x = fStack_28;
    (this_ptr->ref_r_hand_bone_pos).y = fStack_24;
    (this_ptr->ref_r_hand_bone_pos).z = fStack_20;
  }
  core_skeleton_cpp_FUN_0054dbd0(&(this_ptr->base).base.model,_DAT_01ed36ec);
  fStack_40 = fStack_1c;
  (&stack0xffffffc4)[(uint)bVar2 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffe8 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&this_ptr->ref_r_upperarm_bone_pos != (CVector3f *)&stack0xffffffc0) {
    (this_ptr->ref_r_upperarm_bone_pos).x = fStack_40;
    (this_ptr->ref_r_upperarm_bone_pos).y = fStack_3c;
    (this_ptr->ref_r_upperarm_bone_pos).z = fStack_38;
  }
  core_prye_cpp_FUN_0051c1c0(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  this_ptr->door_align_timer = 0.0;
  this_ptr->action_timer = 0.0;
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(&(this_ptr->base).base.model);
  this_ptr->quick_turn_active = 0;
  _DAT_01ed3744 = 0;
  this_ptr->quick_turn_angle = 0.0;
  sound_sndmain_cpp_FUN_00556230("prye-pain1.wav");
  sound_sndmain_cpp_FUN_00556230("prye-pain2.wav");
  sound_sndmain_cpp_FUN_00556230("prye-pain3.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death1.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death2.wav");
  sound_sndmain_cpp_FUN_00556230("prye-death3.wav");
  sound_sndmain_cpp_FUN_00556230("fall-1.wav");
  return;
}
