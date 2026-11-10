// Name: core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880
// Address: 00433880
// Address Range: [[00433880, 00433a5f]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880(CCharacter *this_ptr)

{
  float fVar1;
  CMotionList *this_ptr_00;
  int iVar2;
  CCharacter *pCVar3;
  CCharacter *pCVar4;
  CCharacter *pCVar5;
  int iVar6;
  SLayerAction *pSVar7;
  SLayerAction *motion_name;
  CCharacter *local_20;
  CCharacter *local_18;
  
  if ((this_ptr->model).model_name[0] != '\0') {
    iVar6 = 0;
    pCVar4 = this_ptr;
    do {
      pCVar4 = (CCharacter *)((pCVar4->base).create_event + 0xc);
      pCVar5 = (CCharacter *)((this_ptr->base).actor_name + iVar6 * 0x84);
      do {
        pCVar3 = (CCharacter *)((pCVar5->base).actor_name + 4);
        pCVar5->motion_transition_costs[0][0] = 1e+10;
        pCVar5 = pCVar3;
      } while (pCVar3 != pCVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x21);
    this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310
                            (&(this_ptr->model).base);
    iVar6 = 0;
    if (0 < this_ptr->layer_action_count) {
      motion_name = this_ptr->layer_actions + 8;
      do {
        pSVar7 = this_ptr->layer_actions + iVar6 * 0x38;
        iVar2 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0
                          (this_ptr_00,(char *)motion_name,1);
        *(int *)(pSVar7 + 0x2c) = iVar2;
        *(int *)(pSVar7 + 0x30) = *(int *)(this_ptr_00 + iVar2 * 0x120 + 0x1c8c);
        *(float *)(pSVar7 + 0x34) =
             (float)*(int *)(pSVar7 + 0x30) /
             *(float *)(this_ptr_00 + *(int *)(pSVar7 + 0x2c) * 0x120 + 0x1c48);
        if (-1 < *(int *)(pSVar7 + 0x28)) {
          *(int *)((int)this_ptr->motion_transition_costs +
                  *(int *)(pSVar7 + 4) * 4 + *(int *)pSVar7 * 0x84) = *(int *)(pSVar7 + 0x34);
        }
        if (*(int *)(pSVar7 + 0x28) < 1) {
          *(int *)((int)this_ptr->motion_transition_costs +
                  *(int *)pSVar7 * 4 + *(int *)(pSVar7 + 4) * 0x84) = *(int *)(pSVar7 + 0x34);
        }
        iVar6 = iVar6 + 1;
        motion_name = motion_name + 0x38;
      } while (iVar6 < this_ptr->layer_action_count);
    }
    iVar6 = 0;
    pCVar4 = this_ptr;
    do {
      iVar2 = iVar6 + 4;
      *(uint *)((int)pCVar4->motion_transition_costs[0] + iVar6) = 0;
      iVar6 = iVar2;
      pCVar4 = (CCharacter *)((pCVar4->base).create_event + 0xc);
    } while (iVar2 != 0x84);
    local_20 = this_ptr;
    do {
      iVar6 = 0;
      local_18 = local_20;
      pCVar4 = this_ptr;
      do {
        pCVar4 = (CCharacter *)((pCVar4->base).create_event + 0xc);
        pCVar3 = (CCharacter *)((this_ptr->base).actor_name + iVar6 * 0x84);
        pCVar5 = local_20;
        do {
          fVar1 = local_18->motion_transition_costs[0][0] + pCVar3->motion_transition_costs[0][0];
          if (fVar1 < pCVar5->motion_transition_costs[0][0]) {
            pCVar5->motion_transition_costs[0][0] = fVar1;
          }
          pCVar3 = (CCharacter *)((pCVar3->base).actor_name + 4);
          pCVar5 = (CCharacter *)((pCVar5->base).actor_name + 4);
        } while (pCVar3 != pCVar4);
        iVar6 = iVar6 + 1;
        local_18 = (CCharacter *)((local_18->base).actor_name + 4);
      } while (iVar6 < 0x21);
      local_20 = (CCharacter *)((local_20->base).create_event + 0xc);
    } while (local_20 != (CCharacter *)&(this_ptr->model).field_0xfac);
  }
  return;
}
