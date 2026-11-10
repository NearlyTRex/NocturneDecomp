// Name: core_trap.cpp_CTrap_setup_FUN_0056cd50
// Address: 0056cd50
// Address Range: [[0056cd50, 0056cd78]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_0056cd50(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_0056cd50(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00462580(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
