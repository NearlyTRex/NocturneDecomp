// Name: core_scat.cpp_CScat_blendLayerAction_FUN_005582c0
// Address: 005582c0
// Address Range: [[005582c0, 00558494]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_005582c0(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_005582c0(CScat *this_ptr)

{
  CDeformableModelInstance *pCVar2;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  int motion_index;
  float target_frame_number;
  float local_28;
  int iVar7;
  char *motion_name;
  CDeformableModelInstance *pCVar1;
  
  local_28 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_28 = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_28 = (1.0 - (this_ptr->base).base.layer_action_t) * local_28;
  }
  pCVar2 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar2->motion_controller,4);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar2->motion_controller,5);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar2->motion_controller,0xc);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar2->motion_controller,0xd);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    (&pCVar2->motion_controller,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)0.0001 < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    iVar7 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    pCVar2 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCVar2);
    motion_index = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460
                             (&this_ptr_00->motion_list,motion_name,iVar7);
    target_frame_number =
         core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                   (&pCVar2->motion_controller,motion_index,(this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar2,motion_index,target_frame_number,local_28,INT_0310619c,
               core_skeleton_cpp_blendWeightCallback_FUN_0059ddb0);
    if ((this_ptr->base).base.layer_action_index == 1) {
      core_scat_cpp_CScat_blendAimBones_FUN_005584a0(this_ptr,1);
      return;
    }
  }
  return;
}
