// Name: core_trap.cpp_CTrap_setup_FUN_00599d60
// Address: 00599d60
// Address Range: [[00599d60, 00599d88]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_00599d60(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_00599d60(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408850(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
