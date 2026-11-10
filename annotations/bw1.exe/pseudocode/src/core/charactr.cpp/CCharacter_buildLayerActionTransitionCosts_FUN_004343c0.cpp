// Name: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0
// Address: 004343c0
// Address Range: [[004343c0, 00434581]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_004343c0(CCharacter *this_ptr)

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
  SLayerAction *motion_name;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[2].y;
      pcVar4 = (this_ptr->base).actor_name + iVar7 * 0x58;
      do {
        pcVar2 = pcVar4 + 4;
        *(uint *)((int)pcVar4 + 0xb9f4) = 0x501502f9;
        pcVar4 = pcVar2;
      } while ((CCharacter *)pcVar2 != pCVar5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x16);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00
                            (&(this_ptr->model).base);
    iVar7 = 0;
    if (0 < this_ptr->layer_action_count) {
      motion_name = this_ptr->layer_actions + 8;
      do {
        pSVar8 = this_ptr->layer_actions + iVar7 * 0x38;
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_005240c0
                          (this_ptr_00,(char *)motion_name,1);
        *(int *)(pSVar8 + 0x2c) = iVar3;
        *(int *)(pSVar8 + 0x30) = *(int *)(this_ptr_00 + iVar3 * 0x120 + 0x1c8c);
        *(float *)(pSVar8 + 0x34) =
             (float)*(int *)(pSVar8 + 0x30) /
             *(float *)(this_ptr_00 + *(int *)(pSVar8 + 0x2c) * 0x120 + 0x1c48);
        if (-1 < *(int *)(pSVar8 + 0x28)) {
          *(int *)((int)this_ptr->motion_transition_costs +
                  *(int *)(pSVar8 + 4) * 4 + *(int *)pSVar8 * 0x58) = *(int *)(pSVar8 + 0x34);
        }
        if (*(int *)(pSVar8 + 0x28) < 1) {
          *(int *)((int)this_ptr->motion_transition_costs +
                  *(int *)pSVar8 * 4 + *(int *)(pSVar8 + 4) * 0x58) = *(int *)(pSVar8 + 0x34);
        }
        iVar7 = iVar7 + 1;
        motion_name = motion_name + 0x38;
      } while (iVar7 < this_ptr->layer_action_count);
    }
    iVar7 = 0;
    pCVar5 = this_ptr;
    do {
      iVar3 = iVar7 + 4;
      *(uint *)((int)pCVar5->motion_transition_costs[0] + iVar7) = 0;
      iVar7 = iVar3;
      pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[2].y;
    } while (iVar3 != 0x58);
    local_20 = this_ptr;
    do {
      iVar7 = 0;
      local_18 = local_20;
      pCVar5 = this_ptr;
      do {
        pCVar5 = (CCharacter *)&(pCVar5->base).orient_matrix.m[2].y;
        pcVar4 = (this_ptr->base).actor_name + iVar7 * 0x58;
        pCVar6 = local_20;
        do {
          fVar1 = local_18->motion_transition_costs[0][0] + *(float *)((int)pcVar4 + 0xb9f4);
          if (fVar1 < pCVar6->motion_transition_costs[0][0]) {
            pCVar6->motion_transition_costs[0][0] = fVar1;
          }
          pcVar4 = pcVar4 + 4;
          pCVar6 = (CCharacter *)((pCVar6->base).actor_name + 4);
        } while ((CCharacter *)pcVar4 != pCVar5);
        iVar7 = iVar7 + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 4);
      } while (iVar7 < 0x16);
      local_20 = (CCharacter *)&(local_20->base).orient_matrix.m[2].y;
    } while (local_20 != (CCharacter *)((this_ptr->model).rest_bone_scales + 0x49));
  }
  return;
}
