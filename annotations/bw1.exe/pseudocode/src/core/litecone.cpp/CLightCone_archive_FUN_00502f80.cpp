// Name: core_litecone.cpp_CLightCone_archive_FUN_00502f80
// Address: 00502f80
// Address Range: [[00502f80, 00503000]]
// Convention: __cdecl
// Signature: void __cdecl core_litecone_cpp_CLightCone_archive_FUN_00502f80(CLightCone *this_ptr)

#include "nocturne.h"

void __cdecl core_litecone_cpp_CLightCone_archive_FUN_00502f80(CLightCone *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x158,&DAT_005e7062);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x15c,"falloff");
  if (g_CLightConeClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x160,"state");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x164,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x1c8,"offEvent");
  return;
}
