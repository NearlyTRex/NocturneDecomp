// Name: core_trap.cpp_CTrap_setup_FUN_00546870
// Address: 00546870
// Address Range: [[00546870, 00546898]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_00546870(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_00546870(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
