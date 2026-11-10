// Name: core_actor.cpp_CDemonActor_archive_FUN_0040c280
// Address: 0040c280
// Address Range: [[0040c280, 0040c31a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c280(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c280(CDemonActor *this_ptr)

{
  byte local_8 [4];
  
  core_actor_cpp_archiveLocation_FUN_0040b540(&this_ptr->location,"location");
  core_actor_cpp_archiveOrientation_FUN_0040b4a0(&this_ptr->orient,"orient");
  if (g_CDemonActorClassVersion < 7) {
    core_actor_cpp_archiveFloat_FUN_0040b830(local_8,&DAT_005b5d89);
    if (g_CDemonActorClassVersion < 6) {
      return;
    }
  }
  else if (g_CDemonActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0
            ((int *)&this_ptr->lifecycle_state,"wasCreated");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->create_prob,"createProb");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->create_event,"createEvent");
  return;
}
