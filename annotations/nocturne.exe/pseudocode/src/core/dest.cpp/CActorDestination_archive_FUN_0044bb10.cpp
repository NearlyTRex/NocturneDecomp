// Name: core_dest.cpp_CActorDestination_archive_FUN_0044bb10
// Address: 0044bb10
// Address Range: [[0044bb10, 0044bbcc]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  if (g_INT_005ad4bc < 2) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_104,"whoGoesHere");
    this_ptr->dest_actor = (CDemonActor *)0x0;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->what_event,"whatEvent");
  if (1 < g_INT_005ad4bc) {
    core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->dest_actor,"destActor");
  }
  if (2 < g_INT_005ad4bc) {
    core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->dest_class,"destClass");
  }
  if (g_INT_005ad4bc < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            (&this_ptr->persistent_event_flag,"persistantEventFlag");
  return;
}
