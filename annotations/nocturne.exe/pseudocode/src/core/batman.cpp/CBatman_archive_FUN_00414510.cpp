// Name: core_batman.cpp_CBatman_archive_FUN_00414510
// Address: 00414510
// Address Range: [[00414510, 004145ca]]
// Convention: unknown
// Signature: void core_batman_cpp_CBatman_archive_FUN_00414510(int param_1)

#include "nocturne.h"

void core_batman_cpp_CBatman_archive_FUN_00414510(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"motion state");
  if (INT_005acfbc < 2) {
    if (INT_005acfbc < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbd24,"fallEvent");
    if (INT_005acfbc < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbdc0,"mistState");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbdc4,"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0xbdc8,"newPos");
  return;
}
