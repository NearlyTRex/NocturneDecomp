// Name: core_enemy.cpp_CEnemy_archive_FUN_004796c0
// Address: 004796c0
// Address Range: [[004796c0, 00479811]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004796c0(int param_1)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_archive_FUN_004796c0(int param_1)

{
  if (INT_005b7604 < 4) {
    core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
    if (1 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
    }
    if (2 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x2434,"hitPoints");
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbc90,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_archive_FUN_004244b0(param_1);
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbc90,"poolMe");
    if (4 < INT_005b7604) {
      core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbc94,"randomizeMe");
    }
    if (5 < INT_005b7604) {
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd1c,"scriptVictim");
    }
    if (6 < INT_005b7604) {
      core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0xbcb0,"patrolNamePattern");
    }
    if (7 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
    }
    if (8 < INT_005b7604) {
      core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbd18,"victimHeight");
    }
    if (9 < INT_005b7604) {
      core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbca4,"victim");
      return;
    }
  }
  return;
}
