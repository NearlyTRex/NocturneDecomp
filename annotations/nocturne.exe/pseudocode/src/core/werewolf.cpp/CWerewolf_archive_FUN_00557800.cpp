// Name: core_werewolf.cpp_CWerewolf_archive_FUN_00557800
// Address: 00557800
// Address Range: [[00557800, 0055793b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(int param_1)

#include "nocturne.h"

void core_werewolf_cpp_CWerewolf_archive_FUN_00557800(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if (INT_005c1614 < 3) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  if (1 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd3c,"lightUpEyes");
  }
  if (3 < INT_005c1614) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd50,"chainAnchor");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd54,"chainLength");
  }
  if (4 < INT_005c1614) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd24,"type");
  }
  if (INT_005c1614 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd60,"phase");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd64,"phaseTimer");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd58,"alpha1");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd5c,"alpha2");
  return;
}
