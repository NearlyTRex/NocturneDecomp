// Name: core_barrier.cpp_CBarrier_setup_FUN_00414210
// Address: 00414210
// Address Range: [[00414210, 0041421a]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00414210(CBarrier *this_ptr)

#include "nocturne.h"

void __cdecl core_barrier_cpp_CBarrier_setup_FUN_00414210(CBarrier *this_ptr)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  iVar1 = g_CDemonMissionPtr->is_in_editor;
  (this_ptr->base).is_renderable = 0;
  (this_ptr->base).is_transparent = iVar1;
  return;
}
