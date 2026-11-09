// Name: core_teleport.cpp_CTeleport_archive_FUN_005950c0
// Address: 005950c0
// Address Range: [[005950c0, 005950f1]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_005950c0(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_005950c0(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,0);
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x164,0);
  return;
}
