// Name: core_teleport.cpp_CTeleport_archive_FUN_00568fa0
// Address: 00568fa0
// Address Range: [[00568fa0, 00568fd1]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00568fa0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_00568fa0(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->field_0x158,0);
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x164,0);
  return;
}
