// Name: core_flame.cpp_FUN_004a0460
// Address: 004a0460
// Address Range: [[004a0460, 004a057a]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_004a0460(CDemonActor *param_1)

#include "nocturne.h"

void core_flame_cpp_FUN_004a0460(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveVector_FUN_0040b4b0(param_1 + 1,"?flameSize" + 1);
  if (1 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x50,"whichFlame");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x54,"globeScalar");
  }
  if (2 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x60,"onEvent");
  }
  if (3 < g_CFlameClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0xc4,"onEvent");
  }
  if (4 < g_CFlameClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x5c,"flameState");
  }
  if (5 < g_CFlameClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x128,"intensity");
    core_actor_cpp_archiveFloat_FUN_0040b8e0(&param_1[1].field_0x12c,"randomness");
  }
  if (g_CFlameClassVersion < 7) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x130,"burnHero");
  core_actor_cpp_archiveInteger_FUN_0040b960((int *)&param_1[1].field_0x134,"burnEnemy");
  return;
}
