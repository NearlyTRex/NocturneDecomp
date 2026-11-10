// Name: core_ladder.cpp_CLadder_archive_FUN_004df880
// Address: 004df880
// Address Range: [[004df880, 004df8f5]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_archive_FUN_004df880(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_archive_FUN_004df880(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(&this_ptr->base);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(&this_ptr->model,"?model" + 1);
  core_actor_cpp_archiveVector_FUN_0040b400(&this_ptr->ladder_size,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040b930(&this_ptr->master_actor,"masterActor");
  core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004dfa70(this_ptr);
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&this_ptr->ground_type,"groundType");
  return;
}
