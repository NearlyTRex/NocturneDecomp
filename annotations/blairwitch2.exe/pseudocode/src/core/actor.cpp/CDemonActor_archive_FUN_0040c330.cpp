// Name: core_actor.cpp_CDemonActor_archive_FUN_0040c330
// Address: 0040c330
// Address Range: [[0040c330, 0040c3ca]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c330(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040c330(CDemonActor *this_ptr)

{
  float local_8;
  
  core_actor_cpp_archiveLocation_FUN_0040b5f0(&this_ptr->location,"location");
  core_actor_cpp_archiveOrientation_FUN_0040b550(&(this_ptr->orient).orient,"orient");
  if (g_CDemonActorClassVersion < 7) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&local_8,&DAT_005cadda);
    if (g_CDemonActorClassVersion < 6) {
      return;
    }
  }
  else if (g_CDemonActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->lifecycle_state,"wasCreated");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->create_prob,"createProb");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->create_event,"createEvent");
  return;
}
