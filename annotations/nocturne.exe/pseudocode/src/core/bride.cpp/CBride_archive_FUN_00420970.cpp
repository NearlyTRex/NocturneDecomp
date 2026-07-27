// Name: core_bride.cpp_CBride_archive_FUN_00420970
// Address: 00420970
// Address Range: [[00420970, 004209f7]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_archive_FUN_00420970(int param_1)

#include "nocturne.h"

void core_bride_cpp_CBride_archive_FUN_00420970(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  if (g_INT_005ad0e0 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"speed");
  }
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  if ((1 < g_INT_005ad0e0) && (g_INT_005ad0e0 < 4)) {
    core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc9c,"guardDistance");
  }
  if (g_INT_005ad0e0 < 3) {
    return;
  }
  core_actor_cpp_FUN_0040cb00(param_1 + 0x150,"state");
  return;
}
