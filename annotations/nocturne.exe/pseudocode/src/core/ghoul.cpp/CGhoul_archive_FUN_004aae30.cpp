// Name: core_ghoul.cpp_CGhoul_archive_FUN_004aae30
// Address: 004aae30
// Address Range: [[004aae30, 004aaf34]]
// Convention: unknown
// Signature: void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(int param_1)

#include "nocturne.h"

void core_ghoul_cpp_CGhoul_archive_FUN_004aae30(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (INT_005b9650 < 4) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if ((1 < INT_005b9650) && (INT_005b9650 < 7)) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  if (2 < INT_005b9650) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd40,"livesLeft");
  }
  if (4 < INT_005b9650) {
    core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  }
  if (INT_005b9650 < 6) {
    return;
  }
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(param_1 + 0x150,"partStatus");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd44,"spasmCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd40,"livesLeft");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd30,"ariseTimer");
  return;
}
