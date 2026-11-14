// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_0042a620
// Address: 0042a620
// Address Range: [[0042a620, 0042a791]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter *this_ptr,int layer_action_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_0042a620(CCharacter *this_ptr,int layer_action_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SLayerAction *pSVar4;
  float local_14;
  
  if ((this_ptr->layer_action_index < 0) ||
     (this_ptr->layer_action_count <= this_ptr->layer_action_index)) {
    _DAT_01d046a0 = "..\\core\\charactr.cpp";
    _DAT_01d046a4 = 0x11fe;
    core_main_c_FUN_004e4500("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005cd22e <= this_ptr->layer_action_t) {
    if (this_ptr->layer_action_t <= (float)_DAT_005cd236) {
      return;
    }
    iVar2 = this_ptr->layer_actions[this_ptr->layer_action_index].to_bone_index;
  }
  else {
    iVar2 = this_ptr->layer_actions[this_ptr->layer_action_index].from_bone_index;
  }
  if (layer_action_index != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < this_ptr->layer_action_count) {
      pSVar4 = this_ptr->layer_actions;
      do {
        if ((pSVar4->direction < 0) || (pSVar4->from_bone_index != iVar2)) {
          if ((pSVar4->direction < 1) &&
             ((pSVar4->to_bone_index == iVar2 &&
              (fVar1 = pSVar4->duration +
                       this_ptr->motion_transition_costs[pSVar4->from_bone_index]
                       [layer_action_index], fVar1 < local_14)))) {
            this_ptr->layer_action_t = 1.0;
            this_ptr->layer_action_index = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = pSVar4->duration +
                  this_ptr->motion_transition_costs[pSVar4->to_bone_index][layer_action_index];
          if (fVar1 < local_14) {
            this_ptr->layer_action_t = 0.0;
            this_ptr->layer_action_index = iVar3;
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
