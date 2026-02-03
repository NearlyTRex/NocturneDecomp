// Name: core_dest.cpp_CActorDestination_archive_FUN_0046fdb0
// Address: 0046fdb0
// Address Range: [[0046fdb0, 0046fe6c]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0046fdb0(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0046fdb0(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_archiveString_FUN_0040b5c0(local_104,"whoGoesHere");
    this_ptr->dest_actor = (CDemonActor *)0x0;
  }
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->what_event,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->dest_actor,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->dest_class,"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0
            (&this_ptr->persistent_event_flag,"persistantEventFlag");
  return;
}
