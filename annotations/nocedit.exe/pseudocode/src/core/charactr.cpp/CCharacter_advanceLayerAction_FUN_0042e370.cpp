// Name: core_charactr.cpp_CCharacter_advanceLayerAction_FUN_0042e370
// Address: 0042e370
// Address Range: [[0042e370, 0042e56f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_advanceLayerAction_FUN_0042e370(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SLayerAction *pSVar6;
  int iVar7;
  float *in_stack_00000008;
  int in_stack_0000000c;
  float local_18;
  
  if ((this_ptr->field47_0x2a8c < 0) || (this_ptr->layer_action_count <= this_ptr->field47_0x2a8c))
  {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 0xeec;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::advanceLayerAction - invalid layerActionIndex");
  }
  pSVar6 = this_ptr->layer_actions + this_ptr->field47_0x2a8c;
  if ((float)this_ptr->field48_0x2a90 < 0.0) {
    this_ptr->field48_0x2a90 = 0;
  }
  if (1.0 < (float)this_ptr->field48_0x2a90) {
    this_ptr->field48_0x2a90 = 0x3f800000;
  }
  fVar3 = (float)this_ptr->field48_0x2a90 * pSVar6->duration;
  local_18 = pSVar6->duration * (1.0 - (float)this_ptr->field48_0x2a90);
  iVar7 = pSVar6->direction;
  if (iVar7 != 0) goto LAB_0042e486;
  fVar1 = this_ptr->motion_transition_costs[pSVar6->to_bone_index][in_stack_0000000c];
  fVar2 = this_ptr->motion_transition_costs[pSVar6->from_bone_index][in_stack_0000000c];
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
  if (*in_stack_00000008 < local_18) {
    fVar3 = ((float)iVar7 * *in_stack_00000008) / pSVar6->duration + (float)this_ptr->field48_0x2a90
    ;
    this_ptr->field48_0x2a90 = (int)fVar3;
    if (fVar3 < 0.0) {
      this_ptr->field48_0x2a90 = 0;
    }
    if (1.0 < (float)this_ptr->field48_0x2a90) {
      this_ptr->field48_0x2a90 = 0x3f800000;
    }
    *in_stack_00000008 = 0.0;
    return -1;
  }
  *in_stack_00000008 = *in_stack_00000008 - local_18;
  if (-1 < iVar7) {
    iVar7 = pSVar6->to_bone_index;
    this_ptr->field48_0x2a90 = 0x3f800000;
    return iVar7;
  }
  iVar7 = pSVar6->from_bone_index;
  this_ptr->field48_0x2a90 = 0;
  return iVar7;
}
