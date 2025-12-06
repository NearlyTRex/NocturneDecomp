// Name: core_trigger.cpp_CTrigger_FUN_005e0f70
// Address: 005e0f70
// Address Range: [[005e0f70, 005e1172]]
// Convention: __cdecl
// Signature: void core_trigger.cpp_CTrigger_FUN_005e0f70(CTrigger * this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

{
  int iVar1;
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 1) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 9) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 2) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 5) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  }
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 7) {
    pcStack0000000c = (char *)0x0;
    core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  }
  iVar1 = *(int *)(this_ptr->field1_0x158 + 0x1c);
  if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 9)) {
    pcStack0000000c = this_ptr->field1_0x158 + 0xc0;
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  }
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  if (*(int *)(this_ptr->field1_0x158 + 0x1c) == 4) {
    pcStack00000010 = this_ptr->field1_0x158 + 0x1a8;
    pcStack0000000c = "Auto aim at me";
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
    return;
  }
  return;
}
