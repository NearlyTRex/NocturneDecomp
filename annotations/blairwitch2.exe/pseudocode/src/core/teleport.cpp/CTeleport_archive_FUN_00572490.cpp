// Name: core_teleport.cpp_CTeleport_archive_FUN_00572490
// Address: 00572490
// Address Range: [[00572490, 005724c1]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00572490(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00572490(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b4b0(&this_ptr->trigger_extents,0);
  core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->destination,0);
  return;
}
