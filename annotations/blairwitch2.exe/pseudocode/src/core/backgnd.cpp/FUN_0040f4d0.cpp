// Name: core_backgnd.cpp_FUN_0040f4d0
// Address: 0040f4d0
// Address Range: [[0040f4d0, 0040f550]]
// Convention: unknown
// Signature: void core_backgnd_cpp_FUN_0040f4d0(CDemonActor *param_1)

#include "nocturne.h"

void core_backgnd_cpp_FUN_0040f4d0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60
            (&param_1[1].field_0x4,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040b960
            ((int *)&param_1[1].field_0x180,"collideWithMe");
  if (g_CBackgroundActorClassVersion < 2) {
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x184,"groundType")
    ;
    if (g_CBackgroundActorClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)(param_1 + 1),"castShadowsFlag");
  return;
}
