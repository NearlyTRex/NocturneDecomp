// Name: core_stranger.cpp_CStranger_setup_FUN_005bb4b0
// Address: 005bb4b0
// MANUAL RECONSTRUCTION
// Address Range: [[005bb4b0, 005bb7d8]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_CStranger_setup_FUN_005bb4b0(CStranger *this_ptr)

#include "nocturne.h"

void __cdecl core_stranger_cpp_CStranger_setup_FUN_005bb4b0(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_03;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  CMotionList *pCVar3;
  CVector3f *pCVar2;
  CVector3f *pCVar4;
  CDeformableModel *this_ptr_02;
  char *pcVar5;
  int iVar6;
  CVector3f local_24;
  CVector3f local_18;
  CDeformableModelInstance *this_ptr_00;
  int iVar4;
  char *pcVar3;
  
  core_hero_cpp_CHero_setup_FUN_004f2540(&this_ptr->base);
  this_ptr_03 = &(this_ptr->base).base.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_03);
  g_StrangerIndices[0] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 head",1);
  g_StrangerIndices[1] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Clavicle",1);
  g_StrangerIndices[2] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Clavicle",1);
  g_StrangerIndices[3] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm",1);
  g_StrangerIndices[4] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm",1);
  g_StrangerIndices[5] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm",1);
  g_StrangerIndices[6] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm",1);
  g_StrangerIndices[7] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot",1);
  g_StrangerIndices[8] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot",1);
  g_StrangerIndices[9] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Thigh",1);
  g_StrangerIndices[10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Thigh",1);
  g_StrangerIndices[0xb] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Calf",1);
  g_StrangerIndices[0xc] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Calf",1);
  g_StrangerIndices[0xd] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand",1);
  g_StrangerIndices[0xe] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand",1);
  g_StrangerIndices[0xf] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Neck",1);
  g_StrangerIndices[0x10] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2",1);
  g_StrangerIndices[0x11] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1",1);
  g_StrangerIndices[0x12] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine",1);
  g_StrangerIndices[0x13] =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Pelvis",1);
  iVar4 = 1;
  pcVar3 = "turnlstart";
  (this_ptr->base).base.carry_hands[0].bone_index = g_StrangerIndices[0xd];
  (this_ptr->base).base.carry_hands[1].bone_index = g_StrangerIndices[0xe];
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_03->motion_controller);
  g_StrangerIndices[0x14] =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1,pcVar3,iVar4);
  iVar6 = 1;
  pcVar5 = "turnrstart";
  pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_03->motion_controller);
  g_StrangerIndices[0x15] =
       core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar3,pcVar5,iVar6);
  iVar6 = 1;
  pcVar5 = "pickup";
  pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_03->motion_controller);
  iVar6 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar3,pcVar5,iVar6);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
            (this_ptr_03,iVar6,22.0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr_03,&local_18,g_StrangerIndices[0xe]);
  if (&this_ptr->ref_r_hand_bone_pos != pCVar2) {
    this_ptr->ref_r_hand_bone_pos = *pCVar2;
  }
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base).base.model,&local_24,g_StrangerIndices[4]);
  if (&this_ptr->ref_r_upperarm_bone_pos != pCVar4) {
    this_ptr->ref_r_upperarm_bone_pos = *pCVar4;
  }
  core_stranger_cpp_CStranger_updateProceduralAnimation_FUN_005be520(this_ptr);
  this_ptr->grab_timer = 0.0;
  this_ptr->ladder_blend_time = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&this_ptr->model,"stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  this_ptr->fall_velocity_snapshot = 0.0;
  this_ptr->goggle_sfx_handles[0] = 0;
  this_ptr->goggle_sfx_handles[1] = 0;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                          (&(this_ptr->base).base.model);
  g_StrangerIndices[0x16] =
       core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                 (this_ptr_02,"head01",1);
  return;
}
