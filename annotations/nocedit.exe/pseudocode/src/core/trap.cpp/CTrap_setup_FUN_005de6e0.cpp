// Name: core_trap.cpp_CTrap_setup_FUN_005de6e0
// Address: 005de6e0
// Address Range: [[005de6e0, 005de6ea]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_005de6e0(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_005de6e0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
