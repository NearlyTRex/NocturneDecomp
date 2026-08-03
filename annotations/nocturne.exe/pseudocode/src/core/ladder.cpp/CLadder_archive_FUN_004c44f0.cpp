// Name: core_ladder.cpp_CLadder_archive_FUN_004c44f0
// Address: 004c44f0
// Address Range: [[004c44f0, 004c4565]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_archive_FUN_004c44f0(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_archive_FUN_004c44f0(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(&this_ptr->model,"model");
  core_actor_cpp_archiveVector_FUN_0040c450(&this_ptr->ladder_size,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->master_actor,"masterActor");
  core_ladder_cpp_FUN_004c46b0(this_ptr);
  if (INT_005bac68 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->ground_type,"groundType");
  return;
}
