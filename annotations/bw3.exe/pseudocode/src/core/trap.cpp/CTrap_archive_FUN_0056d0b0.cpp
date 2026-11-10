// Name: core_trap.cpp_CTrap_archive_FUN_0056d0b0
// Address: 0056d0b0
// Address Range: [[0056d0b0, 0056d0e7]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_archive_FUN_0056d0b0(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_archive_FUN_0056d0b0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}
