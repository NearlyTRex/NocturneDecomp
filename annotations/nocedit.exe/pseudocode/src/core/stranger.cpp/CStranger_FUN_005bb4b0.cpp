// Name: core_stranger.cpp_CStranger_FUN_005bb4b0
// Address: 005bb4b0
// Address Range: [[005bb4b0, 005bb7d8]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005bb4b0(CStranger * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_FUN_005bb4b0(CStranger *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CMotionList *pCVar1;
  int motion_index;
  CVector3f *pCVar2;
  CDeformableModel *this_ptr_02;
  BADSPACEBASE *in_ESP;
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base_hero);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_03f6bacc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 head");
  DAT_03f6bad0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Clavicle");
  DAT_03f6bad4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Clavicle");
  DAT_03f6bad8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L UpperArm");
  DAT_03f6badc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R UpperArm");
  DAT_03f6bae0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L ForeArm");
  DAT_03f6bae4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R ForeArm");
  DAT_03f6bae8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Foot");
  DAT_03f6baec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Foot");
  _DAT_03f6baf0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Thigh");
  _DAT_03f6baf4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Thigh");
  _DAT_03f6baf8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Calf");
  DAT_03f6bafc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Calf");
  DAT_03f6bb00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 L Hand");
  DAT_03f6bb04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  _DAT_03f6bb08 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Neck");
  DAT_03f6bb0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  DAT_03f6bb10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine1");
  _DAT_03f6bb14 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_03f6bb18 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Pelvis");
  *(int *)(this_ptr->base_hero).base_character.carry_hands[0].field0_0x0 = DAT_03f6bb00;
  *(int *)(this_ptr->base_hero).base_character.carry_hands[1].field0_0x0 = DAT_03f6bb04;
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  DAT_03f6bb1c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  DAT_03f6bb20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                     (&this_ptr_00->motion_controller);
  motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
            (this_ptr_00,motion_index,22.0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (this_ptr_00,(CVector3f *)&stack0x0000005c,DAT_03f6bb04);
  if ((CVector3f *)(this_ptr->field4_0x1fc3c + 0x80) != pCVar2) {
    ((CVector3f *)(this_ptr->field4_0x1fc3c + 0x80))->x = pCVar2->x;
    *(float *)(this_ptr->field4_0x1fc3c + 0x84) = pCVar2->y;
    *(float *)(this_ptr->field4_0x1fc3c + 0x88) = pCVar2->z;
  }
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     (&(this_ptr->base_hero).base_character.model,(CVector3f *)&stack0x00000054,
                      DAT_03f6badc);
  if ((CVector3f *)(this_ptr->field4_0x1fc3c + 0x8c) != pCVar2) {
    ((CVector3f *)(this_ptr->field4_0x1fc3c + 0x8c))->x = pCVar2->x;
    *(float *)(this_ptr->field4_0x1fc3c + 0x90) = pCVar2->y;
    *(float *)(this_ptr->field4_0x1fc3c + 0x94) = pCVar2->z;
  }
  core_stranger_cpp_CStranger_FUN_005be520();
  this_ptr->field4_0x1fc3c[0x98] = '\0';
  this_ptr->field4_0x1fc3c[0x99] = '\0';
  this_ptr->field4_0x1fc3c[0x9a] = '\0';
  this_ptr->field4_0x1fc3c[0x9b] = '\0';
  this_ptr->field4_0x1fc3c[0x228] = '\0';
  this_ptr->field4_0x1fc3c[0x229] = '\0';
  this_ptr->field4_0x1fc3c[0x22a] = '\0';
  this_ptr->field4_0x1fc3c[0x22b] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(this_ptr->field4_0x1fc3c + 0x9c),
             "stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field4_0x1fc3c + 0x9c));
  this_ptr->field4_0x1fc3c[0x230] = '\0';
  this_ptr->field4_0x1fc3c[0x231] = '\0';
  this_ptr->field4_0x1fc3c[0x232] = '\0';
  this_ptr->field4_0x1fc3c[0x233] = '\0';
  this_ptr->field4_0x1fc3c[0xc] = '\0';
  this_ptr->field4_0x1fc3c[0xd] = '\0';
  this_ptr->field4_0x1fc3c[0xe] = '\0';
  this_ptr->field4_0x1fc3c[0xf] = '\0';
  this_ptr->field4_0x1fc3c[0x10] = '\0';
  this_ptr->field4_0x1fc3c[0x11] = '\0';
  this_ptr->field4_0x1fc3c[0x12] = '\0';
  this_ptr->field4_0x1fc3c[0x13] = '\0';
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
                          (&(this_ptr->base_hero).base_character.model);
  DAT_03f6bb24 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                           (this_ptr_02,"head01",1);
  return;
}
