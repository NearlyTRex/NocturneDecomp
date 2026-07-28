// Name: core_marquee.cpp_FUN_004cc870
// Address: 004cc870
// Address Range: [[004cc870, 004cc8e3]]
// Convention: unknown
// Signature: void core_marquee_cpp_FUN_004cc870(CDemonActor *param_1)

#include "nocturne.h"

void core_marquee_cpp_FUN_004cc870(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].actor_name,"courseName");
  core_actor_cpp_archiveFloat_FUN_0040c880((float *)&param_1[1].location,"totalTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1[1].location.position.y,"param");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].location.position.z,"phase");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].orient_matrix.m + 1),"type");
  return;
}
