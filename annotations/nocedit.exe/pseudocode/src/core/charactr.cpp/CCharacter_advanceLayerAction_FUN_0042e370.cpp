// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e56f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

{
  int iVar1;
  float fVar6;
  SLayerAction *pSVar6;
  int iVar7;
  float local_18;
  float fVar5;
  float fVar3;
  float fVar4;
  float fVar1;
  float fVar2;
  
  if ((this_ptr->layer_action_index < 0) ||
     (this_ptr->layer_action_count <= this_ptr->layer_action_index)) {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xeec;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  pSVar6 = this_ptr->layer_actions + this_ptr->layer_action_index;
  if (this_ptr->layer_action_t < 0.0) {
    this_ptr->layer_action_t = 0.0;
  }
  if (1.0 < this_ptr->layer_action_t) {
    this_ptr->layer_action_t = 1.0;
  }
  fVar3 = this_ptr->layer_action_t * pSVar6->duration;
  local_18 = pSVar6->duration * (1.0 - this_ptr->layer_action_t);
  iVar7 = pSVar6->direction;
  if (iVar7 != 0) goto LAB_0042e486;
  fVar1 = this_ptr->motion_transition_costs[pSVar6->to_bone_index][target_bone_index];
  fVar2 = this_ptr->motion_transition_costs[pSVar6->from_bone_index][target_bone_index];
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_0042e486;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_0042e486;
    }
  }
  iVar7 = -1;
LAB_0042e486:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*remaining_time < local_18) {
    fVar6 = ((float)iVar7 * *remaining_time) / pSVar6->duration + this_ptr->layer_action_t;
    this_ptr->layer_action_t = fVar6;
    if (fVar6 < 0.0) {
      this_ptr->layer_action_t = 0.0;
    }
    if (1.0 < this_ptr->layer_action_t) {
      this_ptr->layer_action_t = 1.0;
    }
    *remaining_time = 0.0;
    return -1;
  }
  *remaining_time = *remaining_time - local_18;
  if (-1 < iVar7) {
    iVar1 = pSVar6->to_bone_index;
    this_ptr->layer_action_t = 1.0;
    return iVar1;
  }
  iVar1 = pSVar6->from_bone_index;
  this_ptr->layer_action_t = 0.0;
  return iVar1;
}
