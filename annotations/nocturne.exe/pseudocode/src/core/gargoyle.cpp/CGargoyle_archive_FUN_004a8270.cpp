// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004a8270
// Address: 004a8270
// Address Range: [[004a8270, 004a8315]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(int param_1)

#include "nocturne.h"

void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(int param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0xbc8c,"@@speed" + 2);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(param_1 + 0x150,"modelName");
  FUN_0040cb00(param_1 + 0x150,"motion state");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd54,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd58,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0xbd5c,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0xbd60,"homeBase");
  return;
}
