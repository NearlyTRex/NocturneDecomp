// Name: core_boxactor.cpp_FUN_00421830
// Address: 00421830
// Address Range: [[00421830, 0042183e]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421830()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00421830(uint param_1) */

void core_boxactor_cpp_FUN_00421830(void)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  iVar1 = pCVar2->frame_count;
  if ((float)in_stack_00000004[2].runtime_state < 0.0) {
    in_stack_00000004[2].runtime_state = 0;
  }
  if ((float)iVar1 <= (float)in_stack_00000004[2].runtime_state) {
    in_stack_00000004[2].runtime_state = (int)(float)(iVar1 + -1);
  }
  if (-1 < *(int *)(in_stack_00000004[4].create_event + 0x10)) {
    in_stack_00000004[2].create_event[0] = '\0';
    in_stack_00000004[2].create_event[1] = '\0';
    in_stack_00000004[2].create_event[2] = '\0';
    in_stack_00000004[2].create_event[3] = '\0';
    return;
  }
  core_boxactor_cpp_FUN_004218d0();
  in_stack_00000004[2].create_event[0] = '\0';
  in_stack_00000004[2].create_event[1] = '\0';
  in_stack_00000004[2].create_event[2] = '\0';
  in_stack_00000004[2].create_event[3] = '\0';
  return;
}
