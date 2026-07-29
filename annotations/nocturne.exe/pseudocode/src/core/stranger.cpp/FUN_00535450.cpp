// Name: core_stranger.cpp_FUN_00535450
// Address: 00535450
// Address Range: [[00535450, 00535778]]
// Convention: unknown
// Signature: void core_stranger_cpp_FUN_00535450(CStranger *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_stranger_cpp_FUN_00535450(CStranger *param_1)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar1;
  CVector3f *pCVar2;
  CDeformableModel *this_ptr_01;
  char *pcVar3;
  int iVar4;
  CVector3f local_24;
  CVector3f local_18;
  
  core_hero_cpp_FUN_004b48d0(&param_1->base);
  this_ptr = &(param_1->base).base.model;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(this_ptr);
  _DAT_02dc9f50 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 head",1);
  _DAT_02dc9f54 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Clavicle",1);
  _DAT_02dc9f58 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Clavicle",1);
  _DAT_02dc9f5c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L UpperArm",1);
  _DAT_02dc9f60 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R UpperArm",1);
  _DAT_02dc9f64 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L ForeArm",1);
  _DAT_02dc9f68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R ForeArm",1);
  _DAT_02dc9f6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Foot",1);
  _DAT_02dc9f70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Foot",1);
  _DAT_02dc9f74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Thigh",1);
  _DAT_02dc9f78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Thigh",1);
  _DAT_02dc9f7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Calf",1);
  _DAT_02dc9f80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Calf",1);
  _DAT_02dc9f84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 L Hand",1);
  _DAT_02dc9f88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 R Hand",1);
  _DAT_02dc9f8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Neck",1);
  _DAT_02dc9f90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine2",1);
  _DAT_02dc9f94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine1",1);
  _DAT_02dc9f98 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Spine",1);
  _DAT_02dc9f9c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(this_ptr_00,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (param_1->base).base.carry_hands[0].bone_index = _DAT_02dc9f84;
  (param_1->base).base.carry_hands[1].bone_index = _DAT_02dc9f88;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr->motion_controller);
  _DAT_02dc9fa0 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "turnrstart";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr->motion_controller);
  _DAT_02dc9fa4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  iVar4 = 1;
  pcVar3 = "pickup";
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&this_ptr->motion_controller);
  iVar4 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(pCVar1,pcVar3,iVar4);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(this_ptr,iVar4,22.0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (this_ptr,&local_18,_DAT_02dc9f88);
  if (&param_1->ref_r_hand_bone_pos != pCVar2) {
    (param_1->ref_r_hand_bone_pos).x = pCVar2->x;
    (param_1->ref_r_hand_bone_pos).y = pCVar2->y;
    (param_1->ref_r_hand_bone_pos).z = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                     (&(param_1->base).base.model,&local_24,_DAT_02dc9f60);
  if (&param_1->ref_r_upperarm_bone_pos != pCVar2) {
    (param_1->ref_r_upperarm_bone_pos).x = pCVar2->x;
    (param_1->ref_r_upperarm_bone_pos).y = pCVar2->y;
    (param_1->ref_r_upperarm_bone_pos).z = pCVar2->z;
  }
  core_stranger_cpp_FUN_005384d0(param_1);
  param_1->grab_timer = 0.0;
  param_1->ladder_blend_time = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (&param_1->model,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&param_1->model);
  param_1->fall_velocity_snapshot = 0.0;
  param_1->goggle_sfx_handles[0] = 0;
  param_1->goggle_sfx_handles[1] = 0;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
                          (&(param_1->base).base.model);
  _DAT_02dc9fa8 =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00519b30
                 (this_ptr_01,"head01",1);
  return;
}
