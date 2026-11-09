// Name: core_litecone.cpp_CLightCone_archive_FUN_004e41d0
// Address: 004e41d0
// Address Range: [[004e41d0, 004e4250]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004e41d0(CLightCone *this_ptr)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_archive_FUN_004e41d0(CLightCone *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x158,&DAT_005c6b27);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x15c,"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x160,"state");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x164,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x1c8,"offEvent");
  return;
}
