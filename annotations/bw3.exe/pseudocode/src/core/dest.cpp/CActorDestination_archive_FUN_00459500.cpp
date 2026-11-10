// Name: core_dest.cpp_CActorDestination_archive_FUN_00459500
// Address: 00459500
// Address Range: [[00459500, 004595bc]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_00459500(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_00459500(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_archiveString_FUN_0040b680(local_104,"?whoGoesHere" + 1);
    this_ptr->dest_actor = (CDemonActor *)0x0;
  }
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->what_event,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->dest_actor,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->dest_class,"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            (&this_ptr->persistent_event_flag,"persistantEventFlag");
  return;
}
