// Name: FUN_0040f390
// Address: 0040f390
// Address Range: [[0040f390, 0040f45d]]
// Convention: unknown
// Signature: void FUN_0040f390(int param_1)

#include "nocturne.h"

void FUN_0040f390(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2cc,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x30c,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x310,"ammoType");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x314,0);
  if (1 < 0x00000004) {
    core_actor_cpp_archiveActor_FUN_0040c980(param_1 + 0x318,"item");
  }
  if (2 < 0x00000004) {
    core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x31c,"hasCollision");
  }
  if (0x00000004 < 4) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 800,"openSound");
  return;
}
