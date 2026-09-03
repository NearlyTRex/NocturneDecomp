// Name: core_scat.cpp_CScat_blendLayerAction_FUN_004fcff0
// Address: 004fcff0
// Address Range: [[004fcff0, 004fd1c4]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_004fcff0(CScat *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CSkeleton *this_ptr_00;
  char *motion_name;
  int iVar7;
  float local_28;
  
  local_28 = 1.0;
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].from_bone_index
      == 0) {
    local_28 = (this_ptr->base).base.layer_action_t;
  }
  if ((this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].to_bone_index ==
      0) {
    local_28 = (1.0 - (this_ptr->base).base.layer_action_t) * local_28;
  }
  pCVar1 = &(this_ptr->base).base.model;
  fVar2 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                    (&pCVar1->motion_controller,4);
  fVar3 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                    (&pCVar1->motion_controller,5);
  fVar4 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                    (&pCVar1->motion_controller,0xc);
  fVar5 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                    (&pCVar1->motion_controller,0xd);
  fVar6 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                    (&pCVar1->motion_controller,0xe);
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
    pCVar1 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(pCVar1);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010
                      (&this_ptr_00->motion_list,motion_name,iVar7);
    fVar2 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                      (&pCVar1->motion_controller,iVar7,(this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (pCVar1,iVar7,fVar2,local_28,_DAT_01e533c8,
               core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
    if ((this_ptr->base).base.layer_action_index == 1) {
      core_scat_cpp_CScat_blendAimBones_FUN_004fd1d0(this_ptr,1);
      return;
    }
  }
  return;
}
