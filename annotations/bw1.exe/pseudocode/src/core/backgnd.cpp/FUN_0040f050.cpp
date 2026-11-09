// Name: core_backgnd.cpp_FUN_0040f050
// Address: 0040f050
// Address Range: [[0040f050, 0040f0d0]]
// Convention: unknown
// Signature: void core_backgnd_cpp_FUN_0040f050(CDemonActor *param_1)

#include "nocturne.h"

void core_backgnd_cpp_FUN_0040f050(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770
            (&param_1[1].field_0x4,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[2].field_0x28,"collideWithMe")
  ;
  if (g_CBackgroundActorClassVersion < 2) {
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[2].field_0x2c,"groundType");
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)(param_1 + 1),"castShadowsFlag");
  return;
}
