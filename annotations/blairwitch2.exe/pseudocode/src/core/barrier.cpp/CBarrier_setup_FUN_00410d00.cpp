// Name: core_barrier.cpp_CBarrier_setup_FUN_00410d00
// Address: 00410d00
// Address Range: [[00410d00, 00410d23]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410d00(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410d00(CBarrier *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  *(uint *)&(this_ptr->base).field_0xfc = 1;
  *(uint *)&(this_ptr->base).field_0xf8 = 1;
  return;
}
