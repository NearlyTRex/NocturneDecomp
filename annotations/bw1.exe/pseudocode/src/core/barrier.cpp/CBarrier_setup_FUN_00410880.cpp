// Name: core_barrier.cpp_CBarrier_setup_FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 004108aa]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410880(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00410880(CBarrier *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  iVar1 = *(int *)(0x01D2C900 + 0x1008);
  (this_ptr->base).is_renderable = 0;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
