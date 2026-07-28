// Name: core_crate.cpp_FUN_0043cc50
// Address: 0043cc50
// Address Range: [[0043cc50, 0043cc94]]
// Convention: unknown
// Signature: void core_crate_cpp_FUN_0043cc50(CDemonActor *param_1)

#include "nocturne.h"

void core_crate_cpp_FUN_0043cc50(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  if (g_INT_005ad3c4 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[2].orient.vec.y,"lastPlatform");
  return;
}
