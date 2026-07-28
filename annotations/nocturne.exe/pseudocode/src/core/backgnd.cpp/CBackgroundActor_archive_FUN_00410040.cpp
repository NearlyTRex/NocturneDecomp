// Name: core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410098]]
// Convention: unknown
// Signature: void core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(CDemonActor *param_1)

#include "nocturne.h"

void core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            ((CKeyFramedModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(&param_1[2].location.area_id,"collideWithMe");
  if (g_INT_005acf20 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&param_1[2].orient,"groundType");
  return;
}
