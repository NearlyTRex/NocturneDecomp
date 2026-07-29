// Name: core_trap.cpp_CTrap_archive_FUN_00546b50
// Address: 00546b50
// Address Range: [[00546b50, 00546b87]]
// Convention: __cdecl
// Signature: void __cdecl core_trap_cpp_CTrap_archive_FUN_00546b50(CTrap *this_ptr)

#include "nocturne.h"

void __cdecl core_trap_cpp_CTrap_archive_FUN_00546b50(CTrap *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"modelName");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&this_ptr->wolf_in_trap,"wolfInTrap");
  return;
}
