// Name: core_dest.cpp_FUN_00447450
// Address: 00447450
// Address Range: [[00447450, 0044750c]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_FUN_00447450(CActorDestination *this_ptr)

#include "nocturne.h"

void __cdecl core_dest_cpp_FUN_00447450(CActorDestination *this_ptr)

{
  char local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c330((CDemonActor *)this_ptr);
  if (g_CActorDestinationClassVersion < 2) {
    core_actor_cpp_archiveString_FUN_0040b730(local_104,"?whoGoesHere" + 1);
    *(uint *)&this_ptr->field_0x2b4 = 0;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2e4,"whatEvent");
  if (1 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b9e0(&this_ptr->field_0x2b4,"destActor");
  }
  if (2 < g_CActorDestinationClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&this_ptr->field_0x2b8,"destClass");
  }
  if (g_CActorDestinationClassVersion < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x348,"persistantEventFlag");
  return;
}
