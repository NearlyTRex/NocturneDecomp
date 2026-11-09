// Name: unkafter_bird.cpp_FUN_0040ff80
// Address: 0040ff80
// Address Range: [[0040ff80, 00410020]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_0040ff80(CDemonActor *param_1)

#include "nocturne.h"

void unkafter_bird_cpp_FUN_0040ff80(CDemonActor *param_1)

{
  if (1 < g_CBirdClassVersion) {
    core_charactr_cpp_FUN_0042b450(param_1);
    return;
  }
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 1),"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf0,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x181].field_0x150,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x181].field_0x154,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x182,"speed");
  core_charactr_cpp_FUN_0042b450(param_1);
  return;
}
