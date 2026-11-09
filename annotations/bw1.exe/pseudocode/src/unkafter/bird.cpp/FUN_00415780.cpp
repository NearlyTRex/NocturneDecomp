// Name: unkafter_bird.cpp_FUN_00415780
// Address: 00415780
// Address Range: [[00415780, 00415820]]
// Convention: unknown
// Signature: void unkafter_bird_cpp_FUN_00415780(CDemonActor *param_1)

#include "nocturne.h"

void unkafter_bird_cpp_FUN_00415780(CDemonActor *param_1)

{
  if (1 < g_CBirdClassVersion) {
    core_charactr_cpp_FUN_0042c7f0(param_1);
    return;
  }
  core_actor_cpp_CDemonActor_archive_FUN_0040c040(param_1);
  core_actor_cpp_FUN_0040b7f0((CDeformableModelInstance *)(param_1 + 1),"modelName");
  core_actor_cpp_FUN_0040b870((CMotionController *)(param_1 + 1),"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x1b].field_0xf0,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[0x179].field_0x14,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b670((int *)&param_1[0x179].field_0x18,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&param_1[0x179].field_0x1c,"speed");
  core_charactr_cpp_FUN_0042c7f0(param_1);
  return;
}
