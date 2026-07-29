// Name: core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
// Address: 0040d2d0
// Address Range: [[0040d2d0, 0040d36a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(CDemonActor *this_ptr)

{
  float local_8;
  
  core_actor_cpp_archiveLocation_FUN_0040c590(&this_ptr->location,"location");
  core_actor_cpp_archiveOrientation_FUN_0040c4f0(&(this_ptr->orient).orient,"orient");
  if (g_INT_005acc88 < 7) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&local_8,(char *)&FLOAT_00577f15);
    if (g_INT_005acc88 < 6) {
      return;
    }
  }
  else if (g_INT_005acc88 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&this_ptr->lifecycle_state,"wasCreated");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->create_prob,"createProb");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->create_event,"createEvent");
  return;
}
