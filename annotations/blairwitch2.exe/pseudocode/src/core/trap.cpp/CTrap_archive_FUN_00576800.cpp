// Name: core_trap.cpp_CTrap_archive_FUN_00576800
// Address: 00576800
// Address Range: [[00576800, 00576837]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_archive_FUN_00576800(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_archive_FUN_00576800(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}
