// Name: core_barrier.cpp_CBarrier_FUN_00414400
// Address: 00414400
// Address Range: [[00414400, 0041445e]]
// Convention: __cdecl
// Signature: void core_barrier.cpp_CBarrier_FUN_00414400(CBarrier * this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_FUN_00414400(CBarrier *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
