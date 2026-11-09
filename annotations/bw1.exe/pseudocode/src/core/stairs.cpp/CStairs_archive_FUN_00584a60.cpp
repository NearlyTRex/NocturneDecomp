// Name: core_stairs.cpp_CStairs_archive_FUN_00584a60
// Address: 00584a60
// Address Range: [[00584a60, 00584ad3]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_archive_FUN_00584a60(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_archive_FUN_00584a60(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x158,&DAT_005f6354);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x15c,&DAT_005f6359);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->field_0x160,"width");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x16c,"count");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0xa30,"groundType");
  return;
}
