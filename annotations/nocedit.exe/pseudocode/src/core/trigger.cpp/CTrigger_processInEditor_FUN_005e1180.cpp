// Name: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

{
  int iVar2;
  int iVar1;
  float fVar3;
  float fVar1;
  
  this_ptr->trigger_state = 0;
  fVar3 = (this_ptr->trigger_size).x;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x - fVar1;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x + fVar1;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y - fVar1;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y + fVar1;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).z - fVar1;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).z + fVar1;
    }
    if ((int)(this_ptr->trigger_size).x < 0x3c23d70a) {
      (this_ptr->trigger_size).x = 0.01;
    }
    if ((this_ptr->trigger_size).y < 0.01) {
      (this_ptr->trigger_size).y = 0.01;
    }
    if ((this_ptr->trigger_size).z < 0.01) {
      (this_ptr->trigger_size).z = 0.01;
    }
  }
  if (this_ptr->shape == 1) {
    if (fVar3 != (this_ptr->trigger_size).x) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).x;
    }
    (this_ptr->trigger_size).x = (this_ptr->trigger_size).z;
  }
  core_trigger_cpp_CTrigger_calculateTestRadius_FUN_005e0ba0(this_ptr);
  return;
}
