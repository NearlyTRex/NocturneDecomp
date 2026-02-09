// Name: core_trigger.cpp_CTrigger_processInEditor_FUN_005e1180
// Address: 005e1180
// Address Range: [[005e1180, 005e1342]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_processInEditor_FUN_005e1180(CTrigger *this_ptr)

{
  int iVar1;
  float in_stack_00000008;
  float in_stack_00000010;
  float in_stack_00000018;
  float in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  this_ptr->trigger_state = 0;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  else {
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x - in_stack_00000008;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).x = (this_ptr->trigger_size).x + in_stack_00000010;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y - in_stack_00000018;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).y = (this_ptr->trigger_size).y + in_stack_00000020;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).z - in_stack_00000028;
    }
    iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
    if (iVar1 != 0) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).z + in_stack_00000030;
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
    if (in_stack_00000020 != (this_ptr->trigger_size).x) {
      (this_ptr->trigger_size).z = (this_ptr->trigger_size).x;
    }
    (this_ptr->trigger_size).x = (this_ptr->trigger_size).z;
  }
  core_trigger_cpp_CTrigger_FUN_005e0ba0(this_ptr);
  return;
}
