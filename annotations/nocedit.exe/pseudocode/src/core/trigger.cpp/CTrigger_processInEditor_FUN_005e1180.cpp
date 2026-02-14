// Name: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  this_ptr->trigger_state = 0;
  fVar3 = (this_ptr->trigger_size).x;
  iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    fVar1 = g_CGamePtr->delta_time_float * (float)4;
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar2 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar2 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar2 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar2 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y + fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar2 != 0) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).z - fVar1;
    }
    iVar2 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar2 != 0) {
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
  core_trigger_cpp_CTrigger_FUN_005e0ba0(this_ptr);
  return;
}
