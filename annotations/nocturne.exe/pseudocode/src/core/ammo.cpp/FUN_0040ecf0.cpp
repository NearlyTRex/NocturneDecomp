// Name: core_ammo.cpp_FUN_0040ecf0
// Address: 0040ecf0
// Address Range: [[0040ecf0, 0040ed4f]]
// Convention: unknown
// Signature: void core_ammo_cpp_FUN_0040ecf0(int param_1)

#include "nocturne.h"

void core_ammo_cpp_FUN_0040ecf0(int param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(param_1 + 0x150,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x2cc,"weaponClassName");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x30c,"ammoCount");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x310,"ammoType");
  return;
}
