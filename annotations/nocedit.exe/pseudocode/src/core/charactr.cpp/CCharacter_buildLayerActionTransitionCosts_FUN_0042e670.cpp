// Name: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670
// Address: 0042e670
// Address Range: [[0042e670, 0042e831]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042e670(CCharacter *this_ptr)

{
  float fVar1;
  char *pcVar2;
  CMotionList *this_ptr_00;
  int iVar3;
  char *pcVar4;
  CCharacter *pCVar5;
  CCharacter *pCVar6;
  int iVar7;
  SLayerAction *pSVar8;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[1].z;
      pcVar4 = (this_ptr->base).actor_name + iVar7 * 0x50;
      do {
        pcVar2 = pcVar4 + 4;
        *(uint *)((int)pcVar4 + 0xb7e4) = 0x501502f9;
        pcVar4 = pcVar2;
      } while ((CCharacter *)pcVar2 != pCVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x14);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                            (&(this_ptr->model).motion_controller);
    iVar7 = 0;
    if (0 < this_ptr->layer_action_count) {
      do {
        pSVar8 = this_ptr->layer_actions + iVar7;
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
        pSVar8->motion_index = iVar3;
        pSVar8->frame_count = this_ptr_00->motions[iVar3].frame_count;
        pSVar8->duration =
             (float)pSVar8->frame_count / this_ptr_00->motions[pSVar8->motion_index].fps;
        if (-1 < pSVar8->direction) {
          this_ptr->motion_transition_costs[pSVar8->from_bone_index][pSVar8->to_bone_index] =
               pSVar8->duration;
        }
        if (pSVar8->direction < 1) {
          this_ptr->motion_transition_costs[pSVar8->to_bone_index][pSVar8->from_bone_index] =
               pSVar8->duration;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->layer_action_count);
    }
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      iVar3 = iVar7 + 4;
      *(uint *)((int)pCVar5->motion_transition_costs[0] + iVar7) = 0;
      iVar7 = iVar3;
      pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[1].z;
    } while (iVar3 != 0x50);
    local_20 = this_ptr;
    do {
      iVar7 = 0;
      local_18 = local_20;
      pCVar5 = this_ptr;
      do {
        pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[1].z;
        pcVar4 = (this_ptr->base).actor_name + iVar7 * 0x50;
        pCVar6 = local_20;
        do {
          fVar1 = local_18->motion_transition_costs[0][0] + *(float *)((int)pcVar4 + 0xb7e4);
          if (fVar1 < pCVar6->motion_transition_costs[0][0]) {
            pCVar6->motion_transition_costs[0][0] = fVar1;
          }
          pcVar4 = pcVar4 + 4;
          pCVar6 = (CCharacter *)((pCVar6->base).actor_name + 4);
        } while ((CCharacter *)pcVar4 != pCVar5);
        iVar7 = iVar7 + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 4);
      } while (iVar7 < 0x14);
      local_20 = (CCharacter *)&(local_20->base).orient_matrix.m[1].z;
    } while (local_20 != (CCharacter *)&(this_ptr->model).transformed_vertices[0x61].y);
  }
  return;
}
