// Name: core_scat.cpp_CScat_blendLayerAction_FUN_00542090
// Address: 00542090
// Address Range: [[00542090, 00542264]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_00542090(CScat *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_blendLayerAction_FUN_00542090(CScat *this_ptr)

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
  fVar2 = (float)core_motion_cpp_FUN_00524a40(pCVar1,4);
  fVar3 = (float)core_motion_cpp_FUN_00524a40(pCVar1,5);
  fVar4 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xc);
  fVar5 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xd);
  fVar6 = (float)core_motion_cpp_FUN_00524a40(pCVar1,0xe);
  local_28 = (1.0 - (fVar6 + fVar5 + fVar4 + fVar3 + fVar2)) * local_28;
  if (local_28 < 0.0) {
    local_28 = 0.0;
  }
  if ((float)_DAT_005edebf < local_28) {
    if (1.0 < local_28) {
      local_28 = 1.0;
    }
    iVar7 = 1;
    motion_name = (this_ptr->base).base.layer_actions[(this_ptr->base).base.layer_action_index].
                  motion_name;
    pCVar1 = &(this_ptr->base).base.model;
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(pCVar1);
    iVar7 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                      (&this_ptr_00->motion_list,motion_name,iVar7);
    fVar2 = (float)core_motion_cpp_FUN_00525110(pCVar1,iVar7,(this_ptr->base).base.layer_action_t);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (pCVar1,iVar7,fVar2,local_28,_DAT_01e7e054,
               core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    if ((this_ptr->base).base.layer_action_index == 1) {
      core_scat_cpp_CScat_blendAimBones_FUN_00542270(this_ptr,1);
      return;
    }
  }
  return;
}
