// Name: core_dest.cpp_CActorDestination_archive_FUN_00459500
// Address: 00459500
// Address Range: [[00459500, 004595bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_00459500(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_00459500(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_archiveString_FUN_0040b680(local_104,"?whoGoesHere" + 1);
    *(uint *)&this_ptr->field_0x158 = 0;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x188,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->field_0x158,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x15c,"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->field_0x1ec,"persistantEventFlag");
  return;
}
