// Name: core_pendulum.cpp_FUN_00515f00
// Address: 00515f00
// Address Range: [[00515f00, 0051609b]]
// Convention: unknown
// Signature: void core_pendulum_cpp_FUN_00515f00(CDemonActor *param_1)

#include "nocturne.h"

void core_pendulum_cpp_FUN_00515f00(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x17c,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x244,"moving");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x248,"param");
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x250,"maxAngle");
  if (1 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x254,"swooshSound");
  }
  if (2 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x278,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x298,"creak2Sound");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x274,"swooshPhaseBias");
  }
  if (3 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x1c,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x20,"killEnemy");
  }
  if (4 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x24,"decay");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[2].field_0x28,"decayTimer");
  }
  if (5 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x2c,"groundType");
  }
  if (6 < g_CPendulumClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x1e0,"stopEvent");
  }
  if (g_CPendulumClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[2].field_0x30,"oneShot");
  return;
}
