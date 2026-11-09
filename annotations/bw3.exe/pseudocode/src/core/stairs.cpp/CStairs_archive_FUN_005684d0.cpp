// Name: core_stairs.cpp_CStairs_archive_FUN_005684d0
// Address: 005684d0
// Address Range: [[005684d0, 00568543]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_archive_FUN_005684d0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_archive_FUN_005684d0(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280((CDemonActor *)this_ptr);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x158,&DAT_005d5c80);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x15c,&DAT_005d5c85);
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x160,"width");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0x16c,"count");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->field_0xa30,"groundType");
  return;
}
