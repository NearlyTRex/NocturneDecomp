// Name: core_ladder.cpp_CLadder_archive_FUN_005029c0
// Address: 005029c0
// Address Range: [[005029c0, 00502a35]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_archive_FUN_005029c0(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_archive_FUN_005029c0(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(&this_ptr->model,"model");
  core_actor_cpp_archiveVector_FUN_0040b340(&this_ptr->ladder_size,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040b870(&this_ptr->master_actor,"masterActor");
  core_ladder_cpp_CLadder_FUN_00502b80(this_ptr);
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->ground_type,"groundType");
  return;
}
