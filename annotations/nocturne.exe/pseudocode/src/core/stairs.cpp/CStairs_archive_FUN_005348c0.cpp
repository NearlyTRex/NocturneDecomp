// Name: core_stairs.cpp_CStairs_archive_FUN_005348c0
// Address: 005348c0
// Address Range: [[005348c0, 00534933]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_archive_FUN_005348c0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_archive_FUN_005348c0(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->rise,"rise");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->run,"run");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->width,"width");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->stair_count,"count");
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ground_type,"groundType");
  return;
}
