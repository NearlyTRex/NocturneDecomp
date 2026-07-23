// Name: core_spike.cpp_CSpike_archive_FUN_005335f0
// Address: 005335f0
// Address Range: [[005335f0, 0053373f]]
// Convention: unknown
// Signature: void core_spike_cpp_CSpike_archive_FUN_005335f0(int param_1)

#include "nocturne.h"

void core_spike_cpp_CSpike_archive_FUN_005335f0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"spikeType");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d0,"spikeState");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d4,"areWeActive");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2e4,"extendDistance");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2e8,"startEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x34c,"stopEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x3b0,"extendEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x414,"retractEvent");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x478,"extendTime");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x47c,"retractTime");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x484,"extendSound");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x4e8,"retractSound");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x54c,"period");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x550,"damageStrength");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x554,"param");
  return;
}
