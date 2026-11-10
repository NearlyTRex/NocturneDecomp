// Name: core_charactr.cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0
// Address: 00433ae0
// Address Range: [[00433ae0, 00433c57]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(CCharacter *this_ptr,int layer_action_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_chooseNextLayerAction_FUN_00433ae0(CCharacter *this_ptr,int layer_action_index)

{
  float fVar1;
  int iVar2;
  int iVar3;
  SLayerAction *pSVar4;
  float local_14;
  
  if ((this_ptr->layer_action_index < 0) ||
     (this_ptr->layer_action_count <= this_ptr->layer_action_index)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x131d;
    core_main_c_FUN_004e4330("CCharacter::chooseNextLayerAction - invalid layerActionIndex");
  }
  if ((float)_DAT_005b882e <= this_ptr->layer_action_t) {
    if (this_ptr->layer_action_t <= (float)_DAT_005b8836) {
      return;
    }
    iVar2 = *(int *)(this_ptr->layer_actions + this_ptr->layer_action_index * 0x38 + 4);
  }
  else {
    iVar2 = *(int *)(this_ptr->layer_actions + this_ptr->layer_action_index * 0x38);
  }
  if (layer_action_index != iVar2) {
    local_14 = 999.0;
    iVar3 = 0;
    if (0 < this_ptr->layer_action_count) {
      pSVar4 = this_ptr->layer_actions;
      do {
        if ((*(int *)(pSVar4 + 0x28) < 0) || (*(int *)pSVar4 != iVar2)) {
          if ((*(int *)(pSVar4 + 0x28) < 1) &&
             ((*(int *)(pSVar4 + 4) == iVar2 &&
              (fVar1 = *(float *)(pSVar4 + 0x34) +
                       *(float *)((int)this_ptr->motion_transition_costs +
                                 layer_action_index * 4 + *(int *)pSVar4 * 0x84), fVar1 < local_14))
             )) {
            this_ptr->layer_action_t = 1.0;
            this_ptr->layer_action_index = iVar3;
            local_14 = fVar1;
          }
        }
        else {
          fVar1 = *(float *)(pSVar4 + 0x34) +
                  *(float *)((int)this_ptr->motion_transition_costs +
                            layer_action_index * 4 + *(int *)(pSVar4 + 4) * 0x84);
          if (fVar1 < local_14) {
            this_ptr->layer_action_t = 0.0;
            this_ptr->layer_action_index = iVar3;
            local_14 = fVar1;
          }
        }
        iVar3 = iVar3 + 1;
        pSVar4 = pSVar4 + 0x38;
      } while (iVar3 < this_ptr->layer_action_count);
    }
  }
  return;
}
