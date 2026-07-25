// Name: core_tvbat.cpp_CTVBat_archive_FUN_0054b310
// Address: 0054b310
// Address Range: [[0054b310, 0054b458]]
// Convention: unknown
// Signature: void core_tvbat_cpp_CTVBat_archive_FUN_0054b310(int param_1)

#include "nocturne.h"

void core_tvbat_cpp_CTVBat_archive_FUN_0054b310(int param_1)

{
  if (INT_005c1174 < 3) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  }
  else {
    core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  }
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0xbeac,"homePos");
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0xbd28,"modelName");
  if (1 < INT_005c1174) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbea4,"speed");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbeb8,"maxDistance");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbebc,"maxHeight");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbec0,"rotSpeed");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbec4,"moveSpeed");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbecc,"followOrders");
  }
  if (INT_005c1174 < 4) {
    *(uint *)(param_1 + 0xbee0) = 0;
    if (INT_005c1174 < 5) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbee0,"state");
    if (INT_005c1174 < 5) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbee4,0);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbf48,"periodicSoundTimerMin");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbf4c,"periodicSoundTimerMax");
  return;
}
