// Name: core_stairs.cpp_CStairs_archive_FUN_00562010
// Address: 00562010
// Address Range: [[00562010, 00562083]]
// Convention: __cdecl
// Signature: void __cdecl core_stairs_cpp_CStairs_archive_FUN_00562010(CStairs *this_ptr)

#include "nocturne.h"

void __cdecl core_stairs_cpp_CStairs_archive_FUN_00562010(CStairs *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->rise,&DAT_005eb150);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->run,&DAT_005eb155);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&this_ptr->width,"width");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->stair_count,"count");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&this_ptr->ground_type,"groundType");
  return;
}
