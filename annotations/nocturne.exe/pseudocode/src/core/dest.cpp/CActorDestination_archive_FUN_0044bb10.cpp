// Name: core_dest.cpp_CActorDestination_archive_FUN_0044bb10
// Address: 0044bb10
// Address Range: [[0044bb10, 0044bbcc]]
// Convention: __cdecl
// Signature: void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(int param_1)

#include "nocturne.h"

void __cdecl core_dest_cpp_CActorDestination_archive_FUN_0044bb10(int param_1)

{
  byte local_104 [256];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  if (0x00000004 < 2) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_104,"?whoGoesHere" + 1);
    *(uint *)(param_1 + 0x150) = 0;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x180,"whatEvent");
  if (1 < 0x00000004) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x150,"destActor");
  }
  if (2 < 0x00000004) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x154,"destClass");
  }
  if (0x00000004 < 4) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1e4,"persistantEventFlag");
  return;
}
