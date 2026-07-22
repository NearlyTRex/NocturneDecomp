// Name: core_emitter.cpp_CEmitter_archive_FUN_004791a0
// Address: 004791a0
// Address Range: [[004791a0, 00479371]]
// Convention: unknown
// Signature: void core_emitter_cpp_CEmitter_archive_FUN_004791a0(int param_1)

#include "nocturne.h"

void core_emitter_cpp_CEmitter_archive_FUN_004791a0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x150,"emitterType");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x154,"emitterSize");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x164,"eventOn");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1c8,"eventOff");
  if (1 < 0x00000007) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x160,"emitterState");
  }
  if (*(int *)(param_1 + 0x150) == 3) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x234,"laserR");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x238,"laserG");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x23c,"laserB");
    if (2 < 0x00000007) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x230,"laserType");
    }
  }
  if (2 < 0x00000007) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x22c,"maxEmitTime");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x43c,"emitPeriod");
  }
  if (3 < 0x00000007) {
    core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x240,"modelName");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3bc,"rockSpeed");
  }
  if (4 < 0x00000007) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x3c0,"periodicFlag");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x3c4,"maxWaitTime");
  }
  if (5 < 0x00000007) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x3c8,"destActor");
  }
  if (0x00000007 < 7) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3cc,"wavName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x434,"sfxType");
  return;
}
