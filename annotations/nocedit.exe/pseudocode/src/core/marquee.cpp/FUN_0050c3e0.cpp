// Name: core_marquee.cpp_FUN_0050c3e0
// Address: 0050c3e0
// Address Range: [[0050c3e0, 0050c47d]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_0050c3e0(void)

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c3e0(uint param_1, uint
   param_2) */

void core_marquee_cpp_FUN_0050c3e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (in_stack_00000004[1].orient_matrix.m[1].x != 0.0) {
    (*((in_stack_00000004->vtable)._ub)->setup)(in_stack_00000004);
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  (*((in_stack_00000004->vtable)._ub)->setup)(in_stack_00000004);
  return;
}
