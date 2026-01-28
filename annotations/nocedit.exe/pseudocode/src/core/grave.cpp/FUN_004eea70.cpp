// Name: core_grave.cpp_FUN_004eea70
// Address: 004eea70
// Address Range: [[004eea70, 004eeac5]]
// Convention: unknown
// Signature: void core_grave_cpp_FUN_004eea70(void)

#include "nocturne.h"

/* Signature: byte actors_other_grave.cpp_FUN_004eea70(uint param_1) */

void core_grave_cpp_FUN_004eea70(void)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    in_stack_00000004[2].location.position.y = 0.0;
    return;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  in_stack_00000004[2].location.position.y = (float)(pCVar2->frame_count + -1);
  return;
}
