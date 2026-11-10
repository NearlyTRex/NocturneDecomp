// Name: core_trap.cpp_CTrap_archive_FUN_0059a0c0
// Address: 0059a0c0
// Address Range: [[0059a0c0, 0059a0f7]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_archive_FUN_0059a0c0(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_archive_FUN_0059a0c0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}
