// Name: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670
// Address: 0042e670
// MANUAL RECONSTRUCTION
// Address Range: [[0042e670, 0042e831]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter *this_ptr)

{
  float fVar1;
  CMotionList *this_ptr_00;
  int iVar1;
  int iVar3;
  int iVar6;
  SLayerAction *pSVar7;
  char *pcVar8;

  if ((this_ptr->model).model_name[0] != '\0') {
    iVar6 = 0;
    do {
      for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
        this_ptr->motion_transition_costs[iVar6][iVar1] = 1e10f;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->model).motion_controller);
    iVar6 = 0;
    if (0 < this_ptr->layer_action_count) {
      pcVar8 = this_ptr->layer_actions[0].motion_name;
      do {
        pSVar7 = this_ptr->layer_actions + iVar6;
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00,pcVar8,1);
        pSVar7->motion_index = iVar3;
        pSVar7->frame_count = this_ptr_00->motions[iVar3].frame_count;
        pSVar7->duration =
             (float)pSVar7->frame_count / this_ptr_00->motions[pSVar7->motion_index].fps;
        if (-1 < pSVar7->direction) {
          this_ptr->motion_transition_costs[pSVar7->from_bone_index][pSVar7->to_bone_index] =
               pSVar7->duration;
        }
        if (pSVar7->direction < 1) {
          this_ptr->motion_transition_costs[pSVar7->to_bone_index][pSVar7->from_bone_index] =
               pSVar7->duration;
        }
        iVar6 = iVar6 + 1;
        pcVar8 = pcVar8 + sizeof(SLayerAction);
      } while (iVar6 < this_ptr->layer_action_count);
    }
    iVar6 = 0;
    do {
      this_ptr->motion_transition_costs[iVar6][iVar6] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    iVar3 = 0;
    do {
      iVar6 = 0;
      do {
        for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
          fVar1 = this_ptr->motion_transition_costs[iVar3][iVar6]
                + this_ptr->motion_transition_costs[iVar6][iVar1];
          if (fVar1 < this_ptr->motion_transition_costs[iVar3][iVar1]) {
            this_ptr->motion_transition_costs[iVar3][iVar1] = fVar1;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x14);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
  }
  return;
}
