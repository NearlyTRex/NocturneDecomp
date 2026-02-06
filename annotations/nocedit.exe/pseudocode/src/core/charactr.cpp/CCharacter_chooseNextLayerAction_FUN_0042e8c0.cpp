// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0
// Address: 0042e8c0
// Address Range: [[0042e8c0, 0042ea31]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042e8c0(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SLayerAction *pSVar4;
  int in_stack_00000008;
  float local_14;
  
  if ((this_ptr->field47_0x2a8c < 0) || (this_ptr->layer_action_count <= this_ptr->field47_0x2a8c))
  {
    g_CurrentFilename = "..\\core\\charactr.cpp";
    g_CurrentLineNumber = 4000;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)1.0000000000000001e-05 <= (float)this_ptr->field48_0x2a90) {
    if ((float)this_ptr->field48_0x2a90 <= (float)0.99999000000000005) {
      return;
    }
    iVar2 = this_ptr->layer_actions[this_ptr->field47_0x2a8c].to_bone_index;
  }
  else {
    iVar2 = this_ptr->layer_actions[this_ptr->field47_0x2a8c].from_bone_index;
  }
  if (in_stack_00000008 != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < this_ptr->layer_action_count) {
      pSVar4 = this_ptr->layer_actions;
      do {
        if ((pSVar4->direction < 0) || (pSVar4->from_bone_index != iVar2)) {
          if ((pSVar4->direction < 1) &&
             ((pSVar4->to_bone_index == iVar2 &&
              (fVar1 = pSVar4->duration +
                       this_ptr->motion_transition_costs[pSVar4->from_bone_index][in_stack_00000008]
              , fVar1 < local_14)))) {
            this_ptr->field48_0x2a90 = 0x3f800000;
            this_ptr->field47_0x2a8c = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = pSVar4->duration +
                  this_ptr->motion_transition_costs[pSVar4->to_bone_index][in_stack_00000008];
          if (fVar1 < local_14) {
            this_ptr->field48_0x2a90 = 0;
            this_ptr->field47_0x2a8c = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar3 < this_ptr->layer_action_count);
    }
  }
  return;
}
