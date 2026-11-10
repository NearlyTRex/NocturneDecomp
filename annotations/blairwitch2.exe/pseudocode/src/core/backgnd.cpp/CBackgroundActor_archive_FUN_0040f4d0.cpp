// Name: core_backgnd.cpp_CBackgroundActor_archive_FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040f550]]
// Convention: __cdecl
// Signature: void __cdecl core_backgnd_cpp_CBackgroundActor_archive_FUN_0040f4d0(CBackgroundActor *this_ptr)

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_archive_FUN_0040f4d0(CBackgroundActor *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(&this_ptr->model,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->collide_with_me,"collideWithMe");
  if (g_CBackgroundActorClassVersion < 2) {
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ground_type,"groundType");
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&this_ptr->field_0x2b4,"castShadowsFlag");
  return;
}
