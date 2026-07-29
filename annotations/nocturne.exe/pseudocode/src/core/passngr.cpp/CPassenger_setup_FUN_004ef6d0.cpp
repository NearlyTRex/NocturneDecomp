// Name: core_passngr.cpp_CPassenger_setup_FUN_004ef6d0
// Address: 004ef6d0
// Address Range: [[004ef6d0, 004ef887]]
// Convention: unknown
// Signature: void core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(CNPC *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_passngr_cpp_CPassenger_setup_FUN_004ef6d0(CNPC *param_1)

{
  UOrientationVector *pUVar1;
  CDeformableModelInstance *this_ptr;
  int *this_ptr_00;
  char cVar2;
  CDemonActor *pCVar3;
  CMotionList *this_ptr_01;
  char *pcVar4;
  int iVar5;
  
  core_npc_cpp_CNPC_setup_FUN_004ee9e0(param_1);
  if (param_1[1].base.base.scale.x == 0) {
    pCVar3 = core_actor_cpp_createActorByName_FUN_0040d540("CWerewolf");
    pcVar4 = param_1[1].base.base.create_event + 0xc;
    param_1[1].base.base.scale.x = (int)pCVar3;
    do {
      cVar2 = *pcVar4;
      pCVar3->actor_name[0] = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pCVar3->actor_name[1] = cVar2;
      pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
    } while (cVar2 != '\0');
    iVar5 = param_1[1].base.base.scale.x;
    *(float *)(iVar5 + 0x20) = (param_1->base).base.location.position.x;
    *(float *)(iVar5 + 0x24) = (param_1->base).base.location.position.y;
    *(float *)(iVar5 + 0x28) = (param_1->base).base.location.position.z;
    *(int *)(iVar5 + 0x2c) = (param_1->base).base.location.area_id;
    iVar5 = param_1[1].base.base.scale.x;
    pUVar1 = &(param_1->base).base.orient;
    if ((UOrientationVector *)(iVar5 + 0x30) != pUVar1) {
      *(float *)(iVar5 + 0x30) = (pUVar1->vec).x;
      *(float *)(iVar5 + 0x34) = (param_1->base).base.orient.vec.y;
      *(float *)(iVar5 + 0x38) = (param_1->base).base.orient.vec.z;
    }
    core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
              ((CDeformableModelInstance *)(param_1[1].base.base.scale.x + 0x150),
               (char *)&param_1[1].base.base.health);
    *(float *)(param_1[1].base.base.scale.x + 0x2614) =
         param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x53].z;
    iVar5 = param_1[1].base.base.scale.x;
    (*(code *)**(uint **)(iVar5 + 0x14c))(iVar5);
    iVar5 = 1;
    pcVar4 = "transform";
    this_ptr_01 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            ((CMotionController *)(param_1[1].base.base.scale.x + 0x150));
    iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_01,pcVar4,iVar5);
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990
              ((CMotionController *)(param_1[1].base.base.scale.x + 0x150),iVar5,0.0);
  }
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800
            ((CDeformableModelInstance *)(param_1[1].base.base.scale.x + 0x150));
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0
            ((CDeformableModelInstance *)(param_1[1].base.base.scale.x + 0x150));
  this_ptr = &(param_1->base).model;
  core_skeleton_cpp_CDeformableModelInstance_resetToRestPose_FUN_0051b800(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(this_ptr);
  this_ptr_00 = &param_1[1].base.base.scale.y;
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170((CMorph *)this_ptr_00,0,this_ptr);
  core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170
            ((CMorph *)this_ptr_00,1,
             (CDeformableModelInstance *)(param_1[1].base.base.scale.x + 0x150));
  core_morph_cpp_CMorph_getReady_FUN_004e03c0((CMorph *)this_ptr_00);
  param_1[1].base.model.bone_transform.pose_data.bone_rotations[0x53].y = 0.0;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            ((CDeformableModelInstance *)(param_1[1].base.base.scale.x + 0x150));
  return;
}
