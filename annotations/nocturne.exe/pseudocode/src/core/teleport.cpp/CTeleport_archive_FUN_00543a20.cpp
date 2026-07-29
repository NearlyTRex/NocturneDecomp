// Name: core_teleport.cpp_CTeleport_archive_FUN_00543a20
// Address: 00543a20
// Address Range: [[00543a20, 00543a51]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00543a20(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00543a20(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->trigger_extents,(char *)0x0);
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->destination,(char *)0x0);
  return;
}
