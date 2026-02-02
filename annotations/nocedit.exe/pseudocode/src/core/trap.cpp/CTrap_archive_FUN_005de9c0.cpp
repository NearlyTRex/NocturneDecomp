// Name: core_trap.cpp_CTrap_archive_FUN_005de9c0
// Address: 005de9c0
// Address Range: [[005de9c0, 005de9f7]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_archive_FUN_005de9c0(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_archive_FUN_005de9c0(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}
