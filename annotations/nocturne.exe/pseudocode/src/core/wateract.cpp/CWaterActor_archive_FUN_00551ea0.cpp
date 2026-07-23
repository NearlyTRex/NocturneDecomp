// Name: core_wateract.cpp_CWaterActor_archive_FUN_00551ea0
// Address: 00551ea0
// Address Range: [[00551ea0, 00552091]]
// Convention: unknown
// Signature: void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(int param_1)

#include "nocturne.h"

void core_wateract_cpp_CWaterActor_archive_FUN_00551ea0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"size");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x15c,"opacity");
  if (0x00000006 == 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x160,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x164,"timeToMove");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x16c,"moveSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1ac,"moveEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x274,"param");
  }
  if (2 < 0x00000006) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x160,"heightDelta");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x164,"timeToMoveUp");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x168,"timeToMoveDown");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x16c,"moveUpSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x18c,"moveDownSound");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1ac,"moveUpEvent");
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x210,"moveDownEvent");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x274,"param");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x278,"state");
  }
  if (3 < 0x00000006) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x27c,"patchSize");
  }
  if (4 < 0x00000006) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x280,"roundFlag");
  }
  if (0x00000006 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x284,"colR");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x288,"colG");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x28c,"colB");
  return;
}
