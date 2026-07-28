// Name: core_ladder.cpp_CLadder_archive_FUN_004c44f0
// Address: 004c44f0
// Address Range: [[004c44f0, 004c4565]]
// Convention: unknown
// Signature: void core_ladder_cpp_CLadder_archive_FUN_004c44f0(CDemonActor *param_1)

#include "nocturne.h"

void core_ladder_cpp_CLadder_archive_FUN_004c44f0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"model");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)&param_1[2].location.area_id,"ladderSize");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[2].orient.vec.z,"masterActor");
  core_ladder_cpp_FUN_004c46b0(param_1);
  if (INT_005bac68 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[2].orient_matrix.m + 2),"groundType");
  return;
}
