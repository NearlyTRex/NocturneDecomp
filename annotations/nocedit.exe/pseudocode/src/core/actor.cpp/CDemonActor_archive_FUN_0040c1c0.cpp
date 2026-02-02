// Name: core_actor.cpp_CDemonActor_archive_FUN_0040c1c0
// Address: 0040c1c0
// Address Range: [[0040c1c0, 0040c25a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(CDemonActor *this_ptr)

{
  float local_8;
  
  core_actor_cpp_archiveLocation_FUN_0040b480(&this_ptr->location,"location");
  core_actor_cpp_archiveOrientation_FUN_0040b3e0(&this_ptr->orient,"orient");
  if (g_CDemonActorClassVersion < 7) {
    core_actor_cpp_archiveFloat_FUN_0040b770(&local_8,"fov");
    if (g_CDemonActorClassVersion < 6) {
      return;
    }
  }
  else if (g_CDemonActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->was_created,"wasCreated");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->create_prob,"createProb");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->create_event,"createEvent");
  return;
}
