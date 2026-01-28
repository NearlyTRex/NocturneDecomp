// Name: core_trigger.cpp_CTrigger_FUN_005e0f70
// Address: 005e0f70
// Address Range: [[005e0f70, 005e1172]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

{
  int iVar1;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (*(int *)(this_ptr->unk + 0x1c) == 1) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 9) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 2) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 5) {
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 7) {
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  iVar1 = *(int *)(this_ptr->unk + 0x1c);
  if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 9)) {
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  if (*(int *)(this_ptr->unk + 0x1c) == 4) {
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
    return;
  }
  return;
}
