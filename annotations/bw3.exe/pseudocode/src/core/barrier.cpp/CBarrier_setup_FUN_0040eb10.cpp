// Name: core_barrier.cpp_CBarrier_setup_FUN_0040eb10
// Address: 0040eb10
// Address Range: [[0040eb10, 0040eb3a]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_setup_FUN_0040eb10(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_setup_FUN_0040eb10(CBarrier *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  iVar1 = *(int *)(0x01D81080 + 0x1008);
  (this_ptr->base).is_renderable = 0;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
