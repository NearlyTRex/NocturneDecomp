// Name: core_trap.cpp_CTrap_setup_FUN_005764a0
// Address: 005764a0
// Address Range: [[005764a0, 005764c8]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_setup_FUN_005764a0(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_setup_FUN_005764a0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408a80(&this_ptr->base);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00(&this_ptr->model);
  this_ptr->carrier = (CDemonActor *)0x0;
  return;
}
