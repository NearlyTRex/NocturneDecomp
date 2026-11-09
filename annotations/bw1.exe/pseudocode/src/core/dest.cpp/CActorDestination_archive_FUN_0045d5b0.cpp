// Name: core_dest.cpp_CActorDestination_archive_FUN_0045d5b0
// Address: 0045d5b0
// Address Range: [[0045d5b0, 0045d66c]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0045d5b0(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0045d5b0(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_archiveString_FUN_0040b440(local_104,"?whoGoesHere" + 1);
    *(uint *)&this_ptr->field_0x158 = 0;
  }
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x188,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x158,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x15c,"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x1ec,"persistantEventFlag");
  return;
}
