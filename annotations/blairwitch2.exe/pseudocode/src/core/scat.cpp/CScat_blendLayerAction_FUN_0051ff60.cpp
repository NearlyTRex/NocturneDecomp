// Name: core_scat.cpp_CScat_blendLayerAction_FUN_0051ff60
// Address: 0051ff60
// Address Range: [[0051ff60, 00520134]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_0051ff60(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_0051ff60(CScat *this_ptr)

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
  fVar2 = (float)core_motion_cpp_FUN_005038a0(pCVar1,4);
  fVar3 = (float)core_motion_cpp_FUN_005038a0(pCVar1,5);
  fVar4 = (float)core_motion_cpp_FUN_005038a0(pCVar1,0xc);
  fVar5 = (float)core_motion_cpp_FUN_005038a0(pCVar1,0xd);
  fVar6 = (float)core_motion_cpp_FUN_005038a0(pCVar1,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)_DAT_005e2bb3 < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    iVar7 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    pCVar1 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(pCVar1);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_00502f10
                      (&this_ptr_00->motion_list,motion_name,iVar7);
    fVar2 = (float)core_motion_cpp_FUN_00503f50(pCVar1,iVar7,(this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00545a60
              (pCVar1,iVar7,fVar2,local_28,_DAT_01e620a8,
               core_skeleton_cpp_blendWeightCallback_FUN_00544cc0);
    if ((this_ptr->base).base.layer_action_index == 1) {
      core_scat_cpp_FUN_00520140(this_ptr,1);
      return;
    }
  }
  return;
}
