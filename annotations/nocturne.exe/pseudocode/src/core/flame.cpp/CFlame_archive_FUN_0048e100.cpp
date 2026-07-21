// Name: core_flame.cpp_CFlame_archive_FUN_0048e100
// Address: 0048e100
// Address Range: [[0048e100, 0048e21a]]
// Convention: unknown
// Signature: void core_flame_cpp_CFlame_archive_FUN_0048e100(int param_1)

#include "nocturne.h"

void core_flame_cpp_CFlame_archive_FUN_0048e100(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x150,"?flameSize" + 1);
  if (1 < 0x00000007) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1a0,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x1a4,"globeScalar");
  }
  if (2 < 0x00000007) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x1b0,"onEvent");
  }
  if (3 < 0x00000007) {
    core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x214,"onEvent");
  }
  if (4 < 0x00000007) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x1ac,"flameState");
  }
  if (5 < 0x00000007) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x278,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x27c,"randomness");
  }
  if (0x00000007 < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x280,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x284,"burnEnemy");
  return;
}
