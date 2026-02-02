// Name: core_litecone.cpp_CLightCone_archive_FUN_00506d00
// Address: 00506d00
// Address Range: [[00506d00, 00506d80]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_archive_FUN_00506d00(CLightCone *this_ptr)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_archive_FUN_00506d00(CLightCone *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->fov,"fov");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->falloff,"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->state,"state");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_event,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->off_event,"offEvent");
  return;
}
