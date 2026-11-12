// Name: core_teleport.cpp_CTeleport_archive_FUN_00568fa0
// Address: 00568fa0
// Address Range: [[00568fa0, 00568fd1]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00568fa0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00568fa0(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->trigger_extents,(char *)0x0);
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->destination,(char *)0x0);
  return;
}
