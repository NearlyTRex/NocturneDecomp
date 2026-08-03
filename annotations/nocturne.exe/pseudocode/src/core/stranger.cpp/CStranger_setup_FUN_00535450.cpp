// Name: core_stranger.cpp_CStranger_setup_FUN_00535450
// Address: 00535450
// Address Range: [[00535450, 00535778]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setup_FUN_00535450(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_setup_FUN_00535450(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  CVector3f *pCVar2;
  CDeformableModel *this_ptr_02;
  char *pcVar3;
  int iVar4;
  CVector3f local_24;
  CVector3f local_18;
  
  core_hero_cpp_CHero_setup_FUN_004b48d0(&this_ptr->base);
  this_ptr_00 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr_00);
  _DAT_02dc9f50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 head",1);
  _DAT_02dc9f54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Clavicle",1);
  _DAT_02dc9f58 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Clavicle",1);
  _DAT_02dc9f5c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L UpperArm",1);
  _DAT_02dc9f60 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R UpperArm",1);
  _DAT_02dc9f64 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L ForeArm",1);
  _DAT_02dc9f68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R ForeArm",1);
  _DAT_02dc9f6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Foot",1);
  _DAT_02dc9f70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Foot",1);
  _DAT_02dc9f74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Thigh",1);
  _DAT_02dc9f78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Thigh",1);
  _DAT_02dc9f7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Calf",1);
  _DAT_02dc9f80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Calf",1);
  _DAT_02dc9f84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 L Hand",1);
  _DAT_02dc9f88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 R Hand",1);
  _DAT_02dc9f8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Neck",1);
  _DAT_02dc9f90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine2",1);
  _DAT_02dc9f94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine1",1);
  _DAT_02dc9f98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Spine",1);
  _DAT_02dc9f9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = _DAT_02dc9f84;
  (this_ptr->base).base.carry_hands[1].bone_index = _DAT_02dc9f88;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  _DAT_02dc9fa0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  _DAT_02dc9fa4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr_00->motion_controller);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
            (this_ptr_00,iVar4,22.0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (this_ptr_00,&local_18,_DAT_02dc9f88);
  if (&this_ptr->ref_r_hand_bone_pos != pCVar2) {
    (this_ptr->ref_r_hand_bone_pos).x = pCVar2->x;
    (this_ptr->ref_r_hand_bone_pos).y = pCVar2->y;
    (this_ptr->ref_r_hand_bone_pos).z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (&(this_ptr->base).base.model,&local_24,_DAT_02dc9f60);
  if (&this_ptr->ref_r_upperarm_bone_pos != pCVar2) {
    (this_ptr->ref_r_upperarm_bone_pos).x = pCVar2->x;
    (this_ptr->ref_r_upperarm_bone_pos).y = pCVar2->y;
    (this_ptr->ref_r_upperarm_bone_pos).z = pCVar2->z;
  }
  core_stranger_cpp_FUN_005384d0(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&this_ptr->model,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                          (&(this_ptr->base).base.model);
  _DAT_02dc9fa8 =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                 (this_ptr_02,"head01",1);
  return;
}
