// Name: core_litecone.cpp_CLightCone_archive_FUN_004e43a0
// Address: 004e43a0
// Address Range: [[004e43a0, 004e4420]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004e43a0(CLightCone *this_ptr)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004e43a0(CLightCone *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->fov,&DAT_005dc11a);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->falloff,"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->on_event,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->off_event,"offEvent");
  return;
}
