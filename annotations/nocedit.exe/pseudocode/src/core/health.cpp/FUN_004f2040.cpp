// Name: core_health.cpp_FUN_004f2040
// Address: 004f2040
// Address Range: [[004f2040, 004f20a2]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_FUN_004f2040(void)

#include "nocturne.h"

/* Signature: byte actors_other_health.cpp_FUN_004f2040(uint param_1, uint
   param_2) */

void __cdecl core_health_cpp_FUN_004f2040(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  return;
}
