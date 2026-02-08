// Name: core_stairs.cpp_CStairs_archive_FUN_005ba4f0
// Address: 005ba4f0
// Address Range: [[005ba4f0, 005ba563]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_archive_FUN_005ba4f0(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_archive_FUN_005ba4f0(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->rise,"rise");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->run,"run");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->width,"width");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->stair_count,"count");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->ground_type,"groundType");
  return;
}
