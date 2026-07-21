// Name: core_backgnd.cpp_CBackgroundActor_archive_FUN_00410040
// Address: 00410040
// Address Range: [[00410040, 00410098]]
// Convention: unknown
// Signature: void core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(int param_1)

#include "nocturne.h"

void core_backgnd_cpp_CBackgroundActor_archive_FUN_00410040(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2cc,"collideWithMe");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x2d0,"groundType");
  return;
}
