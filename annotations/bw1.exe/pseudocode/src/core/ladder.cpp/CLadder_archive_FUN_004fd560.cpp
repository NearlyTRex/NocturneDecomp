// Name: core_ladder.cpp_CLadder_archive_FUN_004fd560
// Address: 004fd560
// Address Range: [[004fd560, 004fd5d5]]
// Convention: __cdecl
// Signature: void __cdecl core_ladder_cpp_CLadder_archive_FUN_004fd560(CLadder *this_ptr)

#include "nocturne.h"

void __cdecl core_ladder_cpp_CLadder_archive_FUN_004fd560(CLadder *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(&this_ptr->field_0x158,"model")
  ;
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x2d4,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->field_0x2e0,"masterActor");
  core_ladder_cpp_CLadder_cacheRelativePosition_FUN_004fd750(this_ptr);
  if (g_CLadderClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x2fc,"groundType");
  return;
}
