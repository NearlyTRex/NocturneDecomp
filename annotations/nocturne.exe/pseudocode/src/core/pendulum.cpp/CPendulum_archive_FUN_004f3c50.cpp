// Name: core_pendulum.cpp_CPendulum_archive_FUN_004f3c50
// Address: 004f3c50
// Address Range: [[004f3c50, 004f3deb]]
// Convention: unknown
// Signature: void core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(int param_1)

#include "nocturne.h"

void core_pendulum_cpp_CPendulum_archive_FUN_004f3c50(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00
            (param_1 + 0x150,"?modelName" + 1);
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2cc,"startEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x394,"moving");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x398,"param");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3a0,"maxAngle");
  if (1 < 0x00000008) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3a4,"swooshSound");
  }
  if (2 < 0x00000008) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3c8,"creak1Sound");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 1000,"creak2Sound");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3c4,"swooshPhaseBias");
  }
  if (3 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x420,"killHero");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x424,"killEnemy");
  }
  if (4 < 0x00000008) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x428,"decay");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x42c,"decayTimer");
  }
  if (5 < 0x00000008) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x430,"groundType");
  }
  if (6 < 0x00000008) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x330,"stopEvent");
  }
  if (0x00000008 < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x434,"oneShot");
  return;
}
