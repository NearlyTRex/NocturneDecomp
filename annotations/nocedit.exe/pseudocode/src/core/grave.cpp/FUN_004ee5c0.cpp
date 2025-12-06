// Name: core_grave.cpp_FUN_004ee5c0
// Address: 004ee5c0
// Address Range: [[004ee5c0, 004ee67c]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee5c0()

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004ee5c0(uint param_1, uint param_2)
    */

void core_grave_cpp_FUN_004ee5c0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CKeyFramedModel *pCVar4;
  int in_stack_00000004;
  float in_stack_00000014;
  
  if (*(int *)(in_stack_00000004 + 0x2dc) == 0) {
    if (*(int *)(in_stack_00000004 + 0x2e0) == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,(char *)(in_stack_00000004 + 0x2e8));
      if (iVar3 != 0) {
        core_grave_cpp_FUN_004ee790();
      }
    }
    if (*(int *)(in_stack_00000004 + 0x2e0) == 1) {
      pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                         ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
      fVar2 = (float)(pCVar4->frame_count + -1);
      fVar1 = *(float *)(in_stack_00000004 + 0x2d8) * in_stack_00000014 +
              *(float *)(in_stack_00000004 + 0x2d4);
      *(float *)(in_stack_00000004 + 0x2d4) = fVar1;
      if (fVar2 <= fVar1) {
        *(uint *)(in_stack_00000004 + 0x2e0) = 2;
        *(float *)(in_stack_00000004 + 0x2d4) = fVar2;
        return;
      }
    }
  }
  else {
    *(uint *)(in_stack_00000004 + 0x104) = 1;
  }
  return;
}
