// Name: core_platfrm.cpp_FUN_0054e7d0
// Address: 0054e7d0
// Address Range: [[0054e7d0, 0054e9ef]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_FUN_0054e7d0(void)

#include "nocturne.h"

/* Signature: byte actors_other_platform.cpp_FUN_0054e7d0(uint param_1, uint
   param_2) */

void __cdecl core_platfrm_cpp_FUN_0054e7d0(void)

{
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  *(uint *)(extraout_EAX + 0x58) = 1;
  if (*(char *)&in_stack_00000004[2].orient_matrix.m[0].y == '\0') {
    core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  if (*(int *)(in_stack_00000004[3].create_event + 0x48) != 0) {
    core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
    core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
