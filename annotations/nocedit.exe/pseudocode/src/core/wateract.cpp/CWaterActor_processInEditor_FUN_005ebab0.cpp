// Name: core_wateract.cpp_CWaterActor_processInEditor_FUN_005ebab0
// Address: 005ebab0
// Address Range: [[005ebab0, 005ebc09]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_processInEditor_FUN_005ebab0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_processInEditor_FUN_005ebab0(CWaterActor *this_ptr)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar2 != 0) {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar2 != 0) {
      (this_ptr->size).x = (this_ptr->size).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar2 != 0) {
      (this_ptr->size).x = (this_ptr->size).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar2 != 0) {
      (this_ptr->size).z = (this_ptr->size).z - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar2 != 0) {
      (this_ptr->size).z = (this_ptr->size).z + fVar1;
    }
    if ((int)(this_ptr->size).x < 0x3f000000) {
      (this_ptr->size).x = 0.5;
    }
    if ((this_ptr->size).z < 0.5) {
      (this_ptr->size).z = 0.5;
    }
    if (0x42c80000 < (int)(this_ptr->size).x) {
      (this_ptr->size).x = 100.0;
    }
    if (100.0 < (this_ptr->size).z) {
      (this_ptr->size).z = 100.0;
    }
    (this_ptr->size).y = 0.1;
    (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
    return;
  }
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
