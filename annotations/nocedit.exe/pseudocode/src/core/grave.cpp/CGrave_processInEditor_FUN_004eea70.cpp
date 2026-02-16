// Name: core_grave.cpp_CGrave_processInEditor_FUN_004eea70
// Address: 004eea70
// Address Range: [[004eea70, 004eeac5]]
// Convention: __cdecl
// Signature: void __cdecl core_grave_cpp_CGrave_processInEditor_FUN_004eea70(CGrave *this_ptr)

#include "nocturne.h"

void __cdecl core_grave_cpp_CGrave_processInEditor_FUN_004eea70(CGrave *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar1 == 0) {
    this_ptr->cur_frame = 0.0;
    return;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  this_ptr->cur_frame = (float)(pCVar2->frame_count + -1);
  return;
}
