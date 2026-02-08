// Name: core_teleport.cpp_CTeleport_archive_FUN_005dab30
// Address: 005dab30
// Address Range: [[005dab30, 005dab61]]
// Convention: __cdecl
// Signature: void __cdecl core_teleport_cpp_CTeleport_archive_FUN_005dab30(CTeleport *this_ptr)

#include "nocturne.h"

void __cdecl core_teleport_cpp_CTeleport_archive_FUN_005dab30(CTeleport *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveVector_FUN_0040b340((CVector3f *)&this_ptr->unk1,(char *)0x0);
  core_actor_cpp_archiveActor_FUN_0040b870((CDemonActor *)&this_ptr->destination,(char *)0x0);
  return;
}
