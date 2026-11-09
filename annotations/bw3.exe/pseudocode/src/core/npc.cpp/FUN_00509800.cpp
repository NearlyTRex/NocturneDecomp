// Name: core_npc.cpp_FUN_00509800
// Address: 00509800
// Address Range: [[00509800, 005098ff]]
// Convention: unknown
// Signature: void core_npc_cpp_FUN_00509800(CDemonActor *param_1)

#include "nocturne.h"

void core_npc_cpp_FUN_00509800(CDemonActor *param_1)

{
  if (g_CNPCClassVersion < 2) {
    core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf0,"hitPoints");
    return;
  }
  core_charactr_cpp_FUN_0042b450(param_1);
  if (2 < g_CNPCClassVersion) {
    core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 1),"modelName");
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 1),"motion state");
  }
  if (3 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0
              ((int *)&param_1[0x181].field_0x150,"shootMe");
  }
  if (4 < g_CNPCClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x181].field_0x154,"poolMe")
    ;
  }
  if (5 < g_CNPCClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x182,"speed");
  }
  if (6 < g_CNPCClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x182].field_0x14,"fadeTime");
  }
  if (g_CNPCClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x182].field_0xc,"startOpc");
  return;
}
