// Name: core_stranger.cpp_CStranger_setup_FUN_00562b90
// Address: 00562b90
// Address Range: [[00562b90, 00562edb]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setup_FUN_00562b90(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_setup_FUN_00562b90(CStranger *this_ptr)

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
  core_hero_cpp_CHero_setup_FUN_004ce4a0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(this_ptr_00);
  _DAT_0264be30 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 head",1);
  _DAT_0264be34 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_0264be38 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_0264be3c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_0264be40 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_0264be44 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_0264be48 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_0264be4c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Foot",1);
  _DAT_0264be50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Foot",1);
  _DAT_0264be54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_0264be58 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_0264be5c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Calf",1);
  _DAT_0264be60 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Calf",1);
  _DAT_0264be64 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 L Hand",1);
  _DAT_0264be68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  _DAT_0264be6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Neck",1);
  _DAT_0264be70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine2",1);
  _DAT_0264be74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine1",1);
  _DAT_0264be78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Spine",1);
  _DAT_0264be7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_0264be64;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_0264be68;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_0264be80 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  _DAT_0264be84 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860(&this_ptr_00->base);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
            (this_ptr_00,iVar4,22.0);
  core_skeleton_cpp_FUN_005469a0(this_ptr_00,_DAT_0264be68);
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
  core_skeleton_cpp_FUN_005469a0(&(this_ptr->base).base.model,_DAT_0264be40);
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
  core_stranger_cpp_FUN_00565ff0(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&this_ptr->model,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                          (&(this_ptr->base).base.model);
  _DAT_0264be88 =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00543100(this_ptr_02,&DAT_005eb493,1);
  return;
}
