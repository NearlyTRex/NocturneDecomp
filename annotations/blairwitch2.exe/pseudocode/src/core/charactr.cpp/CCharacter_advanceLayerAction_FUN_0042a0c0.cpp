// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042a0c0
// Address: 0042a0c0
// Address Range: [[0042a0c0, 0042a2c9]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042a0c0(CCharacter *this_ptr,float *remaining_time,int target_bone_index)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SLayerAction *pSVar6;
  int iVar7;
  float local_18;
  
  if ((this_ptr->layer_action_index < 0) ||
     (this_ptr->layer_action_count <= this_ptr->layer_action_index)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x114a;
    core_main_c_FUN_004e4500("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  pSVar6 = this_ptr->layer_actions + this_ptr->layer_action_index * 0x38;
  if (this_ptr->layer_action_t < 0.0) {
    this_ptr->layer_action_t = 0.0;
  }
  if (1.0 < this_ptr->layer_action_t) {
    this_ptr->layer_action_t = 1.0;
  }
  fVar3 = this_ptr->layer_action_t * *(float *)(pSVar6 + 0x34);
  local_18 = *(float *)(pSVar6 + 0x34) * (1.0 - this_ptr->layer_action_t);
  iVar7 = *(int *)(pSVar6 + 0x28);
  if (iVar7 != 0) goto LAB_0042a1e0;
  fVar1 = *(float *)((int)this_ptr->motion_transition_costs +
                    target_bone_index * 4 + *(int *)(pSVar6 + 4) * 0x58);
  fVar2 = *(float *)((int)this_ptr->motion_transition_costs +
                    target_bone_index * 4 + *(int *)pSVar6 * 0x58);
  fVar4 = fVar1 + local_18;
  fVar5 = fVar2 + fVar3;
  if (fVar4 <= fVar5) {
    if (fVar4 < fVar5) {
      iVar7 = 1;
      goto LAB_0042a1e0;
    }
    if (fVar1 <= fVar2) {
      iVar7 = 1;
      goto LAB_0042a1e0;
    }
  }
  iVar7 = -1;
LAB_0042a1e0:
  if (iVar7 < 0) {
    local_18 = fVar3;
  }
  if (*remaining_time < local_18) {
    fVar3 = ((float)iVar7 * *remaining_time) / *(float *)(pSVar6 + 0x34) + this_ptr->layer_action_t;
    this_ptr->layer_action_t = fVar3;
    if (fVar3 < 0.0) {
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
    iVar7 = *(int *)(pSVar6 + 4);
    this_ptr->layer_action_t = 1.0;
    return iVar7;
  }
  iVar7 = *(int *)pSVar6;
  this_ptr->layer_action_t = 0.0;
  return iVar7;
}
