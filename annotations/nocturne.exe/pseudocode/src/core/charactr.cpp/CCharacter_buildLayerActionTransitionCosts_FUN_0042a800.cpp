// Name: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800
// Address: 0042a800
// Address Range: [[0042a800, 0042a9c1]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800(CCharacter *this_ptr)

{
  float fVar1;
  char *pcVar2;
  CMotionList *this_ptr_00;
  int iVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  SLayerAction *pSVar7;
  char *pcVar8;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    iVar6 = 0;
    pCVar4 = this_ptr;
    do {
      pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[1].z;
      pcVar8 = (this_ptr->base).actor_name + iVar6 * 0x50;
      do {
        pcVar2 = pcVar8 + 4;
        *(uint *)((int)pcVar8 + 0xb64c) = 0x501502f9;
        pcVar8 = pcVar2;
      } while ((CCharacter *)pcVar2 != pCVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x14);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (&(this_ptr->model).motion_controller);
    iVar6 = 0;
    if (0 < this_ptr->layer_action_count) {
      pcVar8 = this_ptr->layer_actions[0].motion_name;
      do {
        pSVar7 = this_ptr->layer_actions + iVar6;
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(this_ptr_00,pcVar8,1);
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
        pcVar8 = pcVar8 + 0x38;
      } while (iVar6 < this_ptr->layer_action_count);
    }
    iVar6 = 0;
    pCVar4 = this_ptr;
    do {
      iVar3 = iVar6 + 4;
      *(uint *)((int)pCVar4->motion_transition_costs[0] + iVar6) = 0;
      iVar6 = iVar3;
      pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[1].z;
    } while (iVar3 != 0x50);
    local_20 = this_ptr;
    do {
      iVar6 = 0;
      local_18 = local_20;
      pCVar4 = this_ptr;
      do {
        pCVar4 = (CCharacter *)&(pCVar4->base).orient_matrix.m[1].z;
        pcVar8 = (this_ptr->base).actor_name + iVar6 * 0x50;
        pCVar5 = local_20;
        do {
          fVar1 = local_18->motion_transition_costs[0][0] + *(float *)((int)pcVar8 + 0xb64c);
          if (fVar1 < pCVar5->motion_transition_costs[0][0]) {
            pCVar5->motion_transition_costs[0][0] = fVar1;
          }
          pcVar8 = pcVar8 + 4;
          pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 4);
        } while ((CCharacter *)pcVar8 != pCVar4);
        iVar6 = iVar6 + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 4);
      } while (iVar6 < 0x14);
      local_20 = (CCharacter *)&(local_20->base).orient_matrix.m[1].z;
    } while (local_20 != (CCharacter *)((this_ptr->model).transformed_vertices + 0x62));
  }
  return;
}
