// Name: core_barrier.cpp_CBarrier_setup_FUN_00411760
// Address: 00411760
// Address Range: [[00411760, 00411787]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00411760(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00411760(CBarrier *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  iVar1 = g_CDemonMission_PTR_005baf90->is_in_editor;
  (this_ptr->base).is_renderable = 0;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
