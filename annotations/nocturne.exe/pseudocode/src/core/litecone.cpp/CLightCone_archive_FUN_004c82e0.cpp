// Name: core_litecone.cpp_CLightCone_archive_FUN_004c82e0
// Address: 004c82e0
// Address Range: [[004c82e0, 004c8360]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004c82e0(CLightCone *this_ptr)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004c82e0(CLightCone *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->fov,"fov");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->falloff,"falloff");
  if (INT_005bacf8 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->on_event,"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->off_event,"offEvent");
  return;
}
